history_list = list()

while(True):
    print("Select operation.")
    print("1.Add      : + ")
    print("2.Subtract : - ")
    print("3.Multiply : * ")
    print("4.Divide   : / ")
    print("5.Power    : ^ ")
    print("6.Remainder: % ")
    print("7.Terminate: # ")
    print("8.Reset    : $ ")
    print("8.History  : ? ")

    # take input from the user
    choice = input("Enter choice(+,-,*,/,^,%,#,$,?): ")
    print(choice)

    # select the operation and validate it
    def select_op(choice):

        number1 = 0
        number2 = 0
        if (choice in ['#']):
            print('Done. Terminating')
            exit()

        if (choice == '?'):
            history()
            return

        if (choice in ['+', '-', '*', '/', '^', '%']):
            number1 = input("Enter first number: ")
            print(number1)

        if ('$' in str(number1)):
            return -1
        elif ('#' in str(number1)):
            return -1

        number2 = input("Enter second number: ")
        print(number2)

        if ('$' in str(number1)):
            return -1
        elif ('#' in str(number2)):
            return -1

        validation_number = validate_number(number1, number2)

        if (validation_number == -1):
            return
        elif (validation_number == 0):
            print("Not a valid number, please enter again\n")
            return
        elif (validation_number == 1):
            number1 = int(number1)
            number2 = int(number2)

        elif (choice == '#'):
            return -1
        elif (choice == '$'):
            return
        else:
            print("Unrecognized operation")
            return

        # variable for history
        answer = 0.0
        last_calculation = ""

        if (choice == "+"):
            answer = add(number1, number2)
            print(str(number1) + " + " + str(number2) + " = " + str(answer))

        elif (choice == "-"):
            answer = subtract(number1, number2)
            print(str(number1) + " - " + str(number2) + " = " + str(answer))

        elif (choice == "*"):
            answer = multiply(number1, number2)
            print(str(number1) + " * " + str(number2) + " = " + str(answer))

        elif (choice == "/"):
            answer = divide(number1, number2)

            if not (answer == -1):
                print(str(number1) + " / " + str(number2) + " = " + str(answer))

            else:
                print("float division by zero")
                # print('None')
                print(str(number1) + " / " + str(number2) + " = None")
                # print(str(number1) + " % " + str(number2) + str(answer))

        elif (choice == "^"):
            answer = power(number1, number2)
            print(str(number1) + " ^ " + str(number2) + " = " + str(answer))

        elif (choice == "%"):
            answer = remainder(number1, number2)

            if not (answer == -1):
                print(str(number1) + " % " + str(number2) + " = " + str(answer))

            else:
                print("float division by zero")
                print(str(number1) + " % " + str(number2) + " = None")

        # stor cal history
        last_calculation = "{0} {1} {2} = {3}".format(
            number1, choice, number2, answer)
        # print(last_calculation )
        history_list.append(last_calculation)
        return

    # validate the inputs

    def validate_number(number1, number2):

        # validate is there a $ mark, so user will be send to main menu
        if ('$' in str(number1) or '$' in str(number2)):
            return -1
        else:  # check the number is a number(is type integer) or not
            try:
                test_MoreThan100(number1, number2)
                test_DecimalValues(number1, number2)
                test_NonNumeric(number1, number2)
                return 1
            except:
                return 0

    def add(a, b):
        return int(a + b)

    def subtract(a, b):
        return int(a - b)

    def multiply(a, b):
        return int(a * b)

    def divide(a, b):
        try:
            return a/b
        except Exception as e:
            print(e)
        # if not (b == 0.0):
            # return a / b
        # elif(b == 0.0):
            # print(0.0)
        # else:  # if divider is equal to 0, then return that is not a number
            # return -1

    def power(a, b):
        return a ** b

    def remainder(a, b):
        if not (b == 0.0):
            return a % b
        else:
            return -1

    # cal history function
    def history():
        if(len(history_list) == 0):
            print("No past calculations to show")
            return
        else:
            for history in history_list:
                print(history)
            return

    if (select_op(choice) == -1):
        # program ends here
        print("Done. Terminating")
        exit()

    def test_DecimalValues(n1, n2):
        try:
            n1 = int(n1)
            n2 = int(n2)
        except:
            return 0

    def test_NonNumeric(n1, n2):
        if n1.isdigit() and n2.isdigit():
            return 1
        return 0

    def test_MoreThan100(n1, n2):
        if(n1 <= 100 and n2 <= 100):
            return 1
        return 0
