# string = input("Enter elements (space-Separated): ")
# lst = string.split()
# print('the list is', lst)

# ----------------------------------------------------------------

# n = int(input("Enter the size of list : "))
# lst = list(map(int, input("Enter the larger elements :").strip().split()))[:n]
# # print('The list is: ',lst)
# for i in lst:
#     print(i,end="")


# ----------------------------------------------------------------


# List = []
# List.append(1)
# List.append(2)
# List.append(4)
#  1 2 4
# for i in range(1, 4):
#     List.append(i)
# print(List)  # 1 2 4 1 2 3

# # Adding Tuples to the List
# List.append((5, 6))
# print("\nList after Addition of a Tuple: ")
# print(List)
# print(" 0 index of 6 index ",List[6][1])

# # Addition of List to a List
# List2 = ['For', 'Geeks']
# List.append(List2)
# print("\nList after Addition of a List: ")
# print(List)



# ----------------------------------------------------------------
# List = [1,2,3,4]
# List.insert(3, 12)
# List.insert(0, 'Geeks')
# print(List)


# ----------------------------------------------------------------

# Extend a List
# List = [1, 2, 3, 4]
# List.extend([12,'nur','imon'])
# print(List)


# ----------------------------------------------------------------
# Reversing a list
# myList = [1.3,2,4,6,'inom',2,'3f',1]
# myList.reverse()
# print(myList)


# ----------------------------------------------------------------
# # Removing elements from List
# List = [1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11, 12]
# List.remove(5)
# List.remove(6)
# print(List)


#  ----------------------------------------------------------------

# Creating a List
# List = [1, 2, 3, 4, 5, 6,7, 8, 9, 10, 11, 12]
# for i in range(1, 5):
#     List.remove(i)
# print("\nList after Removing a range of elements: ")
# print(List)


# ----------------------------------------------------------
# List = [1, 2, 3, 4, 5]

# # Removing element from the
# # Set using the pop() method
# List.pop()
# print("\nList after popping an element: ")
# print(List)
# List.pop(2)
# print("\nList after popping a specific element: ")
# print(List)

# ----------------------------------------------------------


# Python program to demonstrate
# Removal of elements in a List

# # Creating a List
# List = ['G', 'E', 'E', 'K', 'S', 'F',
#         'O', 'R', 'G', 'E', 'E', 'K', 'S']
# print("Initial List: ")
# print(List)

# # Print elements of a range
# # using Slice operation
# Sliced_List = List[3:8]
# print("\nSlicing elements in a range 3-8: ")
# print(Sliced_List)

# # Print elements from a
# # pre-defined point to end
# Sliced_List = List[5:]
# print("\nElements sliced from 5th "
#       "element till the end: ")
# print(Sliced_List)

# # Printing elements from
# # beginning till end
# Sliced_List = List[:]
# print("\nPrinting all elements using slice operation: ")
# print(Sliced_List)


# ----------------------------------------------------------

# Creating a List
List = ['G', 'E', 'E', 'K', 'S', 'F',
        'O', 'R', 'G', 'E', 'E', 'K', 'S']
print("Initial List: ")
print(List)

# Print elements from beginning
# to a pre-defined point using Slice
Sliced_List = List[:-6]
print("\nElements sliced till 6th element from last: ")
print(Sliced_List)

# Print elements of a range
# using negative index List slicing
Sliced_List = List[-6:-1]
print("\nElements sliced from index -6 to -1")
print(Sliced_List)

# Printing elements in reverse
# using Slice operation
Sliced_List = List[::-1]
print("\nPrinting List in reverse: ")
print(Sliced_List)




# ----------------------------------------------------------

# ----------------------------------------------------------


# ----------------------------------------------------------


# ----------------------------------------------------------