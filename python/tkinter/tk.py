from Tkinter import *
Root=Tk()
Root.title("example")
#w=Canvas(Root,bg="green",width=300,height=250)
w=Canvas(Root,bg="green")
Root.geometry("%dx%d"%(200,300))
#w.pack()
TextSpec = w.create_text(250,250,anchor="center",font=("TimesNewRoman",15))
w.itemconfig(TextSpec,text="Subject")
CloseButton = Button(Root, text="Close", command=Root.destroy)
CloseButton.grid(sticky=SE)
w.grid()

#w = Label(Root, text="Additive:")
#w.grid()
#w.grid(sticky=S)
#w.grid_location(720,521)
#w = Label(Root, text="Subtractive:")
#w.grid(sticky=E)
Root.mainloop()

