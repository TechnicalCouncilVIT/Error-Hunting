'''Fermat’s last theorem, also called Fermat’s great theorem, the statement that there are no natural numbers 
(1, 2, 3,…) x, y, and z such that x**n + y**n = z**n, in which n is a natural number greater than 2. For example, if
n = 3, Fermat’s last theorem states that no natural numbers x, y, and z exist such that x3 + y 3 = z3 
(i.e., the sum of two cubes is not a cube).
Input:
a=2
b=3
c=4
n=3
Output:
No that doesn't
'''


def input_fermat():
    a=input('Enter the first variable \'a\': \n')
    b=input('Enter the second variable \'b\': \n')
    c=input('Enter the third variable \'c\': \n')
    n=input('Enter the exponential variable \'n\': \n')
    return a, b, c, n

def check_fermat(a,b,c,n):

    calc_1=a**n
    calc_2=b**n
    calc_3=c**n

    if n>2 and int(calc_1) + int(calc_2) == calc_3:
        print('Holy smokes, Fermat was wrong!')
    else:
        print('No that doesn\'t work.')

input_fermat()
check_fermat(a,b,c,n)