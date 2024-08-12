# Action SuperCross Windows port

This is an incomplete port of Action SuperCross to Windows.

## Known limitations

* Editor does not work
* Sound does not work
* Requires a DirectDraw wrapper library (e.g. DXGL)

## Changes

* Centered camera by default (disable with `nocenteredcam.inf` file)
* Death/finish delay removed
* 1920x1080 resolution support
* Alovolt (comma key)
* Item limit in lists increased to 20000 (from 600)
* Bike size (zoom) min and max bounds extended
* Included 5 levels from Across 1.1 in internals (after Apple Harvest)

## Building

Generate Visual Studio project:

```
cmake -G "Visual Studio 17 2022" -A Win32 -B build .
```

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