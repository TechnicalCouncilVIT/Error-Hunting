'''
After finding the output of 8th question
divide it by 2 and use this answer as an index
and find the name of the organization Through mail
'''
f=open("email.txt","rt")
people_who_sent_mail=[]
for line in f:
    if not line.startswith('From: '): continue
    pieces = line.split()
    email = pieces[1]
    people_who_sent_mail.append(email)
a=len(people_who_sent_mail)
middle_one=people_who_sent_mail[int(a/2)]
list_org=middle_one.split('@')
organization=list_org
print("Organization is",organization[0])
f.close()
