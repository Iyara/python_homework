# test comment
hrs = raw_input("Enter Hours:")
rate = raw_input("Enter Rate:")

try:
    h = float(hrs)
    r = float(rate)
except:
    print 'Error, please enter numeric input'
    quit()
    
r = float(rate)
if h >= 40 :
    ot = h - 40
    h = 40
pay = h * r + ot * (r * 1.5)
print pay
