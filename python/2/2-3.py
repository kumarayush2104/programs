print("dict (rw, t&c apply)\n\n")
dictionary = {1: "Hello", 2: "Python", 3: "Microsoft", 4: "VS Code"}
print(dictionary)

print("\nget, dict.get(index), gets the element of the provided index")
print(dictionary.get(2))

print("\nitems, dict.items(), list out dicts' element with its specified index number")
print(dictionary.items())

print("\nkeys, dict.keys(), list out the 'Used Index number' in the dict")
print(dictionary.keys())

print("\npopitem, dict.popitem(), Removes last element of the dictionary")
dictionary.popitem()
print(dictionary)

print("\nvalues, dict.values(), prints all the elements of dict (doesn't print their index number)")
print(dictionary.values())

print("\nclear, dict.clear(), refer list.clear() for defination")
dictionary.clear()
print(dictionary)