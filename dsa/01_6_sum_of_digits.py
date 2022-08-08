""" Python Script to find sum of digits of a number """

# Write your code from here
import time
import tracemalloc

a=input("Enter the numbers: ")
start = time.time()
tracemalloc.start()
print("Num of digits is",len(a))
b=list(a)
c=0
for i in b:
    c=c+int(i)
print("Sum of digits is",c)
print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)

#OUPUT

##Enter the numbers: 12345
##Num of digits is 5
##Sum of digits is 15
##2267 Bytes
##Time:  0.026443004608154297
##>>> 
