AUTOMAKE_OPTIONS=foreign
SUBDIRS=../spi ../i2c #本目录的直接下级目录dohello需要编译
bin_PROGRAMS=main #本目录的文件编译成可执行文件hello。如有多个，用空格分开。然后在下面分别写它们的SOURCE和LDADD。
main_SOURCES=main.c #编译hello需要的源文件列表，如有多个，用空格分开。
main_LDADD=../i2c/libi2c.a ../spi/libspi.a #编译hello需要的库文件列表。如有多个，用空格分开。
