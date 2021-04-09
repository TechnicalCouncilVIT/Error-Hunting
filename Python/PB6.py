'''
You and Ross are good friends. Yesterday, Ross received N credit cards from XYZ Bank. He wants to verify
whether his credit card numbers are valid or not. You happen to be great at regex so he is asking for your help!

A valid credit card from ABCD Bank has the following characteristics:
1. It must start with a 2,3  or 4
2. It must contain exactly 16 digits
3. It must only consist of digits (0,9)
4. It may have digits in groups of 4 ,separated by one hyphen "-"
5. It must NOT use any other separator like ' ' , '_', etc
6. It must NOT have 4  or more consecutive repeated digits
Valid Credit Card Numbers:
4253625879615786
4424424424442444
3122-2368-7954-3214
Invalid Credit Card Numbers:
42536258796157867       #17 digits in card number → Invalid 
4424444424442444        #Consecutive digits are repeating 4 or more times → Invalid
5122-2368-7954 - 3214   #Separators other than '-' are used → Invalid
44244x4424442444        #Contains non digit characters → Invalid
0525362587961578        #Doesn't start with 2, 3 or 4 → Invalid
'''
'''
Output:
Valid
Valid
Invalid
Valid
Invalid
Invalid
'''
import re
def check_no(num):
    if (re.match(r'$[234]', num) and
            (re.match(r'([\d]{4}-){3}[\d]{4}$', num) or
             re.match(r'[\d]{16,}', num)) and
            not re.search(r'(\d)\1{3,}', num.replace("-", ""))):
        print("Valid")
    else:
        print("Invalid")


if __name__ == "__main__":
    input_numbers=['2123456789123456','3123-4567-8912-3456','41234-567-8912-3456','4123356789123456','2133-3367-8912-3456','3123 - 3567 - 8912 - 3456']
    
    for num in input_numbers:
        check_no(num)
        