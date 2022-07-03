class rom:
    def intToRom(num):
        val = [1000, 900, 500, 400,
               100, 90, 50, 40,
               10, 9, 5, 4, 1]

        symbol = ["M", "CM", "D", "CD",
                  "C", "XC", "L", "XL",
                  "X", "IX", "V", "IV", "I"]

        romNum = ''
        i = 0

        while num > 0:
            for _ in range(num//val[i]):
                romNum += symbol[i]
                num -= val[i]
            i += 1
        return romNum

    def romToInt(s):
        romVal = {'I': 1, 'V': 5, 'X': 10,
                  'L': 50, 'C': 100, 'D': 500, 'M': 1000}

        intVal = 0
        for i in range(len(s)):
            if i > 0 and romVal[s[i]] > romVal[s[i-1]]:
                intVal += romVal[s[i]]-2*romVal[s[i-1]]
            else:
                intVal += romVal[s[i-1]]

        return intVal


print(rom.intToRom(1))  # I
print(rom.intToRom(540))  # DXL

print(rom.romToInt("MMC"))  # 2100
print(rom.romToInt("IXC"))  # 188
