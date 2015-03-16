# handles double digits oddly

largest = None
smallest = None

while True:
    num = raw_input('Enter a number: ')
    if num == 'done':
        break
    try:
        list = int(num)
    except:
        print 'Invalid Input'
        continue
    if largest is None:
        largest = num
    elif num > largest:
        largest = num
    if smallest is None:
        smallest = num
    elif num < smallest:
        smallest = num

print "Maximum is", largest
print "Minimum is", smallest
