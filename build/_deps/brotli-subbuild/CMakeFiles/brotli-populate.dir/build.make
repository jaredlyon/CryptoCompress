# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.27.9/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.27.9/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild

# Utility rule file for brotli-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/brotli-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/brotli-populate.dir/progress.make

CMakeFiles/brotli-populate: CMakeFiles/brotli-populate-complete

CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-install
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-mkdir
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-download
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-configure
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-build
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-install
CMakeFiles/brotli-populate-complete: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'brotli-populate'"
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -E make_directory /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles/brotli-populate-complete
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-done

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update:
.PHONY : brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-build: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'brotli-populate'"
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E echo_append
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-build

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-configure: brotli-populate-prefix/tmp/brotli-populate-cfgcmd.txt
brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-configure: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'brotli-populate'"
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E echo_append
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-configure

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-download: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-gitinfo.txt
brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-download: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'brotli-populate'"
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps && /usr/local/Cellar/cmake/3.27.9/bin/cmake -P /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/tmp/brotli-populate-gitclone.cmake
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-download

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-install: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'brotli-populate'"
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E echo_append
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-install

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'brotli-populate'"
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -Dcfgdir= -P /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/tmp/brotli-populate-mkdirs.cmake
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-mkdir

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch-info.txt
brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'brotli-populate'"
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -E echo_append
	/usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update:
.PHONY : brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-test: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'brotli-populate'"
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E echo_append
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-build && /usr/local/Cellar/cmake/3.27.9/bin/cmake -E touch /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-test

brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update: brotli-populate-prefix/tmp/brotli-populate-gitupdate.cmake
brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update-info.txt
brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'brotli-populate'"
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-src && /usr/local/Cellar/cmake/3.27.9/bin/cmake -Dcan_fetch=YES -P /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/brotli-populate-prefix/tmp/brotli-populate-gitupdate.cmake

brotli-populate: CMakeFiles/brotli-populate
brotli-populate: CMakeFiles/brotli-populate-complete
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-build
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-configure
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-download
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-install
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-mkdir
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-patch
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-test
brotli-populate: brotli-populate-prefix/src/brotli-populate-stamp/brotli-populate-update
brotli-populate: CMakeFiles/brotli-populate.dir/build.make
.PHONY : brotli-populate

# Rule to build all files generated by this target.
CMakeFiles/brotli-populate.dir/build: brotli-populate
.PHONY : CMakeFiles/brotli-populate.dir/build

CMakeFiles/brotli-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/brotli-populate.dir/cmake_clean.cmake
.PHONY : CMakeFiles/brotli-populate.dir/clean

CMakeFiles/brotli-populate.dir/depend:
	cd /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild /Users/jaredlyon/CLionProjects/CryptoCompress/build/_deps/brotli-subbuild/CMakeFiles/brotli-populate.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/brotli-populate.dir/depend

