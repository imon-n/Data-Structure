def recursive(N):
    if N < 0:
        return
    recursive(N - 1)
    print(N, end=" ")

if __name__ == "__main__":
    N = 10 
    recursive(N)
