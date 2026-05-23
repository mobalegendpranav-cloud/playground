a = int(input("Enter length of 1st side: ")) 
b = int(input("Enter length of 2nd side: "))
c = int(input("Enter length of 3rd side: "))


is_triangle = a+b>c and b+c>a and a+c>b and a>0 and b>0 and c>0

ans = ["No", "Yes"] 
print(ans[is_triangle]) 