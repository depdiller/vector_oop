# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild

# Utility rule file for googletest-populate.

# Include any custom commands dependencies for this target.
include CMakeFiles/googletest-populate.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/googletest-populate.dir/progress.make

CMakeFiles/googletest-populate: CMakeFiles/googletest-populate-complete

CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
CMakeFiles/googletest-populate-complete: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'googletest-populate'"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/CMakeFiles
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/CMakeFiles/googletest-populate-complete
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-done

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "No build step for 'googletest-populate'"
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E echo_append
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure: googletest-populate-prefix/tmp/googletest-populate-cfgcmd.txt
googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "No configure step for 'googletest-populate'"
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E echo_append
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-urlinfo.txt
googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (download, verify and extract) for 'googletest-populate'"
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -P C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/download-googletest-populate.cmake
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -P C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/verify-googletest-populate.cmake
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -P C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/extract-googletest-populate.cmake
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "No install step for 'googletest-populate'"
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E echo_append
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'googletest-populate'"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-src
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-build
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/tmp
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E make_directory C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'googletest-populate'"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E echo_append
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "No test step for 'googletest-populate'"
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E echo_append
	cd /d C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-build && "C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test

googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "No update step for 'googletest-populate'"
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E echo_append
	"C:\Program Files\JetBrains\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E touch C:/Users/stani/CLionProjects/vector/google_test/cmake-build-debug/_deps/googletest-subbuild/googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update

googletest-populate: CMakeFiles/googletest-populate
googletest-populate: CMakeFiles/googletest-populate-complete
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-build
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-configure
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-download
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-install
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-mkdir
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-patch
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-test
googletest-populate: googletest-populate-prefix/src/googletest-populate-stamp/googletest-populate-update
googletest-populate: CMakeFiles/googletest-populate.dir/build.make
.PHONY : googletest-populate

# Rule to build all files generated by this target.
CMakeFiles/googletest-populate.dir/build: googletest-populate
.PHONY : CMakeFiles/googletest-populate.dir/build

CMakeFiles/googletest-populate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\googletest-populate.dir\cmake_clean.cmake
.PHONY : CMakeFiles/googletest-populate.dir/clean

CMakeFiles/googletest-populate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild C:\Users\stani\CLionProjects\vector\google_test\cmake-build-debug\_deps\googletest-subbuild\CMakeFiles\googletest-populate.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/googletest-populate.dir/depend

