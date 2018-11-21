
def Key(proNo,count,t,burst={},e1=[]):
  i=0
  if proNo==99:
    for index in range (int(count)):
      if(t>=burst.get(e1[index])[0]):
        proNo=e1[index]
        break
  if proNo!=99:
    for index2 in range (int(count)):
      if(t>=burst.get(e1[index2])[0]):
        if(burst.get(e1[index2])[1]<burst.get(proNo)[1]):
          proNo=e1[index2]
  return proNo
count=5
rt=[]
t=0
proNo=[1,2,3,4,5]
burst={1:[1,4],2:[2,2],3:[4,7],4:[5,11],5:[6,6]}
while count!=0: 
  edum=99
  edum=Key(edum,count,t,burst,proNo)
  rt.append(edum)
  t=t+1
  if edum!=99:
    burst.get(edum)[1]=burst.get(edum)[1]-1
    if burst.get(edum)[1]==0:
      count=count-1
      t=t-burst.get(edum)[0]
      print (edum,'Turnaround Time',t)
      proNo.remove(edum)
			


