def computepay(h,r):
    if h >= 40 :
        ot = h - 40
        h = 40
    p = h * r + ot * (r * 1.5)

    return p
    
hrs = raw_input("Enter Hours:")
rate = raw_input("Enter Rate:")

try:
    h = float(hrs)
    r = float(rate)
except:
    print 'Error, please enter numeric input'
    quit()
    
p = computepay(h,r)
print p
