#!/usr/bin/env python3

import sys

def factorize(n):
    factors = []
    for i in range(2, n):
        if n % i == 0:
            factors.append((i, n // i))
    return factors

def main():
    if len(sys.argv) != 2:
        print("Usage: ./factors.py <file>")
        return
    
    filename = sys.argv[1]
    
    with open(filename, 'r') as file:
        lines = file.readlines()
    
    for line in lines:
        n = int(line.strip())
        factor_pairs = factorize(n)
        for p, q in factor_pairs:
            print(f"{n}={p}*{q}")

if __name__ == "__main__":
    main()
