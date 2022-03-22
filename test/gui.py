import tkinter as tk
from tkinter import ttk


window = tk.Tk()
window.title("Find My Age")
window.geometry('200x200')
greet = ttk.Label(window, text="Enter Your Year of Birth: ")

def fun():
	age = 2022 - int(entry.get())
	msg = "Your Age is " + str(age)
	greet.config(text=msg)

bu = ttk.Button(window, text="Calculate", command=fun)
entry = ttk.Entry(window)
greet.pack()
entry.pack()
bu.pack()
window.mainloop()
