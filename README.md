# Trying out the meson build system

## Building

```bash
export BUILDDIR=<where_to_build>
meson $BUILDDIR --buildtype=release
ninja -C $BUILDDIR
```

or, in VSCode, try "Tasks: Run build task"

## Looking at generated code

```bash
objdump --source a.out
```