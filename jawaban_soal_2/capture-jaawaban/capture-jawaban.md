# 2. Exception Handling di Python

Exception Handling adalah teknik untuk menangani situasi kesalahan yang mungkin terjadi selama eksekusi program menggunakan blok `try`, `except`, `else`, dan `finally`.

### Contoh Kode
```python
def divide_numbers(a, b):
    try:
        result = a / b
    except ZeroDivisionError:
        return "Error: Cannot divide by zero."
    except TypeError:
        return "Error: Invalid input type."
    else:
        return f"The result is {result}."
