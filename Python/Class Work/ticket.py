total=0
print("**********************")
print("Welcome to BookMyShow")
print("**********************")
while True:
    print("1) Miraj")
    print("2) Cineplex")
    print("3) PVR")
    print()
    print("**********************")
    n = int(input("Enter your Choice: "))
    count = 0
    if n==1:
        print("**********************")
        print("Welcome to Miraj")
        print("Choose Seats: ")
        print("1)Silver    150Rs")
        print("2)Gold    200Rs")
        print("3)Premium    250Rs")
        n1=int(input("Enter your Choice seats: "))
        if n1==1:
            print("You choose Silver")
            print("How many Tickets you want to buy")
            Ticket = int(input("Enter number of tickets: "))
            count=(Ticket*150)+(Ticket*150*0.009)
            print("Your Total is: ",count)

        elif n1==2:
            print("You choose Gold")
            print("How many Tickets you want to buy")
            Ticket = int(input("Enter number of tickets: "))
            count=Ticket*200+(Ticket*200*0.009)
            print("Your Total is: ",count)

        elif n1==3:
            print("You choose Silver")
            print("How many Tickets you want to buy: ")
            Ticket = int(input("Enter number of tickets: "))
            count=Ticket*250+(Ticket*250*0.009)
            print("Your Total is: ",count)

    elif n==2:
        print("**********************")
        print("Welcome to Cineplex")
        print("Choose Seats: ")
        print("1)Silver    150Rs")
        print("2)Gold    200Rs")
        print("3)Premium    250Rs")
        n2=int(input("Enter your Choice seats"))
        if n2==1:
            print("You choose Silver")
            print("How many Tickets you want to buy: ")
            Ticket = int(input("Enter number of tickets: "))
            count=Ticket*150+(Ticket*150*0.009)
            print("Your Total is: ",count)

        elif n2==2:
            print("You choose Gold")
            print("How many Tickets you want to buy: ")
            Ticket= int(input("Enter number of tickets: "))
            count=Ticket*200+(Ticket*200*0.009)
            print("Your Total is: ",count)
        elif n2==3:
            print("You choose Silver")
            print("How many Tickets you want to buy: ")
            Ticket = int(input("Enter number of tickets: "))
            count=Ticket*250+(Ticket*250*0.009)
            print("Your Total is: ",count)

    elif n==3:
        print("**********************")
        print("Welcome to PVR")
        print("Choose Seats: ")
        print("1)Silver    150Rs")
        print("2)Gold    200Rs")
        print("3)Premium    250Rs")
        n3=int(input("Enter your Choice seats: "))
        if n3==1:
            print("You choose Silver")
            print("How many Tickets you want to buy: ")
            Ticket = int(input("Enter number of tickets: "))
            count=Ticket*150+(Ticket*150*0.009)
            print("Your Total is: ",count)

        elif n3==2:
            print("You choose Gold")
            print("How many Tickets you want to buy: ")
            Ticket= int(input("Enter number of tickets: "))
            count=Ticket*200+(Ticket*250*0.009)
            print("Your Total is: ",count)
        elif n3==3:
            print("You choose Silver")
            print("How many Tickets you want to buy: ")
            Ticket = int(input("Enter number of tickets: "))
            count=Ticket*250+(Ticket*250*0.009)
            print("Your Total is: ",count)
        
    else:
        print("Choose any One")
    print("**********************")
    

    total = total + count
    print("Total Amount(with GST%): ",total)
    print("**********************")
    
    print(f"Thankyou For Visiting----------- {chr(1)}{chr(1)}{chr(1)}")
    print("Do you want to Continue press (y/n)")
    op = (input("Enter Yes or No: "))
    if op == 'n':
        break
    elif op =='y':
        continue
    else:
        print("Enter Right Choice: ");


