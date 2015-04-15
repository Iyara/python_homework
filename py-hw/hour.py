name = raw_input("Enter file:")
if len(name) < 1 : name = "mbox-short.txt"
fh = open(name)

hours = dict() 
count = 0
lst = list()

for line in fh:
    line = line.rstrip()
    if not line.startswith('From '):
        continue
    colon = line.find(':')
    hour = line[colon - 2 : colon]
#    print hour
    hours[hour] = hours.get(hour, 0) + 1

for key, val in hours.items() :
    lst.append( (key, val) )
    
lst.sort()

for key, val in lst :
    print key, val
    
    