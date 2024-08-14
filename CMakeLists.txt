cmake_minimum_required(VERSION 3.20)

project(Across LANGUAGES CXX)

add_executable(across_w WIN32)

set_property(TARGET across_w PROPERTY CXX_STANDARD 20)

set_property(TARGET across_w PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

file(GLOB SOURCES CONFIGURE_DEPENDS "*.CPP" "F_WIN95/*.CPP" "*.H" "F_WIN95/*.H" "*.rc" "*.ico")

string(JOIN "|" EXCLUSIONS
    "D_V\\.CPP"
    "D_K\\.CPP"
    "HATTER\\.CPP"
    "KIRAJ640\\.CPP"
    "EDTARGY\\.CPP"
    "H_\\.CPP"
    "PICL8VES\\.CPP"
    "MOUSE86\\.CPP"
    "MOUSE386\\.CPP"
    "PICMCGA\\.CPP"
    "RAYBACK\\.CPP"
    "PICLOW\\.CPP"
    "H_TULMIN\\.CPP"
    "D_STOPER\\.CPP"
    "D_DD\\.CPP"
    "H_HIGH\\.CPP"
    "CRCCHECK\\.CPP"
    "BGI\\.CPP"
    "MAIN\\.CPP"
    "ABC_MAKE\\.CPP"
    "GRAPH\\.CPP"
)

list(FILTER SOURCES EXCLUDE REGEX "${EXCLUSIONS}")

target_include_directories(across_w PRIVATE
    "${PROJECT_SOURCE_DIR}" "${PROJECT_SOURCE_DIR}/F_WIN95"
)

target_sources(across_w PRIVATE ${SOURCES})

target_link_libraries(across_w winmm ddraw)
