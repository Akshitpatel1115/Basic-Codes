''' Write a Python program to find the largest number in a NumPy array '''

import numpy as np

# Create a NumPy array
arr = np.array([1, 8, 9, 7, 2, 9, 4])

# Find the largest number
largest_number = np.max(arr)

print(f"The largest number in the array is {largest_number}")
