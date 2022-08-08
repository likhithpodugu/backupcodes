""" Python Script to find minimum among three numbers """

# Write your code from here
a = int(input("Enter the 1st number"))
b = int(input("Enter the 2nd number"))
c = int(input("Enter the 3rd number"))
if a>b and a>c:
    print(a,"is greater")
elif b>a and b>c:
    print(b,"is greater")
elif c>a and c>b:
    print(c,"is greater")

# Enter the 1st number10
# Enter the 2nd number20
# Enter the 3rd number30
# 30 is greater