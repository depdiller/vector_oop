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
CMAKE_SOURCE_DIR = C:\Users\stani\CLionProjects\vector

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\stani\CLionProjects\vector\cmake-build-debug

# Include any dependencies generated for this target.
include test_main/CMakeFiles/test_main.dir/depend.make
# Include the progress variables for this target.
include test_main/CMakeFiles/test_main.dir/progress.make

# Include the compile flags for this target's objects.
include test_main/CMakeFiles/test_main.dir/flags.make

test_main/CMakeFiles/test_main.dir/test_main.cpp.obj: test_main/CMakeFiles/test_main.dir/flags.make
test_main/CMakeFiles/test_main.dir/test_main.cpp.obj: test_main/CMakeFiles/test_main.dir/includes_CXX.rsp
test_main/CMakeFiles/test_main.dir/test_main.cpp.obj: ../test_main/test_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\stani\CLionProjects\vector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object test_main/CMakeFiles/test_main.dir/test_main.cpp.obj"
	cd /d C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\test_main.dir\test_main.cpp.obj -c C:\Users\stani\CLionProjects\vector\test_main\test_main.cpp

test_main/CMakeFiles/test_main.dir/test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_main.dir/test_main.cpp.i"
	cd /d C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\stani\CLionProjects\vector\test_main\test_main.cpp > CMakeFiles\test_main.dir\test_main.cpp.i

test_main/CMakeFiles/test_main.dir/test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_main.dir/test_main.cpp.s"
	cd /d C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main && C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\stani\CLionProjects\vector\test_main\test_main.cpp -o CMakeFiles\test_main.dir\test_main.cpp.s

# Object files for target test_main
test_main_OBJECTS = \
"CMakeFiles/test_main.dir/test_main.cpp.obj"

# External object files for target test_main
test_main_EXTERNAL_OBJECTS =

test_main/test_main.exe: test_main/CMakeFiles/test_main.dir/test_main.cpp.obj
test_main/test_main.exe: test_main/CMakeFiles/test_main.dir/build.make
test_main/test_main.exe: vector_lib/libvector.a
test_main/test_main.exe: test_main/CMakeFiles/test_main.dir/linklibs.rsp
test_main/test_main.exe: test_main/CMakeFiles/test_main.dir/objects1.rsp
test_main/test_main.exe: test_main/CMakeFiles/test_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\stani\CLionProjects\vector\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_main.exe"
	cd /d C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\test_main.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
test_main/CMakeFiles/test_main.dir/build: test_main/test_main.exe
.PHONY : test_main/CMakeFiles/test_main.dir/build

test_main/CMakeFiles/test_main.dir/clean:
	cd /d C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main && $(CMAKE_COMMAND) -P CMakeFiles\test_main.dir\cmake_clean.cmake
.PHONY : test_main/CMakeFiles/test_main.dir/clean

test_main/CMakeFiles/test_main.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\stani\CLionProjects\vector C:\Users\stani\CLionProjects\vector\test_main C:\Users\stani\CLionProjects\vector\cmake-build-debug C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main C:\Users\stani\CLionProjects\vector\cmake-build-debug\test_main\CMakeFiles\test_main.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : test_main/CMakeFiles/test_main.dir/depend

