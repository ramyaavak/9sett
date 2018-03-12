a=int(raw_input())
pro=1
while(a!=0):
    digit=a%10
    pro=pro*digit
    a=a/10
print pro    
