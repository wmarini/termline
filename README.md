# termline
Termline is a simple terminal program that uses GNU readline lib


Setup CMake

```bash
$ mkdir build && cd build
$ cmake .. -GNinja \
-DCMAKE_CXX_COMPILER='/usr/local/bin/g++-13' \
-DCMAKE_BUILD_TYPE=Debug
$ cmake .. -GNinja \
-DCMAKE_CXX_COMPILER=g++ \
-DCMAKE_BUILD_TYPE=Release
```