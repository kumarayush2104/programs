print("Strings\n\n")


print("Declaration of String")
string = "this is a string"

print("\nlower and upper, string.lower(), string.upper(), converts the whole string to lower and upper case RESPECTIVELY")
print("Lower Case:", string.lower(), "Upper Case:", string.upper(), "Capitalize Form:", string.capitalize())

print("\nfind and replace, string.find(string), string.replace(string, string), helps us to find a particular part of a string and replace a particular part of a string")
print("Where is a ?", string.find("a"), "\nReplacing 'a' with 'not a':", string.replace("a", "not a"))

print("\nsplit, string.split(), splits a string into a list (break where whitespace is encountered, you can modify the argument by providing a character like string.split('.'), which gets breaks wherever a '.' occurs)")
print("Spliting a string: " + str(string.split()))

print("\njoin, 'string'.join(iterable) , joins a list into string, with adding the provided 'String' between them.")
lst = ["Strings", "are", "group", "of", "characters"]
print("Join Function works like: " + " ".join(lst))

print("\n\nSome important fundamentals of String:\
- Any string variable is mutable but a single character (example: String[0]) is not mutable\
- In python we can multiply and add strings with '*' and '+' respectively. DO REMEMBER, your 'numeric value' is String or int while performing any arithmatic tasks\
- print('Python' + ' is fun'), joining of multiple statements are possible ONLY IF they are string !!!\
")