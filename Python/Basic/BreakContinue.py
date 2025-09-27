# BREAK --> For Stop loop 

for i in range(0,100):
    print(i)
    if i == 20:
        break

print("\n")
# CONTINUE --> For Skip some ittration

a = 0
while a < 10:
    a = a + 1
    if a == 5:
        continue
    print(a)

# MIMP
# ------> In break, print statement use before break statement
# ------> In continue, print statement use after continue statement but addition use before continue