#include<stdio.h>
 
// function to get data from user
void getProcessData(int *burst_time, int *priority) {
     printf("Enter Burst Time : ");
     scanf("%d", burst_time);
     printf("Enter Priority : ");
     scanf("%d", priority);
}
 
// Fcfs (non premptive)
void FCFS(int wt[], int bt[], int n) {
     int service_time[n];
     service_time[0] = 0; // Service time of first process is 0
 
     // Computing service time
     for (int i = 1; i < n; i++) {
          service_time[i] = service_time[i - 1] + bt[i - 1];
     }
 
     for (int i = 0; i < n; i++) {
          // Computing waiting time
          wt[i] = service_time[i] - bt[i];
 
          // If wating time is negative,chane it to zero
          if (wt[i] < 0) 
               wt[i] = 0;
     }
}
 
// Sjf (pre invertee)
void SJF_preinvertee(int wt[], int bt[], int n) {
     int service_time[n];
     int pos;
     service_time[0] = 0;
     int minimum;
     
     // Computing service time
     for (int i = 1; i < n; i++) {
          minimum = bt[i];
          pos = i;
          for (int j = i+1; j < n; j++) {
               if (minimum > bt[j]) {
                    minimum = bt[j];
                    pos = j;
               }
          }
          service_time[i] = service_time[i - 1] + bt[pos - 1];
          bt[pos] = bt[i];
          bt[i] = minimum;
     }
 
     for (int i = 0; i < n; i++) {
          // Computing waiting time
          wt[i] = service_time[i] - bt[i];
 
          // If wating time is negative, change it to zero
          if (wt[i] < 0) 
               wt[i] = 0;
     }
}
 
// Sjf (non pre emptive)
void SJF_NonPreEmptive(int wt[], int bt[], int n) {
     int k = 1;
     int service_time[n];
     int pos;
     int flag = 0;
     service_time[0] = 0;
     int minimum;
     
     // Computing service time
     while (k != n) {
          minimum = 9999;
          for (int i = 0; i < n; i++) {
               // Skip process if it is already done
               if (service_time[i] == -1) 
                    continue;
               
               // Removing the process from active state once it is finished
               if (bt[i] == 0) {
                    flag++;
                    service_time[i] = -1;
                    continue;
               }
 
               // Get the smallest burst time process
               if (minimum > bt[i]) {
                    minimum = bt[i];
                    pos = i;
               }
          }
          
          // Wait time of current process
          wt[pos] = k++;
          
          bt[pos]--;
     }
}
 
// Priorty Scheduling (premptive)
void priorityScheduling_preemptive(int wt[], int bt[], int prio[], int n) {
     int service_time[n];
     int pos;
     int minimum;
     service_time[0] = 0;
     
// Computing service time for each process
 for (int i = 1; i < n; i++) {
      minimum = prio[i];
      pos = i;
      for (int j = i + 1; j < n; j++) {
          if (minimum > prio[j]) {
              minimum = prio[j];
              pos = j;
          }
      }
      service_time[i] = service_time[i - 1] + bt[pos - 1];
      bt[pos] = bt[i];
      bt[i] = minimum;
 }

 for (int i = 0; i < n; i++) {
      // Computing waiting time
      wt[i] = service_time[i] - bt[i];

      // If wating time is negative, change it to zero
      if (wt[i] < 0) 
           wt[i] = 0;
 }
}


// Declare variables
int selection, arrivalTime[], burstTime[];

// Ask user to select which process
printf("Please select a scheduling process:\n");
printf("\t1) FCFS (non premptive)\n");
printf("\t2) SJF (premptive)\n");
printf("\t3) SJF (non premptive)\n");
printf("\t4) Priority Scheduling (premptive)\n");
printf("\t5) Priority Scheduling (non premptive)\n");
scanf("%d", &selection);

// Run selected process
switch (selection){
    case 1:
        FCFS(arrivalTime, burstTime);
        break;
    case 2:
        SJF_Premptive(arrivalTime, burstTime);
        break;
    case 3:
        SJF_NonPremptive(arrivalTime, burstTime);
        break;
    case 4:
        PriorityScheduling_Premptive(arrivalTime, burstTime);
        break;
    case 5:
        PriorityScheduling_NonPremptive(arrivalTime, burstTime);
        break; 
    default:
        printf("Invalid Selection"); 
        break;
}
return 0;
