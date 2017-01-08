cmake_minimum_required(VERSION 3.6)
project(facebook_dwa_zero)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")
find_package(Boost REQUIRED COMPONENTS system)
#find_package(Qt5Widgets)
include_directories( /usr/local/include/mysql )

set(SOURCE_FILES main.cpp library/server_http.h backend/Server.h backend/Response.h backend/GetFile.h backend/Session.h backend/Request.h backend/routes/Register.h backend/Route.h backend/DatabaseController.h backend/Env.h backend/initDatabase.h backend/User/User.h backend/routes/Login.h backend/routes/GetAllUsers.h backend/routes/Logout.h backend/routes/GetUserData.h backend/User/checkIfUserExists.h backend/User/getUserData.h backend/User/getAllUsers.h backend/getFileContent.h)
add_executable(facebook_dwa_zero ${SOURCE_FILES})

target_link_libraries( facebook_dwa_zero ${Boost_LIBRARIES} )
target_link_libraries( facebook_dwa_zero /usr/local/lib/mysql/libmysqlcppconn-static.a )
