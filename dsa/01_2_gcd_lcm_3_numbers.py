""" Python Script to find GCD and LCM of 3 numbers """

# Write your code from here
""" Python Script to find GCD and LCM of 2 numbers """

# Write your code from here

#This is the Algorithm will run in small time,And it will take less space of memory
import time
import tracemalloc

x = int(input("Enter the number: "))
y = int(input("Enter the number: "))
z = int(input("Enter the number: "))
def gcd(x, y):
    if x==0:
        return y
    else:
        x, y = x, y%x
        return gcd(y, x)
start = time.time()
tracemalloc.start()
print("1st Algorithm")
ans1 = gcd(x, y)
ans2 = gcd(ans1, z)
lcm1 = x*y//ans1
lcm2 = z*lcm1//ans2
print("GCD: ", ans2)
print("LCM: ", lcm2)
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
ans1 = gcd(x, y)
ans2 = gcd(ans1, z)
lcm1 = x*y//ans1
lcm2 = z*lcm1//ans2
print("GCD: ", ans2)
print("LCM: ", lcm2)
print(tracemalloc.get_traced_memory()[0],"Bytes")
end = time.time()
print("Time: ", end-start)




#OUTPUT:

##Enter the number: 100000
##Enter the number: 100002
##Enter the number: 100004
##1st Algorithm
##GCD:  2
##LCM:  250015000200000
##2429 Bytes
##Time:  0.024592161178588867
##2nd Algorithm
##GCD:  2
##LCM:  250015000200000
##2597 Bytes
##Time:  0.11831402778625488
