""" Python Script to check whether a given number is perfect  """

# Write your code from here
import time
import tracemalloc

start = time.time()
tracemalloc.start()
decimal = input("Enter the Number :")
a=0
for i in range(1,int(decimal)):
    if int(decimal) % i == 0:
        a = a+i
if int(decimal) == a:
    print("Perfect Number")
else:
    print("Not perfect Number")

print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)

#OUTPUT
#Enter the Number :28
#Perfect Number
#139 Bytes
#Time:  2.157245635986328
