SUBDIRS=net protobuf config
noinst_PROGRAMS=server
server_SOURCES=main.cpp main.h
server_LDADD=net/libNetServer.a protobuf/libProtoDef.a config/libConfig.a -lprotobuf -lxml2
