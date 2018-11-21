def calculate(wt=[],final=[],burst=[],arrival=[],turn=[]):
  start=int(arrival[0])#storing 1st arrival as start time of 1st process
  for index2 in range(int (countOfProcesses)):#calculating wait time and turn around time
    wt[index2]=start-int(arrival[index2])
    start=start+int(burst[index2])
    final[index2]=start
    turn[index2]=final[index2]-int(arrival[index2])

  sumTurn=0
  sumWt=0
  for index4 in range(int (countOfProcesses)):#finding average of waiting and turn around time
    sumTurn=sumTurn+int(turn[index4])
    sumWt=sumWt+int(wt[index4])

  averagewt=sumWt/int(countOfProcesses)
  averageturn=sumTurn/int(countOfProcesses)
  print("avrg turn",averageturn)
  print("avrg wt",averagewt)

countOfProcesses=input("enter number of processes")
burst=[]#array for burst time
turn=[]#array for turn arround time 
arrival=[]#array for arrival time
wt=[]#array for waiting time
final=[]# array for storing finishing time of processes

for index1 in range(int (countOfProcesses)):# taking arrival time from user
  arive=input("enter ArrivalTime")
  arrival.append(arive)

for index in range(int (countOfProcesses)):#taking burst time from user
  storeBusrt=input("enter burstTime")
  burst.append(storeBusrt)

for index3 in range(int (countOfProcesses)):#initializing arrays with 0 to prevent the garbage storing
  turn.append(0)
  wt.append(0)
  final.append(0)



calculate(wt,final,burst,arrival,turn)


    
    

     
       

