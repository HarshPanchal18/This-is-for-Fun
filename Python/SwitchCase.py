def getNum(ID):
    switcher = {
        1: "One",
        2: "Two",
        3: "Three"
    }

    """Return first Matched argument Value 
       if no match then returns No Match case statement."""
    return switcher.get(ID, "Invalid")


num = int(input("Enter Number: "))

print(getNum(num))
