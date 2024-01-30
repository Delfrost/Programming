n=int(input("Enter the number of elements :"))
count=int(0)
start=1
list1=[]
for i in range(n):
    num=int(input("Enter the element :"))
    list1.append(num)
print(list1)
counter=0
num=list1[0]
for i in list1:
    freq=list1.count(i)
    if freq>counter:
        counter=freq
        num=i
    elif freq==counter:
        if num>i:
            num=i

print("This element occurs the most,Deleting it:",num) 
while num in list1:
    list1.remove(num)
print(list1)     
