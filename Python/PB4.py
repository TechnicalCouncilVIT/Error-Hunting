'''
Only one line of input containing N, the size of the rangoli
0>n>27
'''
'''
Output:
--------e--------
------e-d-e------
----e-d-c-d-e----
--e-d-c-b-c-d-e--
e-d-c-b-a-b-c-d-e
--e-d-c-b-c-d-e--
----e-d-c-d-e----
------e-d-e------
--------e--------
'''
def print_rangoli(size):
    width  = size*3-4
    string = ''

    for i in range(1,size+1):
        for j in range(0,i):
            string += chr(98+size-j)
            if len(string) < width :
                string += '-'
        for k in range(i-1,0,-1):    
            string += chr(98+size-k)
            if len(string) < width :
                string += '-'
        print(string.center(width,'-'))
        string = ''

    for i in range(size-1,0,-1):
        string = ''
        for j in range(0,i):
            string += chr(98+size-j)
            if len(string) < width :
                string += '-'
        for k in range(i-1,0,-1):
            string += chr(98+size-k)
            if len(string) < width :
                string += '-'
        print(string.center(width,'-'))
if __name__ == '__main__':
    n = 5
    print_rangoli(n)