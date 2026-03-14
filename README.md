# VmoTask

A simple task tracker written in C++ using a custom C library for working with JSON.

### How to build on Linux

Tell cmake to use Ninja
```bash
cmake -G Ninja -B build
```

Build 
```bash
cmake --build build/
```

### How to build on MacOS

Make sure you install original CLang
```bash
brew install llvm
```

Tell clang to use it

```bash
cmake -G Ninja -B build -DCMAKE_CXX_COMPILER=/opt/homebrew/opt/llvm/bin/clang++
```

Build
```bash
cmake --build build/
```
