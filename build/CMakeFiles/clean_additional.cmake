# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "display_monitor/CMakeFiles/display_autogen.dir/AutogenUsed.txt"
  "display_monitor/CMakeFiles/display_autogen.dir/ParseCache.txt"
  "display_monitor/display_autogen"
  "proto/CMakeFiles/monitor_proto_autogen.dir/AutogenUsed.txt"
  "proto/CMakeFiles/monitor_proto_autogen.dir/ParseCache.txt"
  "proto/monitor_proto_autogen"
  "rpc_manager/client/CMakeFiles/client_autogen.dir/AutogenUsed.txt"
  "rpc_manager/client/CMakeFiles/client_autogen.dir/ParseCache.txt"
  "rpc_manager/client/client_autogen"
  "rpc_manager/server/CMakeFiles/server_autogen.dir/AutogenUsed.txt"
  "rpc_manager/server/CMakeFiles/server_autogen.dir/ParseCache.txt"
  "rpc_manager/server/server_autogen"
  "test_monitor/src/CMakeFiles/monitor_autogen.dir/AutogenUsed.txt"
  "test_monitor/src/CMakeFiles/monitor_autogen.dir/ParseCache.txt"
  "test_monitor/src/monitor_autogen"
  )
endif()
