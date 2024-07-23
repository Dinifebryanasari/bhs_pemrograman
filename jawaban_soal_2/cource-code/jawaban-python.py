def divide_numbers(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        return "Error: Cannot divide by zero."
    except TypeError:
        return "Error: Invalid input type."
    else:
        return f"The result is {result}."

# Testing Exception Handling
print("\nException Handling Results:")
print(divide_numbers(10, 2))  # Expected Output: The result is 5.0.
print(divide_numbers(10, 0))  # Expected Output: Error: Cannot divide by zero.
print(divide_numbers("10", 2))  # Expected Output: Error: Invalid input type.
