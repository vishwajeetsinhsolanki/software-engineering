from logic2 import *

print("""
        Welcome to python E-Note.

        Press 1 for generate note.
        press 2 for view note.
        press 4 for exit.
""")

status = True

while status:

    choice = int(input("Enter your choice : "))

    if choice == 1:
        file_generate()
    elif choice == 2:
        read_file()
    elif choice == 4:
        print("=====Thank you=====")
        break
    else:
        print("Invalid input!")
        break

    rep = input("Do you want to read of generate more notes (y/n) : ").lower()

    if rep == "y" or rep == "yes":
        status == True
    else:
        break