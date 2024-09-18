n = int(input())

arr1 = list(map(int,input().split()))[:n]
arr1.reverse()

for i in arr1[:len(arr1)-1]: 
    print(i,end=" ")
print(arr1[len(arr1)-1])