c=int(raw_input())
count=0
for i in range(2,c):
     if(c%i==0):
        count=count+1
if(count==0):
  print "no"
else:
  print "yes"
