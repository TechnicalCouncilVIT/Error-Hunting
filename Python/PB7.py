'''
A newly opened multinational brand has decided to base their company logo on 
the three most common characters in the company name. They are now trying out various combinations of 
company names and logos based on this condition. Given a string s, which is the company name in lowercase letters, 
your task is to find the top three most common characters in the string.

Print the three most common characters along with their occurrence count.
Sort in descending order of occurrence count.
If the occurrence count is the same, sort the characters in alphabetical order
For example, according to the conditions described above,
Pinterest
would have it's logo with the letters 
e,t
'''
'''
Output:
b 3
a 2
c 2
'''
S = 'aabbbccde'
letters = [0]*26

for letter in S:
    letters[ord(letter)-ord('a')] += 1
for _ in range(3):
    max_letter = max(letters)
    
    for index in range(26):
        if max_letter == letters[index]:
            print (chr(ord('a')-index), max_letter)
            letters[index] = -1
            break
