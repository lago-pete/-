# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lago_pete/PA2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lago_pete/PA2

# Include any dependencies generated for this target.
include CMakeFiles/pa2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pa2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pa2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pa2.dir/flags.make

CMakeFiles/pa2.dir/src/main.cpp.o: CMakeFiles/pa2.dir/flags.make
CMakeFiles/pa2.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/pa2.dir/src/main.cpp.o: CMakeFiles/pa2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lago_pete/PA2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pa2.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pa2.dir/src/main.cpp.o -MF CMakeFiles/pa2.dir/src/main.cpp.o.d -o CMakeFiles/pa2.dir/src/main.cpp.o -c /home/lago_pete/PA2/src/main.cpp

CMakeFiles/pa2.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pa2.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lago_pete/PA2/src/main.cpp > CMakeFiles/pa2.dir/src/main.cpp.i

CMakeFiles/pa2.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pa2.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lago_pete/PA2/src/main.cpp -o CMakeFiles/pa2.dir/src/main.cpp.s

# Object files for target pa2
pa2_OBJECTS = \
"CMakeFiles/pa2.dir/src/main.cpp.o"

# External object files for target pa2
pa2_EXTERNAL_OBJECTS =

pa2: CMakeFiles/pa2.dir/src/main.cpp.o
pa2: CMakeFiles/pa2.dir/build.make
pa2: CMakeFiles/pa2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lago_pete/PA2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pa2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/pa2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pa2.dir/build: pa2
.PHONY : CMakeFiles/pa2.dir/build

CMakeFiles/pa2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/pa2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/pa2.dir/clean

CMakeFiles/pa2.dir/depend:
	cd /home/lago_pete/PA2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lago_pete/PA2 /home/lago_pete/PA2 /home/lago_pete/PA2 /home/lago_pete/PA2 /home/lago_pete/PA2/CMakeFiles/pa2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pa2.dir/depend
