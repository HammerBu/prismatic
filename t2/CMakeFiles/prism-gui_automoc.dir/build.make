# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.7

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.7.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.7.2/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ajpryor/Documents/MATLAB/multislice/PRISM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2

# Utility rule file for prism-gui_automoc.

# Include the progress variables for this target.
include CMakeFiles/prism-gui_automoc.dir/progress.make

CMakeFiles/prism-gui_automoc:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic moc and uic for target prism-gui"
	/usr/local/Cellar/cmake/3.7.2/bin/cmake -E cmake_autogen /Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2/CMakeFiles/prism-gui_automoc.dir/ ""

prism-gui_automoc: CMakeFiles/prism-gui_automoc
prism-gui_automoc: CMakeFiles/prism-gui_automoc.dir/build.make

.PHONY : prism-gui_automoc

# Rule to build all files generated by this target.
CMakeFiles/prism-gui_automoc.dir/build: prism-gui_automoc

.PHONY : CMakeFiles/prism-gui_automoc.dir/build

CMakeFiles/prism-gui_automoc.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prism-gui_automoc.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prism-gui_automoc.dir/clean

CMakeFiles/prism-gui_automoc.dir/depend:
	cd /Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ajpryor/Documents/MATLAB/multislice/PRISM /Users/ajpryor/Documents/MATLAB/multislice/PRISM /Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2 /Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2 /Users/ajpryor/Documents/MATLAB/multislice/PRISM/t2/CMakeFiles/prism-gui_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prism-gui_automoc.dir/depend

