#AK,EB,YS,JS 6th Text based adventure game

#Eva Briggs background story, beginning and ending.
print("This story begins in a small village in Hyrule where a young boy plays unaware of the evil that would soon arise. This boy is named Link, little does he know he is a descendant of the legendary hero who in the past had protected Hyrule from the evils of Ganandorf and defeated him, but it was prophesied that one day Ganadorf would come back and a hero would rise and defeat him.")
print("Years later the prophecy became true and the evil Lord Ganondorf returned and stole Princess Zelda, now someone must rise to save her, perhaps the descendant of the hero? Link does his chores on the farm not knowing what has just occurred, a messenger comes and tells the town to flee, links father tells him that he is descendant of the great hero and gives him the choice to flee with them or take his grandfather's sword and save the princess.")
print("What will you do?")


#Juliette Santacruz, forest part of storyline  
def lost_woods():  
    print("You arrive in The Lost Woods, the first part of the triforce buried deep in the woods. To obtain this piece, you will need to light torches to find you way and find a key to enter through the gates.")
    print("First, you need to find the torch to light your way.")
    while True:
        looking = input("Where will you look, in the bushes, or  inside the great oak tree?:\n").strip().lower()
        if looking == "bushes":
            print("You look in the bushes only to find a couple of berries, which you put in your bag, you then head over to look in the great oak tree finding the torch!")
            break
        elif looking == "great oak tree":
            print("you search inside the Great Oak Tree, finding the torch! congrats. Your next mission is to find the gates leading to the triforce")
       
        else:
            print("Sorry that is not an option, Please type either, 'great oak tree' or 'bushes'")
   
        print("You have the torch to light your path, you need to find the Gates of Secrets leading to the triforce.")
    print("You light your torch, and see the fire flickering left but you also see a trail of rocks leading forward.")
    while True:
        choice = input("Will you follow the rocks and go forward, or will you follow the torch and go left? (Type forward or type left):\n").strip().lower()
        if choice == "left":
            print("You  go left, following the torch... after 1 hour of long walking, you end up the gates but it is guarded by an evil elf!")
            break
        elif choice == "foward":
            print("You walk the way the rocks are leading, after several hours you finally arrive at the gates..however it is guarded by an evil elf.")
        else:
            print("Sorry, that is not an option given. please type 'forward' or 'left'")
     




    print("You have found the gates, and ran into the evil elf. He asks you what you are doing here, you say you are here to achieve the first part of the triforce...the elf then says you have to give him berries in exchange for the gate to open")
    while True:
        berries = input("Going back to your memories...did you grab the berries?:\n").strip().lower()
        if berries == "yes":
            print("You say yes then give the elf the berries, he then lets you enter the gates and you find the first piece of the triforce.")
            break
        elif berries == "no":
            print("You didn't get the berries and you have to go back..You do end up going back and finally finding the berries you take this journey and give it the elf. He lets you enter the gates and you find a piece of the triforce.")
        else:
            print("Sorry that is not an option given, please type yes or no.")
    print("Good job you have found a piece of the triforce you need. ")
    print("Head to the next part of your adventure...which is to be continued...")
    choice = input ("For the next part of your journey would you like to go to the lost woods, lake hylia or the volcano first?").strip().lower()
    while True:
        if choice ==("lake hylia"):
            lake_hylia()
            break
        elif choice == ("lost woods"):
            lost_woods ()
            break
        elif choice == ("death mountian"):
            death_mountain()
            break
        else:
            print("Invalid input")
           

