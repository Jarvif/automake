AUTOMAKE_OPTIONS=foreign
SUBDIRS=source   #本目录的直接下级目录src需要编译
EXTRA_DIST=doc/userguide #doc/userguide不需要编译，但要发布该文件。如果有多个文件，则用空格分开。
CURRENTPATH=$(shell /bin/pwd)
INCLUDES=-I$(CURRENTPATH)/source/spi -I$(CURRENTPATH)/source/i2c -I$(CURRENTPATH)/source/lcd
export INCLUDES
