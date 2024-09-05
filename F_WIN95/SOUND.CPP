#include "SDL_audio.h"
#include "all.h"
#include "SDL.h"

const unsigned AUDIO_FREQUENCY = 11025;
const unsigned AUDIO_CHANNELS = 1;

const SDL_AudioFormat AUDIO_FORMAT = AUDIO_S16LSB;

SDL_AudioDeviceID dev;

static void audio_callback(void* udata, Uint8* stream, int len) {
    SDL_memset(stream, 0, len);
    callbackhang((short*)stream, nullptr);
}

void init_sound() {
    SDL_AudioSpec spec;
    SDL_memset(&spec, 0, sizeof(spec));
    spec.callback = audio_callback;
    spec.freq = AUDIO_FREQUENCY;
    spec.channels = AUDIO_CHANNELS;
    spec.samples = AUDIO_SAMPLES;
    spec.format = AUDIO_FORMAT;

    SDL_AudioSpec got;

    if (SDL_InitSubSystem(SDL_INIT_AUDIO) < 0) {
        hiba("failed to initialize audio subsystem", SDL_GetError());
    }
    dev = SDL_OpenAudioDevice(NULL, 0, &spec, &got, 0);
    if (dev == 0) {
        hiba("failed to open audio device", SDL_GetError());
    }
    if (got.format != spec.format) {
        hiba("failed to get desired audio format");
    }
    SDL_PauseAudioDevice(dev, 0);
}

void finish_sound() { SDL_CloseAudioDevice(dev); }
