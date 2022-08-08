""" Python Script to read a linear list of items and store it in an array.
   - Copy the contents from one array to another array
   - Copy the contents from one array to another array in reverse order
   - Delete the duplicate elements from an array. """

# Write your code from here

import time
import tracemalloc

start = time.time()
tracemalloc.start()
list1 = [1, 2, 3, 4, 5, 4, 3, 2, 1]
list2 = list1.copy()
print("Copied list: ", list2)
list2.reverse()
list3 = list2.copy()
list4 = list(set(list1))
print("Original_array: ", list1)
print("Reversed Array: ", list2)
print("Removed Duplicates from Original List: ", list4)
print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)

#Output

##Copied list:  [1, 2, 3, 4, 5, 4, 3, 2, 1]
##Original_array:  [1, 2, 3, 4, 5, 4, 3, 2, 1]
##Reversed Array:  [1, 2, 3, 4, 5, 4, 3, 2, 1]
##Removed Duplicates from Original List:  [1, 2, 3, 4, 5]
##24715 Bytes
##Time:  0.049994468688964844
