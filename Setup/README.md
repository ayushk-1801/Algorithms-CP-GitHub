# rcht/cptemp

My extremely fast terminal-centric competitive programming and DSA assignment setup. This repo is meant as a way to efficiently replicate my setup on multiple systems.

(only works on Linux)

## Overview

- 6 C++ files (`a.cpp` to `f.cpp`) and one Python file (`main.py`) for contests. 

- `build/` - Directory where all the executables are placed.

- `./run x` (where `x.cpp` is the corresponding source file) - compiles `x.cpp` with GDB debug flags, writes the executable to `./build/x`, and then runs it.

- `./crun x` - same thing as `./run x` but pipes the clipboard (using `xclip`) into `./build/x` for convenience.

- `temp.cpp` - My template. I don't use the file specifically but kept it here because it's easier to access. I put its contents into the source file using snippets.

- `lib/` - Collection of implementations of some algorithms like binary search, BFS, segment trees, and string hashing. TLDR: stuff to copy and paste.

## Other stuff

- My [dotfiles](https://github.com/rcht/dotfiles) containing my [Neovim setup](https://github.com/rcht/dotfiles/tree/master/.config/nvim).
