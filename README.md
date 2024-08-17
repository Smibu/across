# Action SuperCross Windows port

This is an unofficial port of Action SuperCross to Windows.

## Known limitations

* Editor does not work
* Sound does not work
* Requires a DirectDraw wrapper library (e.g. DXGL)

## Changes

* Customizable controls (including alovolt, brake alias and ESC alias)
* Centered camera by default (disable with `nocenteredcam.inf` file)
* Option to use lev and rec subdirs, and get unpacked res files from exe dir instead of parent dir (enable with `newdirs.inf`)
* Death/finish delay removed
* 1920x1080 resolution support
* Item limit in lists increased to 20000 (from 600)
* Replay filename length limit increased to 15 (from 8)
* Bike size (zoom) min and max bounds extended
* Included 5 levels from Across 1.1 in internals (after Apple Harvest)
* Start brake bug fixed
* Some crashes fixed

## Development

Install CMake. For Visual Studio 2022, generate project files with:

```
cmake -G "Visual Studio 17 2022" -A Win32 -B build .
```

and open `build/Across.sln`.

## Contributing

The scope of this repo is to provide a Windows port of Action SuperCross along with bug fixes and simple quality-of-life changes.
So, only issues and PRs from these categories may be accepted:

* non-esoteric bug fix
* porting some missing feature (editor or sound)
* simple quality-of-life feature or change

For example, please don't create issues or PRs that are about:

* code style consistency fixes
* typo fixes
* translating Hungarian into English
* adding or adjusting code comments
* code refactoring
* deleting commented code or unused files
* large features (e.g. online play)

## Other info

Upstream repo is https://github.com/elastomania/across. Original readme is below.

---

# Action SuperCross Source Code
This repository was uploaded in good faith for the purpose of exploring the original source code of this classic game. Non-source-code game assets (sounds, graphics, tools, etc.) are not part of this open source release.

See LICENSE.md for license information. 

If you'd like to use this source code in ways other than permitted by the license and this document, contact us at info@elastomania.com.

If you'd like to support continued development of the Elasto Mania franchise, you can do so by buying our games on any store front linked on our website.

*The Elasto Mania Team*

https://elastomania.com