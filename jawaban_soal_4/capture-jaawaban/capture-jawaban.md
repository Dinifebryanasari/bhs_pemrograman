# 4. Berkomunikasi dengan Database di Python

Python dapat berkomunikasi dengan database menggunakan berbagai library seperti `sqlite3`, `mysql-connector-python`, atau `SQLAlchemy`. Di bawah ini adalah contoh menggunakan `sqlite3`, yang merupakan library bawaan Python untuk bekerja dengan SQLite.

### Contoh Kode
```python
import sqlite3

# Connect to the SQLite database (or create it if it doesn't exist)
conn = sqlite3.connect('hospital.db')
cursor = conn.cursor()

# Create a table
cursor.execute('''
CREATE TABLE IF NOT EXISTS patients (
    id INTEGER PRIMARY KEY,
    name TEXT,
    dob TEXT,
    gender TEXT,
    address TEXT,
    phone TEXT,
    registration_date TEXT
)
''')

# Insert data into the table
cursor.execute('''
INSERT INTO patients (name, dob, gender, address, phone, registration_date)
VALUES ('John Doe', '1980-01-01', 'Male', '123 Elm Street', '555-1234', '2024-07-23')
''')

# Fetch data from the table
cursor.execute('SELECT * FROM patients')
print(cursor.fetchall())

# Close the connection
conn.close()
