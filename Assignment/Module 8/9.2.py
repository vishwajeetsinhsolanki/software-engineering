# Write a Python program to insert data into an SQLite3 database and fetch it.

import sqlite3


conn = sqlite3.connect("mydatabase.db")
cursor = conn.cursor()


cursor.execute("CREATE TABLE IF NOT EXISTS users (name TEXT, age INTEGER)")


cursor.execute("INSERT INTO users VALUES ('Alice', 25)")
cursor.execute("INSERT INTO users VALUES ('Bob', 30)")


conn.commit()

cursor.execute("SELECT * FROM users")
for row in cursor.fetchall():
    print(row)


conn.close()
