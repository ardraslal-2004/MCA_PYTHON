class Rectangle:
    def __init__(self, length, breadth):
        self.length = length
        self.breadth = breadth

    def area(self):
        return self.length * self.breadth

    def perimeter(self):
        return 2 * (self.length + self.breadth)


r1 = Rectangle(10, 5)
r2 = Rectangle(8, 6)

print("Rectangle 1")
print("Area:", r1.area())
print("Perimeter:", r1.perimeter())

print("\nRectangle 2")
print("Area:", r2.area())
print("Perimeter:", r2.perimeter())

if r1.area() > r2.area():
    print("\nRectangle 1 has greater area")
elif r1.area() < r2.area():
    print("\nRectangle 2 has greater area")
else:
    print("\nBoth rectangles have equal area")

