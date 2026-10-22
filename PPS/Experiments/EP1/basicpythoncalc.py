import math 

#This will handle the options that the user wants
print("===============BASIC PYTHON CALCULATOR===============\n")
print("Please select an operation to perform: ")
print("1. Add")
print("2. Subtract")
print("3. Multiply")
print("4. Divide")
print("5. Square Root")
print("6. Power")
print("7. Factorial")
print("8. Exit")

#function to add numbers 
def add(n):
    n = int(input("How many numbers do you want to add?: "))
    total = 0
    for i in range(n):
        num = int(input(f"Enter number {i + 1}: "))
        total += num
    return total

#function to subtract numbers
def subtract(n):
    try:
        n = int (input("How many numbers do you want to subtract?: "))
    except ValueError:
        print("Error: Please enter a valid integer.")
        return None
    total = 0
    for i in range(n):
        num = int(input(f"Enter number {i + 1}: "))
        total -= num
    return total

#function to multiply numbers
def multiply(n):
    try:
        n = int(input("How many numbers do you want to multiply?: "))
    except ValueError:
        print("Error: Please enter a valid integer.")
        return None
    total = 1
    for i in range(n):
        num = int(input(f"Enter number {i + 1}: "))
        total *= num
    return total

#function to divide numbers
def divide(n):
    try:
        n = int(input("How many number do you want to divide?: "))
    except ValueError:
        print("Error: Please enter a valid integer.")
        return None
    total = 1
    for i in range (n):
        num = int(input(f"Enter number {i + 1}: "))
        try:
            total /= num
        except ZeroDivisionError:
            print("Error: Division by zero is not allowed!")
            return None
    return total    

#function to calc square root
def sqrt(n):
    try:
        n = int(input("Enter number to find square root: "))
    except ValueError:
        print("Error: Please enter a valid integer.")
        return None
    try:
        return math.sqrt(n)
    except ValueError:
        print("Error: The number cannot be negative")
        return None
    

#function to calc power
def powa(n):
    try:
        n = int(input("Enter base number: "))
    except ValueError:
        print("Error: Please enter a valid integer.")
        return None
    exp = int(input("Enter exponent number: "))
    try:
        return int(math.pow(n, exp))
    except ValueError:
        print("Error: An error occurred while calculating the power")
        return None

#function to calc factorial
def fact(n):
    try:
        n = int(input("Enter number to find its factorial: "))
    except ValueError:
        print("Error: Please enter a valid integer.")
        return None
    try:
        if n < 0:
            raise ValueError("Factorial is not defined for negative numbers.")
    except ValueError as e:
        print(f"Error: {e}")
        return None
    return math.factorial(n)


#main function to run the calculator
def main():
    while True:
        choice = input("Enter your choice (1-8): ")
        if choice == '1':
            print("Result: ", add(0))
        elif choice == '2':
            print("Result: ", subtract(0))
        elif choice == '3':
            print("Result: ", multiply(0))
        elif choice == '4':
            print("Result: ", divide(0))
        elif choice == '5':
            print("Result: ", sqrt(0))
        elif choice == '6':
            print("Result: ", powa(0))
        elif choice == '7':
            print("Result: ", fact(0))
        elif choice == '8':
            print("Exiting the calculator. Goodbye!")
            break
        else:
            print("Invalid input. Please try again.")

main()