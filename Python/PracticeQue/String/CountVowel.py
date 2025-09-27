def vowel_counter(x):
    vowel = 0
    con = 0
    for i in x:
        if i in "aeiouAEIOU":
            vowel += 1
        elif i == " ":
            continue
        else:
            con += 1
    return f"Total vowels are : {vowel} AND Total consonats are : {con}."\

a = "abcdefghijklmnopqrstuvwxyz"
b = "my name is patel akshit"

print(vowel_counter(a))
print(vowel_counter(b))
