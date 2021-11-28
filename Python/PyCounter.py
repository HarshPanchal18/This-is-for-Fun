def CountChar(str):
    l = 0
    for ch in str:
        if ch.isalpha():
            l = l+1
    print(l)


def CountNum(str):
    n = 0
    for ch in str:
        if ch.isdigit():
            n = n+1
    print(n)


strng = input("Enter a string: ")

print("String is \""+strng+"\"")

print("Letters: ", end="")
CountChar(strng)

print("Numbers: ", end="")
CountNum(strng)
