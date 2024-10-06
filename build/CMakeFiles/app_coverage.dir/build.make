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
CMAKE_SOURCE_DIR = /home/swaraj/TDD/v1/ENPM700-TDD-Group2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build

# Utility rule file for app_coverage.

# Include any custom commands dependencies for this target.
include CMakeFiles/app_coverage.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/app_coverage.dir/progress.make

CMakeFiles/app_coverage:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/swaraj/TDD/v1/ENPM700-TDD-Group2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running gcovr to produce HTML code coverage report."
	/home/swaraj/TDD/v1/ENPM700-TDD-Group2/build/app/shell-app
	/usr/bin/cmake -E make_directory /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build/app_coverage
	/usr/bin/gcovr --xml app_coverage.xml --exclude-unreachable-branches --exclude-throw-branches --html app_coverage/index.html --html-details -r /home/swaraj/TDD/v1/ENPM700-TDD-Group2 -e /home/swaraj/TDD/v1/ENPM700-TDD-Group2/test/test.cpp -e /home/swaraj/TDD/v1/ENPM700-TDD-Group2/test/main.cpp -e /home/swaraj/TDD/v1/ENPM700-TDD-Group2/test/test1.cpp -e /home/swaraj/TDD/v1/ENPM700-TDD-Group2/test/test2.cpp -e /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build --object-directory=/home/swaraj/TDD/v1/ENPM700-TDD-Group2/build

app_coverage: CMakeFiles/app_coverage
app_coverage: CMakeFiles/app_coverage.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "To view the coverage report, open: "
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold " /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build/app_coverage/index.html"
.PHONY : app_coverage

# Rule to build all files generated by this target.
CMakeFiles/app_coverage.dir/build: app_coverage
.PHONY : CMakeFiles/app_coverage.dir/build

CMakeFiles/app_coverage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/app_coverage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/app_coverage.dir/clean

CMakeFiles/app_coverage.dir/depend:
	cd /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/swaraj/TDD/v1/ENPM700-TDD-Group2 /home/swaraj/TDD/v1/ENPM700-TDD-Group2 /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build /home/swaraj/TDD/v1/ENPM700-TDD-Group2/build/CMakeFiles/app_coverage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/app_coverage.dir/depend

