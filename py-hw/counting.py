track = 0
total = 0
while True:
    raw = raw_input('Enter a number: ')
    try:
        list = int(raw)
    except:
        list = 0
        print 'Not a number'
    if raw == 'done':
        break
    track = track + 1
    total = total + list
avg = total / track
print 'number entered:', track
print 'entries total:', total
print 'average:', avg
