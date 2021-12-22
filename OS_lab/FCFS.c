#include<stdio.h>
//function to find waiting time for all processes
void findWT(int processes[], int n, int bt[], int wt[]) {
    //waiting time for the first process is 0
    wt[0] = 0;
    int i;
    //calculating waiting time
    for(i=1; i < n; i++) {
        wt[i] = bt[i-1] + wt[i-1];
    }
}
//function to calculate turn around time
void findTAT(int processes[], int n, int bt[], int wt[], int tat[]) {
    //calculating turn around time by adding bt[i] + wt[i]
    int i;
    for(i = 0; i < n; i++) {
        tat[i] = bt[i] + wt[i];
    }
}

//function to calculate average time
void findAT(int processes[], int n, int bt[]) {
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    int i;

    //function to find waiting time of all processes
    findWT(processes, n, bt, wt);

    //function to find turn around time fo rall processes
    findTAT(processes, n, bt, wt, tat);

    //Display processes along with all details
    printf("Processes   Burst time  Waiting time    Turn around time\n");

    //Calculate total time and total turn around time
    for(i = 0; i < n; i++) {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("    %d",i+1);
        printf("          %d",bt[i]);
        printf("          %d",wt[i]);
        printf("              %d\n",tat[i]);
    }

    int s = (float)total_wt / (float)n;
    int t = (float)total_tat / (float)n;
    printf("Average waiting time = %d",s);
    printf("\n");
    printf("Average turn around time = %d",t);
}


int main() {
    //process ids
    int processes[] = {1,2,3}; // three processes, p1,p2,p3
    int n = sizeof(processes)/sizeof(processes[0]); //n = 3

    //Burst time of all processes
    int burst_time[] = {10, 5, 8};
    /*
    p1    10
    p2    5
    p3    8
    Waiting time for p1 = 0
                                p2 = 10
                                p3 = 15
    avg waiting time = (0 + 10 + 15 )/3 = 8.33
    turn around time for p1 = 10
                                     p2 = 15
                                     p3 = 23
    avg turn around time = (10 + 15 + 23)/3 = 16
    */
    findAT(processes, n,  burst_time);
    return 0;
}
