def sum(*lst):
    sum = 0
    for i in lst:
        sum = sum + i
    return sum

def mul(*lst):
    res = 1
    for i in lst:
        res = res + i
    return res

sub = lambda num1, num2: num1-num2
div = lambda num1, num2: num1/num2