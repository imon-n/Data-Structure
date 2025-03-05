n = 1
total = 1
arr = []
i = 1
while total <= n:
    arr.append(total)
    i = i +1
    total *= i
    

print(arr)

# n = 5
# def factorialNumbers(n):
#     total = 1
#     arr = []
#     i = 1
#     while i< n:
#         total *= i
#         i = i +1
#         arr.append(total)
#         print(total)
#     return arr




# total = 1
# arr = []
# def factorialNumbers(n):
#     global total
#     if n == 0:
#         return 1
#     factorialNumbers(n-1)
#     total *= n
#     arr.append(total)

# if __name__ == "__main__":
#     n = 3
#     factorialNumbers(n)

#     print(arr)