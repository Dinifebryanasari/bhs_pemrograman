# 4. Berkomunikasi dengan Database di Python

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
print("\nDatabase Query Result:")
print(cursor.fetchall())

# Close the connection
conn.close()