# CMake generated Testfile for 
# Source directory: /home/soomi/project3/computer/src/custom_msgs
# Build directory: /home/soomi/project3/computer/build/custom_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/home/soomi/ros2_humble/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/soomi/project3/computer/build/custom_msgs/test_results/custom_msgs/lint_cmake.xunit.xml" "--package-name" "custom_msgs" "--output-file" "/home/soomi/project3/computer/build/custom_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/home/soomi/ros2_humble/install/ament_lint_cmake/bin/ament_lint_cmake" "--xunit-file" "/home/soomi/project3/computer/build/custom_msgs/test_results/custom_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/soomi/project3/computer/src/custom_msgs" _BACKTRACE_TRIPLES "/home/soomi/ros2_humble/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/soomi/ros2_humble/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_lint_cmake.cmake;47;ament_add_test;/home/soomi/ros2_humble/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;21;ament_lint_cmake;/home/soomi/ros2_humble/install/ament_cmake_lint_cmake/share/ament_cmake_lint_cmake/cmake/ament_cmake_lint_cmake_lint_hook.cmake;0;;/home/soomi/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/soomi/ros2_humble/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/soomi/ros2_humble/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/soomi/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/soomi/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/soomi/project3/computer/src/custom_msgs/CMakeLists.txt;40;ament_package;/home/soomi/project3/computer/src/custom_msgs/CMakeLists.txt;0;")
add_test(xmllint "/usr/bin/python3" "-u" "/home/soomi/ros2_humble/install/ament_cmake_test/share/ament_cmake_test/cmake/run_test.py" "/home/soomi/project3/computer/build/custom_msgs/test_results/custom_msgs/xmllint.xunit.xml" "--package-name" "custom_msgs" "--output-file" "/home/soomi/project3/computer/build/custom_msgs/ament_xmllint/xmllint.txt" "--command" "/home/soomi/ros2_humble/install/ament_xmllint/bin/ament_xmllint" "--xunit-file" "/home/soomi/project3/computer/build/custom_msgs/test_results/custom_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/soomi/project3/computer/src/custom_msgs" _BACKTRACE_TRIPLES "/home/soomi/ros2_humble/install/ament_cmake_test/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/home/soomi/ros2_humble/install/ament_cmake_xmllint/share/ament_cmake_xmllint/cmake/ament_xmllint.cmake;50;ament_add_test;/home/soomi/ros2_humble/install/ament_cmake_xmllint/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;18;ament_xmllint;/home/soomi/ros2_humble/install/ament_cmake_xmllint/share/ament_cmake_xmllint/cmake/ament_cmake_xmllint_lint_hook.cmake;0;;/home/soomi/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/soomi/ros2_humble/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;21;ament_execute_extensions;/home/soomi/ros2_humble/install/ament_lint_auto/share/ament_lint_auto/cmake/ament_lint_auto_package_hook.cmake;0;;/home/soomi/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_execute_extensions.cmake;48;include;/home/soomi/ros2_humble/install/ament_cmake_core/share/ament_cmake_core/cmake/core/ament_package.cmake;66;ament_execute_extensions;/home/soomi/project3/computer/src/custom_msgs/CMakeLists.txt;40;ament_package;/home/soomi/project3/computer/src/custom_msgs/CMakeLists.txt;0;")
subdirs("custom_msgs__py")