import turtle

skk = turtle.Turtle()
skk.speed(0)


def square():
    for i in range(4):
        skk.forward(100)
        skk.right(90)


for i in range(100):
    square()
    skk.right(21)
