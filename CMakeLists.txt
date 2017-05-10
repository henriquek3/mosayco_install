cmake_minimum_required(VERSION 3.6)
project(Mosayco_install)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp view/CMenu.cpp view/CMenu.h controller/CControllers.cpp controller/CControllers.h controller/backup_usuarios.cpp controller/CExportUsers.cpp controller/CExportUsers.h)
add_executable(msc_cmd ${SOURCE_FILES})