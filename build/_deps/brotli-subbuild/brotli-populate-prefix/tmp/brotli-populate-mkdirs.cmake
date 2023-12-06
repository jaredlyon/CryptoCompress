# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-src"
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build"
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix"
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/tmp"
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp"
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src"
  "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
