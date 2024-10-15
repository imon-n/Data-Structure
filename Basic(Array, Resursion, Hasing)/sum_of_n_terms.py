total = 0
def sumOfSeries(n):
    global total
    if n==0:
        return
    total += n**3
    sumOfSeries(n-1)

if __name__ == "__main__":
    sumOfSeries(7)
    print(total)
