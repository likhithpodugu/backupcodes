""" Python Script to find GCD and LCM of 2 numbers """

# Write your code from here

#This is the Algorithm will run in small time,And it will take less space of memory
import time
import tracemalloc

x = int(input("Enter the number: "))
y = int(input("Enter the number: "))
def gcd(x, y):
    if x==0:
        return y
    else:
        x, y = x, y%x
        return gcd(y, x)
start = time.time()
tracemalloc.start()
print("1st Algorithm")
ans = gcd(x, y)
lcm = x*y//ans
print("GCD: ", ans)
print("LCM: ", lcm)
print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)

#This is the Algorithm will run in large time,And it will take more space of memory

def gcd(x,y):
    if x > y:
        smaller = y
    else:
        smaller = x
    for i in range(1, smaller+1):
        if((x % i == 0) and (y % i == 0)):
            ans = i 
    return ans

start = time.time()
tracemalloc.start()
print("2nd Algorithm")
ans = gcd(x, y)
lcm = x*y//ans
print("GCD: ", ans)
print("LCM: ", lcm)
print(tracemalloc.get_traced_memory()[0],"Bytes")
end = time.time()
print("Time: ",end-start)


#OUTPUT
##Enter the number: 1000000
##Enter the number: 2000000
##1st Algorithm
##GCD:  1000000
##LCM:  2000000
##1911 Bytes
##Time:  0.02244114875793457
##2nd Algorithm
##GCD:  1000000
##LCM:  2000000
##2107 Bytes
##Time:  0.6555368900299072 

