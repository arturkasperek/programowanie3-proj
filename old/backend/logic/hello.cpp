// hello.cc
#include <node.h>
#include <iostream>

#include "DBController.h"

namespace demo {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void initDB() {
    auto dbCtrl = DBController("testdb", "testcollection");
    Field fields[] = {{"name", "INT", "30", true}, {"surname", "INT", "30", true}};

    dbCtrl.switchToDb("pokerApp");
    dbCtrl.initTable("users", fields);
}

void testMongo() {
    initDB();
    //test.fields = new int {23, 23, 2};
}

void Method(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  testMongo();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world is"));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "hello", Method);
}

NODE_MODULE(addon, init)

}  // namespace demo