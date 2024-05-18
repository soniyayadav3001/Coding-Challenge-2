number = int(input("Enter the number here : "))
fact = 1
for i in range(1 , number+1):
    fact = fact*i
print("The factorial of "+str(number)+" is",fact)
