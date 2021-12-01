import re
ip = "216.168.0.01"
print(re.sub('\.[0]*', '.', ip))
