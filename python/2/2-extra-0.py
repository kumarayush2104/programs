print("Sets in Python")
print("Properties of sets: ")
print("-Elements are unindexed.")
print("-Elements do not have any defined order")
print("-Duplicate elements are not allowed")
print("-Elements are not changable")

print("\n\nDeclaration of set: ")

set = { "this", "is", "a", "set", 1, 2}
print(set)

print("\n\nAdd an item in set")
set.add(3)
print(set)

print("\n\nRemove an item from set")
set.remove(1)
print(set)

print("\n\nUniting twro sets")
set2 = {"another", "set"}
unionset = set.union(set2)
print(unionset)

print("\n\nLooping through sets")
for i in unionset:
    print(i)

print("\n\nRemove all the elements from set")
unionset.clear()
print(unionset)