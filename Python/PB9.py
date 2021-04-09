'''
After finding the output of pevious question
divide it by 2 and use this answer as an index
and find the name of the sender of mail
'''
f=open("email.txt","rt")
people_who_sent_mail=[ ]
for line in f:
    if not line.startswith('From: '): continue
    pieces = line.split()
    email = pieces[1]
    people_who_sent_mail.append(email)
#print(people_who_sent_mail)
a=len(people_who_sent_mail)
middle_one=people_who_sent_mail[int(a/2)]
list_org=middle_one.split('@')
org=list_org[1]
print("Name:",org)
f.close()
