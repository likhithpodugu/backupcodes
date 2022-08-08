""" Python Script to find whether a number is armstrong or not """

# Write your code from here

import time
import tracemalloc

num=int(input("Enter the number: "))
start = time.time()
tracemalloc.start()
templist=list(str(num))
sum=0
n=len(str(num))
i=0
while i<=n-1 :
    value=int(templist[i])**n
    sum=sum+value
    i+=1
if num== sum :
    print("Your number is Amstrong Number")
else:
    print("Your number is Not a Amstrong number")

print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)

#OUTPUT

##Enter the number: 145
##Your number is Not a Amstrong number
##2217 Bytes
##Time:  0.020221710205078125
