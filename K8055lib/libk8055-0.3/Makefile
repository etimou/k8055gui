# $Id: Makefile,v 1.5 2008/05/21 20:22:44 mr_brain Exp $
#
# Simple makefile for the libk8055 library
#
# change this to your distribution default
# usually /usr/local or /usr
PREFIX = /usr
CC = gcc
VERSION =0.3
LIBDIR = $(PREFIX)/lib
INCLUDEDIR = $(PREFIX)/include
OBJS = libk8055.o
CFLAGS = -O2 -DDAEMON -DVERSION='"$(VERSION)"' -Wall
LIBS = -lusb -L/usr/lib -lm
LINK = ln

libk8055.so.$(VERSION): libk8055.o
	$(CC) -o libk8055.so.${VERSION} $(LIBS) -shared libk8055.o
	-$(LINK) -sf libk8055.so.${VERSION} libk8055.so

libk8055.o: libk8055.c
	$(CC) $(CFLAGS) -c -g -fPIC libk8055.c

libk8055.c: k8055.h

clean:	
	rm -f *.o libk8055.so libk8055.so.$(VERSION)

install: libk8055.so.$(VERSION)
	cp -f libk8055.so* $(LIBDIR)/
	cp -f k8055.h $(INCLUDEDIR)/

uninstall:
	rm -f $(LIBDIR)/libk8055* $(INCLUDEDIR)/k8055.h

