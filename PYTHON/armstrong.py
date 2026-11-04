num = int(input("Enter a number: "))

s = 0
for i in str(num):
    s += int(i) ** len(str(num))

if s == num:
    print("Armstrong Number")
else:
    print("Not an Armstrong Number")

