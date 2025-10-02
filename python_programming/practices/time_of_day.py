# EB 6th Time of Day

import datetime

current = datetime.datetime.now()
hour = current.hour

if hour < 12:
 
    print("Good Morning!")

elif hour < 17:
    print("Good Afternoon")

else:("Good Evening!")