#!/user/bin/python
class textfile:
	ntfiles=0
	def __init__(self,fname):
		textfile.ntfiles+=1
		self.name=fname
		self.fh=open(fname,"r")
		self.lines=self.fh.readlines()
		self.nlines=len(self.lines)
		print self.nlines
		self.nwords=0
		wordcount()
	def wordcount(self):
		for line in self.lines:
			words=line.split()
			self.nwords+=len(words)
	def grep(self,target):
		for line in self.lines:
			if line.find(target)>=0:
				print line
#	def totfiles1():
#		print "no.of text file:",textfile.ntfiles
	def totfiles():
		print "no.of text file:",textfile.ntfiles
		
	totfiles2=staticmethod(totfiles)

def wordcount(self):
	for line in self.lines:
		words=line.split()
		self.nwords+=len(words)
obj=textfile("file.txt")
obj2=textfile("file.txt")
obj.wordcount()
obj.grep("def")
#obj.totfiles1()
textfile.totfiles2()
