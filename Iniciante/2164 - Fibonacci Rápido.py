import math

def fibonacci(n):
    return (((1 + math.sqrt(5)) / 2)**n - ((1 - math.sqrt(5)) / 2)**n) / math.sqrt(5)

n = int(input())

X = fibonacci(n)
print(f'{X:.1f}')
