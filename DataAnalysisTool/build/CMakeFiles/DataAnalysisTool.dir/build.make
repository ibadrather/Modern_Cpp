# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /home/ibad/.local/lib/python3.10/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/ibad/.local/lib/python3.10/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build

# Include any dependencies generated for this target.
include CMakeFiles/DataAnalysisTool.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/DataAnalysisTool.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/DataAnalysisTool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/DataAnalysisTool.dir/flags.make

CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o: CMakeFiles/DataAnalysisTool.dir/flags.make
CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o: /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/csvreader.cpp
CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o: CMakeFiles/DataAnalysisTool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o -MF CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o.d -o CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o -c /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/csvreader.cpp

CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/csvreader.cpp > CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.i

CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/csvreader.cpp -o CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.s

CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o: CMakeFiles/DataAnalysisTool.dir/flags.make
CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o: /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/dataops.cpp
CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o: CMakeFiles/DataAnalysisTool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o -MF CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o.d -o CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o -c /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/dataops.cpp

CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/dataops.cpp > CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.i

CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/dataops.cpp -o CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.s

CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o: CMakeFiles/DataAnalysisTool.dir/flags.make
CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o: /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/main.cpp
CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o: CMakeFiles/DataAnalysisTool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o -MF CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o.d -o CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o -c /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/main.cpp

CMakeFiles/DataAnalysisTool.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataAnalysisTool.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/main.cpp > CMakeFiles/DataAnalysisTool.dir/src/main.cpp.i

CMakeFiles/DataAnalysisTool.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataAnalysisTool.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/main.cpp -o CMakeFiles/DataAnalysisTool.dir/src/main.cpp.s

CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o: CMakeFiles/DataAnalysisTool.dir/flags.make
CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o: /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/visualize.cpp
CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o: CMakeFiles/DataAnalysisTool.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o -MF CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o.d -o CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o -c /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/visualize.cpp

CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/visualize.cpp > CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.i

CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/src/visualize.cpp -o CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.s

# Object files for target DataAnalysisTool
DataAnalysisTool_OBJECTS = \
"CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o" \
"CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o" \
"CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o" \
"CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o"

# External object files for target DataAnalysisTool
DataAnalysisTool_EXTERNAL_OBJECTS =

DataAnalysisTool: CMakeFiles/DataAnalysisTool.dir/src/csvreader.cpp.o
DataAnalysisTool: CMakeFiles/DataAnalysisTool.dir/src/dataops.cpp.o
DataAnalysisTool: CMakeFiles/DataAnalysisTool.dir/src/main.cpp.o
DataAnalysisTool: CMakeFiles/DataAnalysisTool.dir/src/visualize.cpp.o
DataAnalysisTool: CMakeFiles/DataAnalysisTool.dir/build.make
DataAnalysisTool: CMakeFiles/DataAnalysisTool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable DataAnalysisTool"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/DataAnalysisTool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/DataAnalysisTool.dir/build: DataAnalysisTool
.PHONY : CMakeFiles/DataAnalysisTool.dir/build

CMakeFiles/DataAnalysisTool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/DataAnalysisTool.dir/cmake_clean.cmake
.PHONY : CMakeFiles/DataAnalysisTool.dir/clean

CMakeFiles/DataAnalysisTool.dir/depend:
	cd /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build /home/ibad/Desktop/Modern_Cpp/DataAnalysisTool/build/CMakeFiles/DataAnalysisTool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/DataAnalysisTool.dir/depend

