def solve(s):
    for x in s[:].split():  # splitting into words
        s = s.replace(x, x.capitalize())

    print("Updated String: ", s)


s = input("Enter String: ")
solve(s)
