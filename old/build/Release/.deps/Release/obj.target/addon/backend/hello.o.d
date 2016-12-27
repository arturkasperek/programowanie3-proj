cmd_Release/obj.target/addon/backend/hello.o := g++ '-DNODE_GYP_MODULE_NAME=addon' '-DUSING_UV_SHARED=1' '-DUSING_V8_SHARED=1' '-DV8_DEPRECATION_WARNINGS=1' '-D_LARGEFILE_SOURCE' '-D_FILE_OFFSET_BITS=64' '-DBUILDING_NODE_EXTENSION' -I/root/.node-gyp/6.8.0/include/node -I/root/.node-gyp/6.8.0/src -I/root/.node-gyp/6.8.0/deps/uv/include -I/root/.node-gyp/6.8.0/deps/v8/include -I../include -I/usr/local/include/mongocxx/v_noabi -I/usr/local/include/libmongoc-1.0 -I/usr/local/include/bsoncxx/v_noabi -I/usr/local/include/libbson-1.0  -fPIC -pthread -Wall -Wextra -Wno-unused-parameter -m64 -std=c++11 -O3 -fno-omit-frame-pointer -fno-rtti -std=gnu++0x -MMD -MF ./Release/.deps/Release/obj.target/addon/backend/hello.o.d.raw   -c -o Release/obj.target/addon/backend/hello.o ../backend/hello.cc
Release/obj.target/addon/backend/hello.o: ../backend/hello.cc \
 /root/.node-gyp/6.8.0/include/node/node.h \
 /root/.node-gyp/6.8.0/include/node/v8.h \
 /root/.node-gyp/6.8.0/include/node/v8-version.h \
 /root/.node-gyp/6.8.0/include/node/v8config.h \
 /root/.node-gyp/6.8.0/include/node/node_version.h \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/document.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/core.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/array/value.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/array/view.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/document/view.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/document/element.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/stdx/string_view.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/config/prelude.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/config/config.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/config/version.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/config/export.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/config/compiler.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/string.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/config/postlude.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/array/element.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/document/value.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/types.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/oid.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/string/view_or_value.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/view_or_value.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/stdx/optional.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/optional.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/type_traits.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/functional.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/utility.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/enums/type.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/enums/binary_sub_type.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/key_context.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/closed_context.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/value_context.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/array_context.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/concatenate.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/array/view_or_value.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/document/view_or_value.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/helpers.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/util/functor.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/single_context.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/json.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/client.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/database.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/collection.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/bulk_write.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/bulk_write.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/write_concern.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/stdx.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/config/prelude.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/config/config.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/config/version.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/config/export.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/config/compiler.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/config/postlude.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/write.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/write_type.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/insert_one.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/delete_one.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/delete_many.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/update_one.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/update_many.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/model/replace_one.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/cursor.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/insert_many_builder.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/insert.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/result/insert_many.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/result/bulk_write.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/aggregate.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/read_preference.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/count.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/hint.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/delete.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/distinct.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/find.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_and_delete.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_and_replace.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_common_options.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_and_update.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/index.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/update.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/read_concern.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/result/delete.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/result/insert_one.hpp \
 /usr/local/include/bsoncxx/v_noabi/bsoncxx/types/value.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/result/replace_one.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/result/update.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/modify_collection.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/validation_criteria.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/create_collection.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/client.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/options/ssl.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/uri.hpp \
 /usr/local/include/mongocxx/v_noabi/mongocxx/instance.hpp
../backend/hello.cc:
/root/.node-gyp/6.8.0/include/node/node.h:
/root/.node-gyp/6.8.0/include/node/v8.h:
/root/.node-gyp/6.8.0/include/node/v8-version.h:
/root/.node-gyp/6.8.0/include/node/v8config.h:
/root/.node-gyp/6.8.0/include/node/node_version.h:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/document.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/core.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/array/value.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/array/view.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/document/view.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/document/element.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/stdx/string_view.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/config/prelude.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/config/config.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/config/version.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/config/export.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/config/compiler.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/string.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/config/postlude.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/array/element.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/document/value.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/types.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/oid.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/string/view_or_value.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/view_or_value.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/stdx/optional.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/optional.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/type_traits.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/functional.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/third_party/mnmlstc/core/utility.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/enums/type.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/enums/binary_sub_type.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/key_context.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/closed_context.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/value_context.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/array_context.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/concatenate.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/array/view_or_value.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/document/view_or_value.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/helpers.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/util/functor.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/builder/stream/single_context.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/json.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/client.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/database.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/collection.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/bulk_write.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/bulk_write.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/write_concern.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/stdx.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/config/prelude.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/config/config.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/config/version.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/config/export.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/config/compiler.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/config/postlude.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/write.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/write_type.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/insert_one.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/delete_one.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/delete_many.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/update_one.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/update_many.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/model/replace_one.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/cursor.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/insert_many_builder.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/insert.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/result/insert_many.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/result/bulk_write.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/aggregate.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/read_preference.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/count.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/hint.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/delete.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/distinct.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/find.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_and_delete.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_and_replace.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_common_options.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/find_one_and_update.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/index.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/update.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/read_concern.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/result/delete.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/result/insert_one.hpp:
/usr/local/include/bsoncxx/v_noabi/bsoncxx/types/value.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/result/replace_one.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/result/update.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/modify_collection.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/validation_criteria.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/create_collection.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/client.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/options/ssl.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/uri.hpp:
/usr/local/include/mongocxx/v_noabi/mongocxx/instance.hpp:
