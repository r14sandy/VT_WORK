#!/usr/bin/python
from ctypes import *
#import ctypes
cfun=CDLL("./clock.so")
foo=cfun.start()
print foo
if foo==1:
	print "PASS"
else:
	print "FAIL"
#print ctypes.c_char_p(foo).value
