import re


def snakeToCamel(str):
    # string value in camel case by removing underscore or dash and capitalizing every word
    return "".join(word.capitalize() or '_' for word in re.split("-|_", str))


string = input("Enter string in snake case:")
print(snakeToCamel(string))
