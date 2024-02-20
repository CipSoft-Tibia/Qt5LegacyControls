cmake_minimum_required(VERSION 3.25)

project(Qt5LegacyControls LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 6.5 CONFIG REQUIRED COMPONENTS Core Quick Qml)
qt_standard_project_setup(REQUIRES 6.5)

add_subdirectory(QtQuick/LegacyControls)
