punc = [ ",", ".", "|", "[", "]", "(", ")", "\"", "\'", "{", "}", "+", "=", "-"]
def one(punc):
	wiki = open("wiki.txt", "r")
	con = wiki.read().lower()
	for i in punc: con = con.replace(i, " ")
	search = input("Enter a word to search: ")
	lst = con.split()
	print(search + " occured " + str(lst.count(search)) + " times.")
def two(punc):
	name = input("Enter filename: ")
	fp = open(name, "r")
	con = fp.read().lower()
	for i in punc: con = con.replace(i, " ")
	lst = con.split()
	while 1:
		if len(lst) == 0: break
		for i in lst:
			print(i + " occured " + str(lst.count(i)) + " times.")
			for j in range(lst.count(i)): lst.remove(i)
opr = int(input("Enter 1 for search in word\nEnter 2 to print occurance of every word\n: "))
if opr == 1:
	one(punc)
elif opr == 2:
	two(punc)
