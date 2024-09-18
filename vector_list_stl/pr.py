

n = int(input())
myList = list(map(int, input().split()))[:n]

cnt = 0

mySet = set(myList) 

for num in myList:
    if num + 1 in mySet:
        cnt += 1

print(cnt)
