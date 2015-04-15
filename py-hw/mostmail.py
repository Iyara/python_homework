name = raw_input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
handle = open(name)

emails = dict()
most = 0

for line in handle:
    line = line.rstrip()
    if not line.startswith('From '):
        continue
    words = line.split()
    mail = words[1]
    emails[mail] = emails.get(mail, 0) + 1
  
for mail in emails:
    if emails[mail] > most :
        most = emails[mail]
        hasmost = mail
        
print hasmost, most
    