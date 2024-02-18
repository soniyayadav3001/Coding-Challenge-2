def add(num1, num2):
    return num1 + num2

def subtract(num1, num2):
    return num1 - num2

def multiply(num1, num2):
    return num1 * num2

def divide(num1, num2):
    return num1 / num2

# Get the two numbers from the user
num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

# Get the operation from the user
operation = input("Enter the operation (+, -, *, /): ")

# Perform the operation and print the result
if operation == "+":
    print(add(num1, num2))
elif operation == "-":
    print(subtract(num1, num2))
elif operation == "*":
    print(multiply(num1, num2))
elif operation == "/":
    print(divide(num1, num2))
else:
    print("Invalid operation")
