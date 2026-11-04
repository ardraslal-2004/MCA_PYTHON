from Graphics import rectangle
from Graphics import circle
from Graphics.ThreeDGraphics import cuboid
from Graphics.ThreeDGraphics import sphere

print("\nGRAPHICS \n")
print("1. Rectangle")
print("2. Circle")
print("3. Cuboid")
print("4. Sphere")

choice = int(input("Enter your choice: "))

if choice == 1:
    length = float(input("Enter length: "))
    breadth = float(input("Enter breadth: "))

    print("Area:", rectangle.area(length, breadth))
    print("Perimeter:", rectangle.perimeter(length, breadth))

elif choice == 2:
    radius = float(input("Enter radius: "))

    print("Area:", circle.area(radius))
    print("Circumference:", circle.perimeter(radius))

elif choice == 3:
    length = float(input("Enter length: "))
    breadth = float(input("Enter breadth: "))
    height = float(input("Enter height: "))

    print("Surface Area:", cuboid.area(length, breadth, height))
    print("Total Edge Length:", cuboid.perimeter(length, breadth, height))

elif choice == 4:
    radius = float(input("Enter radius: "))

    print("Surface Area:", sphere.area(radius))
    print("Great Circle Circumference:", sphere.perimeter(radius))

else:
    print("Invalid choice!")
