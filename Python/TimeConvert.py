def TimeConvert(num):
    return "%d:%d" % (num//60, num % 60)


print(TimeConvert(int(input())))
