# Print a simple christmas tree pattern using asterisk

def christmastree(level):
    a = level-1
    b = 1
    for image in range(0, level):
        for pixel in range(0, a):
            print(' ', end='')
        for image in range(0, b):
            print('*', end='')
        for pixel in range(0, a):
            print(' ', end='')
        b = b+2
        a = a-1
        print()
    for l in range(3):
        print(' '*(level-2), '*')


if __name__ == "__main__":  # main function

    # inputs the height of the tree
    level = int(
        input("Enter the height of christmas tree (Integer less than 30):"))

    christmastree(level)  # function calling

'''


Enter the height of christmas tree(Integer less than 30): 10

         *
        ***        
       *****       
      *******      
     *********     
    ***********    
   *************   
  ***************  
 ***************** 
*******************
         *
         *
         *
 
'''
