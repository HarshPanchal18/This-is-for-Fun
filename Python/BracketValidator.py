class bracket:
    def isValid(s):
        stack, pchar = [], {"(": ")", "[": "]", "{": "}"}
        for para in s:
            if para in pchar:
                stack.append(para)
            elif len(stack) == 0 or pchar[stack.pop()] != para:
                return False
        return len(stack) == 0


print(bracket.isValid("(){}[]"))  # True
print(bracket.isValid("(){[]}"))  # True
print(bracket.isValid("(){]"))    # False
print(bracket.isValid("({)}[]"))  # False
