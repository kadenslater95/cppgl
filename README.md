# cppgl
C++ library for graphics tools with OpenGL, using classic fixed function pipeline.


## Build
Using CMake from the root directory, run these commands sequentially:
```
cmake -S . -B build
cmake --build build
```

## Run an example
```
build/examples/curves_1
```


## Lint
```
cpplint --recursive src include test examples
```
