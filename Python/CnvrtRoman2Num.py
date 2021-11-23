class Solution:
    def roman2int(s):
        Rval = {'I': 1, 'V': 5, 'X': 10, 'L': 50,
                'C': 100, 'D': 500, 'M': 1000}
        Ival = 0
        for i in range(len(s)):
            if i > 0 and Rval[s[i]] > Rval[s[i-1]]:
                Ival += Rval[s[i]]-2*Rval[s[i-1]]
            else:
                Ival += Rval[s[i]]
        return Ival


roman = input(str("Enter Roman Digit: "))
print(Solution.roman2int(roman))
