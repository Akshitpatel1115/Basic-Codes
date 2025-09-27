''' Write a Python program to find the mean, median, and mode of a numerical column in a DataFrame. '''

import pandas as pd

# Sample DataFrame
data = {
    'Numbers': [1, 2, 3, 4, 5, 5, 6, 7, 8, 9, 9]
}
df = pd.DataFrame(data)

# Calculate mean
mean_value = df['Numbers'].mean()

# Calculate median
median_value = df['Numbers'].median()

# Calculate mode
mode_value = df['Numbers'].mode()[0]

print(f"Mean: {mean_value}")
print(f"Median: {median_value}")
print(f"Mode: {mode_value}")
