cmake_minimum_required(VERSION 3.1.0)

set(Qt5_DIR "/home/bruno/Qt/5.13.0/gcc_64/lib/cmake/Qt5")

project(Test_Interface)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

add_executable(Test_Interface
    mainwindow.ui
    mainwindow.cpp
    main.cpp
)

target_link_libraries(Test_Interface Qt5::Core Qt5::Widgets)
