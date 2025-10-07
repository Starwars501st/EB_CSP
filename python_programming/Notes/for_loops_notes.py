# EB 6th Time and For loops notes

import datetime

current = datetime.datetime.now()
hour = current.hour

#print(f"The time in seconds since Jan 1, 1970")
print(f"The time is :{current}")
print(f"The hour is:{hour}") 

#Lists
siblings = ["Lissie", "Oliver"]

#Starts at zero 0 not 1
print(siblings[1])

#siblings[2] = "Lissie"
#siblings[1] = "Oliver"

#For loop
for siblings in siblings:
    print(f"Hello {siblings}")

    for x in range(20,-11,-1):
        print(x)

#while True:
#  print("Oh NO!")

while i <21:
    if i % 2 == 0:
        print(f"{i} is even")
    else:
        print(f"{i} is odd")
    i += 1

    import random
    number = random.randint(1,20)
    x = 1
    """while x !=number:
        print("Duck")
        x =+ 1


print("Goose!")"""

while True:
    if number == x:
        print("Goose!")
        break
    else:
        print("Duck!")
        x += 1

