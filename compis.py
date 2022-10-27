file = open("codigo1.c", mode="r")

print(file.read())

for(word in file):
    print(word + "\n")