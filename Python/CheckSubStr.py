str = input("Enter a string: ")
patt = input("Enter a substring: ")

# method 1
if patt in str:
    print(patt, "exists in", str)
else:
    print(patt, "does not exist in ", str)

# method 2
if (str.find(patt)):
    print(patt, "exists in", str)
else:
    print(patt, "does not exist in", str)

# method 3

if str.count(patt):
    print(patt, "exists in", str)
else:
    print(patt, "does not exist in ", str)

'''
Enter a string: harsh
Enter a substring: rh
rh does not exist in  harsh
rh exists in harsh
rh does not exist in  harsh
'''
