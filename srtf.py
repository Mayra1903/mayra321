at=[]
bt=[]
rt=[]
smallest=0
remain=0
sum_wait=0
sum_turnaround=0;
countOfProcesses=input("enter number of processes")
for index1 in range(int (countOfProcesses)):# taking arrival time from user
  arive=input("enter ArrivalTime")
  at.append(arive)

for i in range(int (countOfProcesses)):#taking burst time from user
  storeBusrt=input("enter burstTime")
  bt.append(storeBusrt)
  rt.append(storeBusrt)
    
print("Process:|Turnaround Time| Waiting Time");
rt[int(countOfProcesses)-1 ]=999;
time=0
endtime=0
for time in range(int (countOfProcesses)+1):
  smallest=int(countOfProcesses) -1
  for i in range(int (countOfProcesses)):
    if int(at[i]) <= time and int(rt[i]) < int(rt[smallest]) and int(rt[i]) > 0:
      smallest=int(i)
  rt[smallest]=int(rt[smallest])-1
  if int(rt[smallest])==0:
    remain=remain+1
    endTime=time+1
    #smallest=smallest+1
    print(smallest+1,int(endTime)-int(at[smallest]),int(endTime)-int(bt[smallest])-int(at[smallest]))
    sum_wait=sum_wait+int(endTime)-int(bt[smallest])-innt(at[smallest])
    sum_turnaround=sum_turnaround+int(endTime)-int(at[smallest])
averagewt=sum_wait/int(countOfProcesses)
averageturn=sum_turnaround/int(countOfProcesses)      
    
print("Average waiting time ",averagewt)
print("Average Turnaround time ",averageturn)



