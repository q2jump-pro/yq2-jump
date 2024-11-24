# YQ2-JUMP

A [Yamagi Quake II](https://github.com/yquake2/yquake2) client modified for playing the [q2jump](http://q2jump.net) mod, mimicking the [q2pro-jump](https://github.com/TotallyMehis/q2pro-jump) client.

## Status

- Added [strafe_helper](https://github.com/kugelrund/strafe_helper) acceleration
  HUD
- Added the dynamic colorization of `cl_showspeed 2` display
- Added the additional console auto-completions for commands available in the
  q2jump mod.

To enable the strafe helper and speed display colorization, set the cvar
`cl_showspeed` to `2`

The server code is vanilla Yamagi.

The patchwork here is a bit more crude than in [q2jump-pro](https://github.com/q2jump-pro/q2jump-pro), as this is slightly more of a proof of concept still.

## License

No warranty is provided and no rights are reserved for the changes made to the original Yamagi Quake II codebase, you can find the original Yamagi license in the LICENSE file.

