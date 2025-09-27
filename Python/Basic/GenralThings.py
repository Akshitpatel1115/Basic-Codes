# \n \t \b --> Escape sequence
print("my name is akshit \n my age is 19.")  # \n use for new line
print("1\t2\t3\t")  # \t use for tab
print("akshitp\b patel")  # \b is use for backspace

# Raw string(if we need to print escape sequence)
print(r"to end your line you have to use \n")

# Formatted string 
name = "akshit"
age = 19

print("my name is",name,"and my age is",age) # we can write like this but it is not efficiant way
print(f"my name is {name} and my age is {age}") # this is formatted string 