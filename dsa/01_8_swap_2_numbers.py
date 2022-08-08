""" Python Script to swap two numbers """

# Write your code from here
import time
import tracemalloc

x = int(input('Enter the number: '))
y = int(input("Enter the number: "))
start = time.time()
tracemalloc.start()
print("Before Swaping: ")
print(x)
print(y)
x, y =y, x
print("After swaping: ")
print(x)
print(y)

print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)

#Output:

##Enter the number: 2
##Enter the number: 3
##Before Swaping: 
##2
##3
##After swaping: 
##3
##2
##1059 Bytes
##Time:  0.03206610679626465
