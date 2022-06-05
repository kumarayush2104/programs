print("Lists (rw)\n")

print("\nDefining a list:")
lst = [1,2,3,4,5]
print(lst)

print("\nList Methods ")
print("append, list.append(element), element will be added in the end of the list")
lst.append(6)
print(lst)

print("\ninsert, list.insert(index, element), inserts provided element in the provided index")
lst.insert(0, 0)
print(lst)

print("\nextends, list.extend(list), combines present list with provided list.")
lst2 = [6,7,8,9,9,9,9,1]
lst.extend(lst2)
print(lst)

print("\nremove, list.remove(element), removes the element from the element (first encountered only)")
lst.remove(6)
print(lst)

print("\npop, list.pop(index), removes the element from the list respective to its index number")
lst.pop(0)
print(lst)

print("\nindex, list.index(element), tells us the index number of provided element")
print(lst.index(4))

print("\ncount, list.count(element), counts the number of times an element occurs in the list")
print(lst.count(9))

print("\nreverse, list.reverse(), reverse the list (i.e 1,2,3,5 => 5,3,2,1)")
lst.reverse()
print(lst)

print("\nsort, list.sort(), sorts the list in ascending by default, (for descending use list.sort(reverse=True)")
lst.sort()
print(lst)

print("\nlen, len(arg), provides the length/size of the arg")
print(len(lst))

print("\ncopy, list.copy(), copies the whole list to a variable")
lst2 = lst.copy()
print(lst2)

print("\nclear, list.clears(), clears the whole list")
lst2.clear()
print(lst2)

print("\nSlicing in Python")
print("list[from(small):until(large)], to get a certain set of number")
print("EG-1", lst[0:5])
print("EG-2", lst[-5:-1])



print("\nIndexing in Python")
print("Positive: [ 0,  1,  2,  3,  4,  5,  6,  7]")
print("Negative: [-8, -7, -6, -5, -4, -3, -2, -1]")

print("\nUsing List as Queues and Stacks")
print("Queue: From queue, what you should remember how a queue works, suppose there is an queue for carnivals,\
the person standing first in the queue will go first in the carnival and the a new person will be standing last in the queue")
print("List Demonstration: ['first', 'person', 'person', 'person', 'person' , 'new person], here first will be removed first and a new element will be added in the last")
print("\nSo while using list as queues we need to remember that element in the index(0) will be removed first, and a new element will be always at -1 index")
print("\n\nStacks: stacks are different from Queues, because in stacks, the newer element gets removed first and the older element will be removed at last")
print("List Demonstration: ['first', 'second', 'third'],  here first is the oldest element, but third will be removed first")

print("\ndel function, del(var), removes a variable from the memory")
del(lst2)
print("This should throw and error: ", lst2)
print("Difference between del and list.clear(): list.clear() only clears the element of the list, while the list still persists in the memory but del also removes the list from the memory (here memory=RAM).")
