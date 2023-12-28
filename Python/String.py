str1=input("Enter String:")
str2=""
for i in str1:
    str2=i+str2
if str1==str2:
    print("It is palindrome")
else:
    print("It is not a palindrome")  
print(str2)