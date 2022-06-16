from time import sleep

print("List as Queues")

lst = []
for i in range(1, 20):
    if i < 6:
        lst.append(i)
    else:
        print(lst)
        sleep(2)
        lst.pop(0)
        sleep(2)
        lst.append(i)