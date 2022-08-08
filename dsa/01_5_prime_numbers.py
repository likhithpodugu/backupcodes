""" Python Script to find primes numbers upto a specified limit """

# Write your code from here

import time
import tracemalloc


upto = int(input("Enter the limit: "))
start = time.time()
tracemalloc.start()
for i in range(2, upto + 1):
    if i > 1:
        for j in range(2, i):
            if (i % j == 0):
                break
        else:
            print(i)
print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)


#Output

##Enter the limit: 92
##2
##3
##5
##7
##11
##13
##17
##19
##23
##29
##31
##37
##41
##43
##47
##53
##59
##61
##67
##71
##73
##79
##83
##89
##2205 Bytes
##Time:  0.11834001541137695
