# Use the file name mbox-short.txt as the file name
ctr = 0
total = 0
fname = raw_input("Enter file name: ")
fh = open(fname)
for line in fh:
    if not line.startswith("X-DSPAM-Confidence:") : continue
    
    ctr = ctr + 1

    semic = line.find(':')
    endq = len(line)
    snip = line[semic + 1 :endq + 1]
    cleansnip = snip.lstrip()
    numb = float(cleansnip)

    total = total + numb

avg = total / ctr

print "Average spam confidence:", avg
