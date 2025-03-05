arr = [1,8]
reverse = []

for i in range(len(arr)-1,-1,-1):
    reverse.append(arr[i])

arr = reverse

print(arr)
