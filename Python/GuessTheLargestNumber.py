import inflect
import random


def main():
    p = inflect.engine()
    one = 1
    sevenHundredBillion = 700_000_000_000
    imThinkingOfNum = random.randint(one, sevenHundredBillion)
    print('I\'m thinking of a number between one and seven hundred billion. Try to guess it.')

    tryToGuessIt = True
    while tryToGuessIt:
        guess = random.randint(one, sevenHundredBillion)
        print(p.number_to_words(guess))
        tryToGuessIt = (guess != imThinkingOfNum)
        if tryToGuessIt:
            print('Nope. Guess again.')


if __name__ == '__main__':
    main()
