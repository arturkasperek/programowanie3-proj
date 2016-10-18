{
  "targets": [
    {
      "target_name": "addon",
      "sources": [ "hello.cc" ],
      "include_dirs": [
        "include", "/usr/local/include/mongocxx/v_noabi",
        "include", "/usr/local/include/libmongoc-1.0",
        "include", "/usr/local/include/bsoncxx/v_noabi",
        "include", "/usr/local/include/libbson-1.0"
      ],
      "libraries": [
        "-lmongocxx", "-L/usr/local/lib",
        "-lbsoncxx", "-L/usr/local/lib"
      ],
      "cflags": [ "-std=c++11" ],
      "cflags!": [ "-fno-exceptions" ],
      "cflags_cc!": [ "-fno-exceptions" ]
    }
  ]
}