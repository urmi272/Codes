import random
class Game:
    bot = random.randint(0, 2)
    user = int(input("\nEnter 2 for water, 1 for snake, 0 for Gun: "))

    def win(self, bot, user):
        if (self.bot == user):
           print("It's a draw")
        if (bot == 0 and user == 2):
           print(f"{Name}: Water \nBot: Gun")
           print(f"{Name} wins")
        if (bot == 0 and user == 1):
           print(f"{Name}: Waurmiter \nBot: Gun")
           print(f"{Name}wins")
        if (bot == 1 and user == 2):
           print(f"{Name}: Water \nBot: Gun")
           print("bot wins")
        if (bot == 1 and user == 0):
           print(f"{Name}: Water \nBot: Gun")
           print(f"{Name} wins")
        if (bot == 2 and user == 1):
           print(f"{Name}: Water \nBot: Gun")
           print(f"{Name} wins")
        if (bot == 2 and user == 0):
           print(f"{Name}: Water \nBot: Gun")
           print("bot wins")

Name = input("Enter your name:")
obj = Game()
