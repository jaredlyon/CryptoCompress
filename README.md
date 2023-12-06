# CryptoCompress
**A C++ library for lossless txt file compression &amp; encryption**

## Overview
CryptoCompress is a CLI tool that allows users to compress & decompress `.txt` files without loss using Google's brotli compression package. This tool also allows for keyed encryption and decryption using libsodium. The controller combines these packages such that they may be used independently or concurrently in order to compress/decompress & encrypt/decrypt `.txt` files simultaneously.

### Package Dependencies
- [Google brotli](https://github.com/google/brotli)
- [libsodium](https://github.com/jedisct1/libsodium)

### Usage
CryptoCompress can be used in any CLI after building using `cmake-build-debug`. Currently, package dependencies in `CMakeLists.txt` are hardcoded, though a future versioning will include github submodules to eliminate this blocker.
Usage instructions are outlined by the tool controller using the `-help` command, though much of the usage instruction is printed by the tool during usage as needed.

<img width="558" alt="Screenshot 2023-12-06 at 6 54 57 AM" src="https://github.com/jaredlyon/CryptoCompress/assets/29807461/e9f5227c-ef96-4598-b894-41f6d7f44aa4">
