import sys


# Function to factorize a number n into two smaller numbers
def factorize(n):
    factors = []
    for i in range(2, n + 1):
        while n % i == 0:
            factors.append(i)
            n = n // i
    return factors


# Check if the command-line argument is provided
if len(sys.argv) != 2:
    print("Usage: factors <file>")
    sys.exit(1)

input_file = sys.argv[1]

try:
    with open(input_file, 'r') as file:
        for line in file:
            n = int(line.strip())
            if n <= 1:
                continue  # Skip numbers less than or equal to 1
            factors = factorize(n)
            if len(factors) >= 2:
                p, q = factors[0], factors[1]
                print(f"{n} = {p} * {q}")

except FileNotFoundError:
    print(f"File '{input_file}' not found.")
except ValueError:
    print("Invalid input in the file.")
except Exception as e:
    print(f"An error occurred: {e}")