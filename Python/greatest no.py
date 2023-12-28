a=int(input("Enter first number:"))
b=int(input("Enter second number:"))
c=int(input("Enter third number:"))
max1=a
if(b>max1):
    max1=b
    print("b is greatest")
if(c>max1):
    max1=c
    print("c is greatest")
else:
    print("a is greatest")
