# def sum_of_divisors(n):
#     total = 0
#     for i in range(1,n+1):
#         if n%i == 0:
#             total += i
    
#     return total

# def sum_of_N(N):
#     total_sum = 0
#     for i in range(1,N+1):
#         total_sum += sum_of_divisors(i)
#     return total_sum


N = 5
total_sum = 0
for i in range(1, N + 1):
    total_sum += (N // i) * i
print(total_sum)
