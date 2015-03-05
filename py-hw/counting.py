# worked exercise 5.1, taking an entered series of numbers
# handling bad input, and producing average, total, and number of entries
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
