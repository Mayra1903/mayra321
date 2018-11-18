
def WaitT(count,burst,wait,quant):
  rburst=[]
  for  i in range(int (count)):
    rburst.append(0)
  nm=0
  for  i1 in range(int (count)):
    rburst[i1]=int(burst[i1])
  time = 0
  while nm==0:
    nm= 1  
    for i2 in range (int(count)):
        
      if (int(rburst[i2]) > 0):
            
        if (int(rburst[i2]) > int(quant)):
          time += int(quant)
          rburst[i2]=int(rburst[i2])-int(quant)
        else:
          time = time + rburst[i2]
          wait1= time - int(burst[i2])
          wait.append(wait1)
          rburst[i2] = 0
    
  return;
    

  
 
def Turnaround( count,burst,  wait,turn):
  i=0
  for i in range(int(count)):
    turn1= int(burst[i]) + int(wait[i])
    turn.append(turn1)
  return;


 

def avg(count,burst,quant):
 
  wait=[]
  for i in range (int(count)):
   wa=0
   wait.append(wa)
  turn=[] 
  Swt = 0 
  Sturn = 0
  i=0
  
  Turnaround(count, burst, wait, turn)
  print( "Waitingtime,Turn")
  for i in range(int (count)):
    Swt = Swt + wait[i]
    Sturn = Sturn + turn[i]
    print(  wait[i] ,"," ,turn[i],"\n")
  avg=int(Swt)/int(count)
  tur=int(Sturn)/int(count)
  print( "Average waiting time = ",avg)
  print("\nAverage turn around time = ",tur)
  return;
burst=[]
f=0
quant=input("enter quantum")
count=input("enter num of processes")
for ind in range (int(count)):
  f=input("enter burst time")
  burst.append(f) 
avg(count,burst, quant)