#Annalise Kinsey, 2nd part lake region.
def lake_hylia():
    def invalid_input():
        print("I'm sorry that is not a valid input try again.")
    def user_input(choice):
        return choice.stirp().lower()
    print ("You arrive at lake Hylia. A piece of the triforce visible at the bottom of the lake. To obtain it you will need to dive down to the bottom of the lake and find the key to the ornate chest it is hidden in.")
    print ("The lake is hundreds of feet deep and you will need scuba gear to reach the bottom. You glance around and notice a dark cave but you sailors can see a waterfall that leads up to a higher plateau overlooking the lake")
    cave_choice = user_input(input(print("Will you go inside the cave or climb the waterfall? Type left for the cave and right for the waterfall")))
    while True:
        if cave_choice == ("right"):
            print ("You make your way toward the sheer rock face with water cascading down. You slowly begin to make your way up the slick black rocks. Several hours later you finally arrive at the top of the waterfall")
            break
        elif cave_choice == ("left"):
            print("You plunge into the dark cave and through the light coming from the opening you can see that the cave drops off into a cliff. You back  out of the cave and make your way towards the waterfall instead. You make your way up to the top of the waterfall and at the top")
            break
        else:
            invalid_input
    print ("you can see a river stretching for miles surrounded by a meadow filled with wild flowers. As you glance around you see a sign saying that there is a town a little less than a mile away. You still need to find the key to the treasure so you begin to look around.")
    print ("After hours of looking you finally stumble upon a door that leads down into the earth. You open the door and descend into the darkness beyond. After stumbling down some stairs in the darkness you come upon a room with a lit torch. You approach a wall and notice a riddle written upon it.")
    print ("The riddle reads: I am tall when I am young and I am short when I am old what am I?")
    riddle_answer = user_input(input(print("What does the riddle mean?")))


    while True:
        if riddle_answer == ("candle") or ("a candle"):
            print("Congradulations you solved the riddle.")
            break
        else:
            print("You enter your answer to the riddle and nothing happens. You should try again.")


    print ("The wall the riddle was written on begins to shake and move to the left. It reveals a room with a chest in the center. You open the chest and discover a small silver key. You pocket the key and then exit the room. You make your way back up the stairs and exit into the medow")
    print ("You still need to find scuba gear to get to the bottom of the lake. You remember seeing a sign about a town nearby and you make your way down a dirt path that appears to lead to the nearest town. After walking for 20 minutes you stumble upon a small town with quaint little shops all lining a bustling town square.")
    print ("You examine all the shops and notice that one proclaims that it sells the best quality scuba gear. You make your way over to the shop and the owner greets you with a smile. On the course of your journey you have not earned enough money to buy the scuba gear by the owner of the shop informs you that if you can solve her riddle she will give you the gear for free.")
    print ("The shop keeper gives you a piece of paper. The paper reads I have a bed but never sleep I have a mouth but never speak what am I?")
    river_answer = user_input(input(print("What is the answer to the riddle")))
    while True:
        if river_answer == ("river") or ("a river"):
            print("The shop keeper smilies and gives you the scuba gear.")
            break
        else:
            print ("The shop keeper shakes her head and tells you to try again.")


    print ("You leave the town behind and make your way back to the top of the waterfall. You climb back down the rocks and make your way to Hylia lake. You put on your scuba gear and dive down to the bottom of the lake. You pull out the silver key and use it to unlock the chest located at the bottom of the lake.")
    print ("A glow spills out of the chest and you can see a small golden triangle. You grab the triangle and obtain part of the triforce. You surface from the bottom of the lake. You take off all of you scuba gear and start on a path that should take you to the base of death mountain.")
    choice = input ("For the next part of your journey would you like to go to the lost woods, lake hylia or the volcano first?").strip().lower()
    while True:
        if choice ==("lake hylia"):
            lake_hylia()
            break
        elif choice == ("lost woods"):
            lost_woods ()
            break
        elif choice == ("death mountian"):
            death_mountain()
            break
        else:
            print("Invalid input")
