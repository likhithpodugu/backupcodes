""" Python Script to find twin primes upto a specified limit """

# Write your code from here


import time
import tracemalloc

def prime(n):
   for i in range(2, n):
      if n % i == 0:
         return False
   return True

def generate_twins(start, end):
   for i in range(start, end):
      j = i + 2
      if(prime(i) and prime(j)):
         print("{},{}".format(i, j))
start = time.time()
tracemalloc.start()
print(generate_twins(2, 50))
print(tracemalloc.get_traced_memory()[0], "Bytes")
end = time.time()
print("Time: ", end-start)


#OUTPUT;

##3,5
##5,7
##11,13
##17,19
##29,31
##41,43
##23633 Bytes
##Time:  0.039929866790771484
