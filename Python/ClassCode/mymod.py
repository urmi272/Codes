def add(x, y):
    return (x+y)
def subtract(x, y):
    return (x-y)
def mul(x, y):
    return (x*y)
def div(x, y):
    return (x/y)
        
def fact(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n*fact(n-1)