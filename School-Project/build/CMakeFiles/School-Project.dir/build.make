# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.24

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
CMAKE_SOURCE_DIR = /home/hackersmile/Documents/Cpp/School-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hackersmile/Documents/Cpp/School-Project/build

# Include any dependencies generated for this target.
include CMakeFiles/School-Project.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/School-Project.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/School-Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/School-Project.dir/flags.make

CMakeFiles/School-Project.dir/main.cpp.o: CMakeFiles/School-Project.dir/flags.make
CMakeFiles/School-Project.dir/main.cpp.o: /home/hackersmile/Documents/Cpp/School-Project/main.cpp
CMakeFiles/School-Project.dir/main.cpp.o: CMakeFiles/School-Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hackersmile/Documents/Cpp/School-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/School-Project.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/School-Project.dir/main.cpp.o -MF CMakeFiles/School-Project.dir/main.cpp.o.d -o CMakeFiles/School-Project.dir/main.cpp.o -c /home/hackersmile/Documents/Cpp/School-Project/main.cpp

CMakeFiles/School-Project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/School-Project.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hackersmile/Documents/Cpp/School-Project/main.cpp > CMakeFiles/School-Project.dir/main.cpp.i

CMakeFiles/School-Project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/School-Project.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hackersmile/Documents/Cpp/School-Project/main.cpp -o CMakeFiles/School-Project.dir/main.cpp.s

CMakeFiles/School-Project.dir/school.cpp.o: CMakeFiles/School-Project.dir/flags.make
CMakeFiles/School-Project.dir/school.cpp.o: /home/hackersmile/Documents/Cpp/School-Project/school.cpp
CMakeFiles/School-Project.dir/school.cpp.o: CMakeFiles/School-Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hackersmile/Documents/Cpp/School-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/School-Project.dir/school.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/School-Project.dir/school.cpp.o -MF CMakeFiles/School-Project.dir/school.cpp.o.d -o CMakeFiles/School-Project.dir/school.cpp.o -c /home/hackersmile/Documents/Cpp/School-Project/school.cpp

CMakeFiles/School-Project.dir/school.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/School-Project.dir/school.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hackersmile/Documents/Cpp/School-Project/school.cpp > CMakeFiles/School-Project.dir/school.cpp.i

CMakeFiles/School-Project.dir/school.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/School-Project.dir/school.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hackersmile/Documents/Cpp/School-Project/school.cpp -o CMakeFiles/School-Project.dir/school.cpp.s

CMakeFiles/School-Project.dir/student.cpp.o: CMakeFiles/School-Project.dir/flags.make
CMakeFiles/School-Project.dir/student.cpp.o: /home/hackersmile/Documents/Cpp/School-Project/student.cpp
CMakeFiles/School-Project.dir/student.cpp.o: CMakeFiles/School-Project.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/hackersmile/Documents/Cpp/School-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/School-Project.dir/student.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/School-Project.dir/student.cpp.o -MF CMakeFiles/School-Project.dir/student.cpp.o.d -o CMakeFiles/School-Project.dir/student.cpp.o -c /home/hackersmile/Documents/Cpp/School-Project/student.cpp

CMakeFiles/School-Project.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/School-Project.dir/student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/hackersmile/Documents/Cpp/School-Project/student.cpp > CMakeFiles/School-Project.dir/student.cpp.i

CMakeFiles/School-Project.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/School-Project.dir/student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/hackersmile/Documents/Cpp/School-Project/student.cpp -o CMakeFiles/School-Project.dir/student.cpp.s

# Object files for target School-Project
School__Project_OBJECTS = \
"CMakeFiles/School-Project.dir/main.cpp.o" \
"CMakeFiles/School-Project.dir/school.cpp.o" \
"CMakeFiles/School-Project.dir/student.cpp.o"

# External object files for target School-Project
School__Project_EXTERNAL_OBJECTS =

School-Project: CMakeFiles/School-Project.dir/main.cpp.o
School-Project: CMakeFiles/School-Project.dir/school.cpp.o
School-Project: CMakeFiles/School-Project.dir/student.cpp.o
School-Project: CMakeFiles/School-Project.dir/build.make
School-Project: CMakeFiles/School-Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/hackersmile/Documents/Cpp/School-Project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable School-Project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/School-Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/School-Project.dir/build: School-Project
.PHONY : CMakeFiles/School-Project.dir/build

CMakeFiles/School-Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/School-Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/School-Project.dir/clean

CMakeFiles/School-Project.dir/depend:
	cd /home/hackersmile/Documents/Cpp/School-Project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hackersmile/Documents/Cpp/School-Project /home/hackersmile/Documents/Cpp/School-Project /home/hackersmile/Documents/Cpp/School-Project/build /home/hackersmile/Documents/Cpp/School-Project/build /home/hackersmile/Documents/Cpp/School-Project/build/CMakeFiles/School-Project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/School-Project.dir/depend

