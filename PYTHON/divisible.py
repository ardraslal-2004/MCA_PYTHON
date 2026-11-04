num = int(input("Enter a number: "))

if num % 5 == 0:
    if num % 10 == 0:
        print("%d is divisible by 5 and 10" % num)
    else:
        print("%d is not divisible by 5 and 10" % num)
else:
    print("%d is not divisible by 5 and 10" % num)
