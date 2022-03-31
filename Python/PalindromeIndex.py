'''
Given a string of lowercase letters in the range ascii[a-z],
determine the index of a character that can be removed to make the string a palindrome.
There may be more than one solution, but any will do.
If the word is already a palindrome or there is no solution, return -1.
Otherwise, return the index of a character to remove.
'''

n = int(input())

for i in range(n):

    s = input().strip()
    l = len(s)
    nop = True

    for j in range(0, int(l/2)+1):

        if(s[j] != s[l-j-1]):
            nop = False
            s = s[:j]+s[j+1:]

            if(s == s[::-1]):
                print(j)
                break
            else:
                print(l-j-1)
                break

    if nop:
        print(-1)

'''
3
aaaba
3
aaabb
4
aba
-1
'''
