AUTOMAKE_OPTIONS=foreign
noinst_LIBRARIES=libspi.a   #本目录下的代码编译成libhello.a库。不需要发布。如果需要发布，则写成bin_LIBRARIES。注意，库的名称格式必需为 libxxx.a。因为编译静态库，configure.in需要定义AC_PROG_RANLIB宏。
libspi_a_SOURCES=spi.c #编译libhello.a需要的源文件。注意将库名称中的'.'号改成'_'号。 ''''
