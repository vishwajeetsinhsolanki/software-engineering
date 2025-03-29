import os
import datetime

file_list = ()

def file_generate():


    note_titel = input("Enter E-Note Title : ")
    note_titel += ".txt"

    file_list.append(note_titel)

    if os.path.exists(note_titel):
        print()
        print("====File already exist!====")
        print()
        f = open(note_titel,"a")
        print("**Write \"exit\" for exit from note content!***")
        print()

        while True:

            text = input("Enter E-Note content : ")

            if text != "exit":
                f.write(f"E-Note Description : {text}" + "\n")
            else:
                break
    
    else:

        name = input("Enter E-Note Generator Name : ")

        f = open(note_titel,"w")

        print("**Write \"exit\" for exit from note content!**")
        
        gen_date = str(datetime.datetime.now())
        
        f.write(gen_date + "\n")

        
        while True:
            text = input("Enter E-Note content : ")
            
            if text != "exit":
                
                f.write(f"E-Note Description : {text}" + "\n")
            else:
                break
        
        f.write(f"Note Generator : {name}" +"\n")

def read_file():

    print("====Your Notes====")
    for i in file_list:
        print(i)
    print()
    note_titel = input("Enter E-Note Title to read : ")
    note_titel += ".txt"
    
    if os.path.exists(note_titel):
        f = open(note_titel,"r")
        print(f.read())
    else:
        print("File not exist!")