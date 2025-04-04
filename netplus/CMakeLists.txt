cmake_minimum_required(VERSION 3.31)
project(netplus)

set(CMAKE_CXX_STANDARD 23)
file(GLOB SOURCES src/netplus/*.cxx)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include/netplus/)

set(CPACK_PACKAGE_NAME ${PROJECT_NAME})
set(CPACK_PACKAGE_VERSION "0.0.1")
set(CPACK_PACKAGE_DESCRIPTION "Crossplatform C++ port of .NET library")
set(CPACK_PACKAGE_VENDOR "dywoq")
set(CPACK_PACKAGE_FILE_NAME "${CPACK_PACKAGE_NAME}-${CPACK_PACKAGE_VERSION}")
set(CPACK_GENERATOR "ZIP")
set(CPACK_INSTALL_PREFIX "/usr/local") 

install(TARGETS ${PROJECT_NAME} DESTINATION lib)
install(DIRECTORY include/netplus/ DESTINATION include/netplus/)