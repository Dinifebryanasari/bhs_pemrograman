# 1. Function dan Recursive di Python

# Function
def greet(name):
    return f"Hello, {name}!"

# Recursive Function
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n - 1)

# Testing Function and Recursive Function
print("Function Result:")
print(greet("Alice"))

print("\nRecursive Function Result:")
print(factorial(5))
