# Debugger Demos
Simple demo apps for testing the debugger

## C
To build for host:
```
cmake -B build -S c -G Ninja -D CMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
```
To cross compile for Android:
```
cmake -B build -S c -D CMAKE_SYSTEM_NAME=Android -D CMAKE_ANDROID_NDK=$ANDROID_NDK_ROOT -D CMAKE_ANDROID_API=28 -D CMAKE_ANDROID_ARCH_ABI=arm64-v8a -G Ninja -D CMAKE_BUILD_TYPE=Debug
cmake --build build --config Debug
```
