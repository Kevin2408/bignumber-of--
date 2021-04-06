#儲存超大的數字(階乘)
n=5
#int(input("please enter a integer : "))
position=0 #位數
j=0 
carry=0 #進位的十位數
num=[] #存數字的矩陣
for i in range(10):#先預設一個矩陣，把每一位訂做0
	num.append(0) #先預設10個元素的矩陣
num[0]=1
for k in range(2,n+1):
	print("now is " , k) #現在要乘於k
#要乘到n
	for j in range(position+1) : #每個位數都乘一遍k
		num[j]=num[j]* k
		num[j]=num[j]+ carry
		print("old is " , num[j])
		carry=num[j]//10
		if (carry!=0) & (j==position)  : #如果在最高位乘的時候>10
			position+=1 #之後算的位數多1位
			num[position]=carry 
			carry=0 
		
		num[j]=num[j]%10
		print("j is " , j , "position is " , position)
		# print(carry)
		print("new is " , num[j] )
		print("carry is  " , carry, "\n")


		

print("%d ! = " %n)
#for i in range(len(num)) :
print(num)
print("\n")
