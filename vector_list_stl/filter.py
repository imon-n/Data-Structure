sequence = ['g', 'e', 'e', 'j', 'k', 's', 'p', 'r']

def fun(variable):
    letters = ['a', 'e', 'i', 'o', 'u']
    if (variable in letters):
        return True
    else:
        return False
    
filtered = filter(fun,sequence)
