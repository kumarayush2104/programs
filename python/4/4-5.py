print("Multi Threading in python")
print("In this example, we want to get FACTORIAL of n numbers")

import threading

## Define a function of it

def fact(num):
    fact = 1
    for i in range(1, num+1):
        fact = fact*i
        
    print("Factorial of {} is {}".format(num, fact))
		

ask = int(input("Enter nth number to get factorial: "))

threadlist = []

for i in range(0, ask+1):
    threadlist.append(threading.Thread(target=fact, args=(i,)))
    
for i in range(0, ask+1):
    threadlist[i].start()
    
for i in range(0, ask+1):
    threadlist[i].join()
    
    
print("\n\nDone !!")