fname = raw_input("Enter file name: ")
fh = open(fname)
wordlist = list()
for line in fh:
    line = line.rstrip()
    words = line.split()
    for word in words:
        if word in wordlist:
            continue
        else:
            wordlist.append(word)
         
wordlist.sort()
print wordlist
    