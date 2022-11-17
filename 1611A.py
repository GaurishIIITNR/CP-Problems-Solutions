a=int(input())
i=1

while(i<a+1):
     m=1
     b=input()
     if(int(b)%2==0):
          print("0")
          m=2
     elif(int(b[0])%2==0):
          print("1")
          m=3
     j=1
     k=len(b)
     while(j<k):
          if(int(b[j])%2==0 and m==1):
              print("2")
              m=4
              break
          j=j+1
     if(m==1):
       print("-1")
     i=i+1