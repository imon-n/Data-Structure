x = int(input())
check = x<0
x = abs(x)
newSt = ""

while x != 0:
    val1 = x%10
    newSt += str(val1)
    x = x // 10

if check:
    newSt = "-" + newSt

num = int(newSt)
print(num)
