start = int(input("Enter the starting range: "))
end = int(input("Enter the ending range: "))

print("The required numbers are:")

for num in range(start, end + 1):
    if 1000 <= num <= 9999:
        if all(int(digit) % 2 == 0 for digit in str(num)):
            root = int(num ** 0.5)

            if root * root == num:
                print(num)

