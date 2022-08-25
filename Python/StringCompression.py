from itertools import groupby

uncompressed = str(input("Enter string to compress: "))

# logic to print occurence of values in string
print(*[(len(list(value)), str(key)) for key, value in groupby(uncompressed)])
