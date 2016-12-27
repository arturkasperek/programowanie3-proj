{
  "targets": [
    {
      "target_name": "addon",
      "sources": [ "backend/logic/hello.cpp" ],
      "include_dirs": [
        "include", "/usr/include/cppconn"
      ],
      "libraries": [
        "-lmysqlcppconn", "-L/usr/lib"
      ],
      "cflags": [ "-std=c++11" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}