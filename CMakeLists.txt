cmake_minimum_required(VERSION 3.26)
project(CryptoCompress)
include(FetchContent)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_ARCHITECTURES "x86_64")

add_executable(CryptoCompress main.cpp
        lib/brotli/brotli_wrapper.h
        lib/src/commands/Encrypt.cpp
        lib/include/commands/Encrypt.h
        lib/src/commands/Decrypt.cpp
        lib/include/commands/Decrypt.h
        lib/src/FileWrapper.cpp
        lib/include/FileWrapper.h
        lib/src/Controller.cpp
        lib/include/Controller.h)
target_include_directories(CryptoCompress PUBLIC /usr/local/include)
target_link_directories(CryptoCompress PRIVATE /Users/jaredlyon/brotli/build/installed/lib)
target_include_directories(CryptoCompress PUBLIC /usr/local/Cellar/libsodium/1.0.19/include)
target_link_directories(CryptoCompress PRIVATE /usr/local/Cellar/libsodium/1.0.19/lib)
target_link_libraries(CryptoCompress PRIVATE brotlienc brotlidec sodium)

