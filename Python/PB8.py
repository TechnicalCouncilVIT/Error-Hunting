#From The given txt file find the number of lnes starting with "From" and extract the mail id's from that line
# Calculate the total mail id's 
f=open("email.txt","rt")
data=f.read()
people_who_sent_mail=[]
for line in f:
    if not line.startswith('From: '): continue
    pieces = line.split()
    email = pieces[1]
    people_who_sent_mail.append(email)
print(len(people_who_sent_mail))
f.close()
