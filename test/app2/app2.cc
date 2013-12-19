// v8
#include <v8.h>

// node.js
#include <node.h>

#include <foo.hpp>

extern "C" {
    static void start(v8::Handle<v8::Object> target) {
        v8::HandleScope scope;
    }
}

NODE_MODULE(app2, start)

