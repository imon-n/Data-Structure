
n = int(input())

arr1 = list(map(int,input().split()))[:n]
arr2 = list(map(int,input().split()))[:n]
arr = arr2 + arr1

for i in arr[:len(arr)-1]: 
    print(i,end=" ")
print(arr[len(arr)-1])


# Input
# 2
# 1 2
# 3 4
# Output
# 3 4 1 2 
