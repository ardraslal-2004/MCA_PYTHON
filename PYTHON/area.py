l = int(input("Enter the length of the Rectangle = "))
b = int(input("Enter the breadth of the Rectangle = "))
area = lambda l, b: l * b
print("Area of rectangle = ", area(l, b))

s = int(input("Enter the side of the Square = "))
sarea = lambda s: s * s
print("Area of Square = ", sarea(s))

base = int(input("Enter the base of the Triangle = "))
height = int(input("Enter the height of the Triangle = "))
tarea = lambda base, height: 1/2 * base * height
print("Area of Triangle = ", tarea(base, height))