#Yaretzi Sanchez, Death mount , part 3
def death_mountain():
    print("Congrats you have made it to the base of Death mountain!")
    print(" You will need armor in order to make it up Death mountain, where a piece of the triforce is guarded by a Hinox. Plus you will need water and food for the trip there.")
    print("you see a small light coming from inside a little hut looking house on your right, and to your left you see a very faint path")
    choice_DM = input(print("would you like to go to the right, small hut or left down the path?\n")).strip().lower()
    while True:
        choice_DM = input(print("would you like to go to the right, small hut or left down the path?\n")).strip().lower()
        if choice_DM=="left":
            print("you go down the faint path. It had lots of pretty colorful flowers and trees making it shady but still sunny. In one of  the many rose bushes, you see something. You find a small old map leading to somewhere inside. Though you need more food for the trip. lucky you find berries and some apples")
        elif choice_DM == "right":
            print("you make your way to the small hut. It's a cozy little place that is being overgrown by vines and flowers, you go in the wooden old door barely on its hinges. you find a chest about the size of a stool, full of food, and bottles of water, Yay lucky you! After you collect your findings, you go down the faint path. It had lots of pretty colorful flowers and trees making it shady but still sunny. In one of  the many rose bushes, you see something. You find a green bottle with a small old map leading to somewhere inside.")
        else:
            print("pleaser enter left or right.")
        break
    print("after following the map it leads you to a shady, cool hidden spot by trees and overgrown green grass bushes. you make your way through the thick bushes and see armor!")
    pathway_2 = input("only problem is that it is on higher ground, to get to it would you like to try and climb the loose rocks or try and find another way up? type rocks or look around.\n").strip().lower()
    while True:
        pathway_2 = input("only problem is that it is on higher ground, to get to it would you like to try and climb the loose rocks or try and find another way up? type rocks or look around.\n").strip().lower()
        if pathway_2 == "look around":
            print(" after some walking and looking around you find this little dirt up hill path, how convenient! you go up this little dirt path and you make it up to the shinny armor! and its a perfect fit, well almost. but now you have everything to climb Death moutain!")
        elif pathway_2 == "rocks":
            print("you try to climb the rocks but you fall. Let's look around for another way up. After a while you find this little dirt path and you make it up to the shinny armor! and it's a perfect fit, well almost. but now you have everything to climb Death Mountain! ")
        else:
            print("please enter rocks or look around.")
            break
    print("you make your way up Death mountain and by a good pace you have already reached the top! Now you must defeat the Hinox in order to get a Triforce piece.")
    while True:
        start_fight = input("enter start to being fight\n").strip().Upper()
        if start_fight == "START":
            print("the battle starts and after around 10 minutes you manage to defeat the Phoenix, even if it was a close one. Yay!")
        else:
            print("please enter start")
            break
   
    print("now that the hinox is defeated you climb the mountain a little further, the path is much nicer now, it has grass on the sides and flowers here and there. once up on the top of death mountain your find a piece of the triforce!")
    pick_upTriforce = input(" enter pick up to pickup the last piece of the triforce!\n").strip().lower()
    while True:
        pick_upTriforce = input(" enter pick up to pickup a piece of the triforce!\n").strip().lower()
        if pick_upTriforce == "pick up":
            print(">>>Congrats you have acquired a piece of the triforce!<<<")
        else:
            print("please enter pick up.")
            break
    choice = input ("For the next part of your journey would you like to go to the lost woods, lake hylia or the volcano first?").strip().lower()
    while True:
        if choice ==("lake hylia"):
            lake_hylia()
            break
        elif choice == ("lost woods"):
            lost_woods ()
            break
        elif choice == ("death mountian"):
            death_mountain()
            break
        else:
            print("Invalid input")
   
#Eva Briggs beginning
choice = input("Will you take the sword?").strip().lower()
while True:
    if choice == ("yes"):
         print("You grab the sword and continue your journey ")  
         break
    elif choice ("no"):
        print("You flee with the town and Lord Ganandorf takes over Hyrule. Try again.")
    else:
        print("You need to tell your father Yes or No! Try again.")


    triforce.insert("triforce_piece_3")




choice = input ("For the start of your journey would you like to go to the lost woods, lake hylia or the volcano first?").stirp().lower()
while True:
    if choice ==("lake hylia"):
        lake_hylia()
        break
    elif choice == ("lost woods"):
        lost_woods ()
        break
    elif choice == ("death mountian"):
        death_mountain()
        break
    else:
        print("Invalid input")
triforce = []


#Eva Briggs ending
print("Now that you have acquired all 3 pieces of the Triforce you can go to Hyrule Castle, defeat Ganondorf, and save Princess Zelda.")
print("It takes you the next few days to get the castle but you made it and Ganondorf is there waiting for you.")
print("You walk into the castle and Ganondorf is there sitting on the king's throne. Ganondorf approaches and says: Finally the hero has come to try and defeat me, I have waited for you, and now I will destroy you.")
print("You look up see the princess in a cage hanging from the ceiling, you throw your sword and it cuts the rope, she lands, picks up the sword and stabs Ganondorf in the back, with the power of the triforce it destroys him, for good.")
print("Now Hyrule is saved! You and the princess exchange glances of gratitude, she approaches you and thanks you for your courage and bravery, she knights you and asks if you want to become the head of Hyrule's defence and chief knight, much better than a farmer, though you do miss home.")




choice = input("Do you accept?").stirp().lower()
while True:
    if choice == ("yes"):
         print("You become the Chief Knight and are in charge of Hyrule castle's defence and make your father very proud. Overall you are very happy.")  
         break
    elif choice ("no"):
        ("You politely decline and go home a hero, the entire village praises you for your bravery, you continue to be a farmer and you live the rest of your life in peace with your father in the village. ")
        break
    else:
            print("You need time to think about it.")