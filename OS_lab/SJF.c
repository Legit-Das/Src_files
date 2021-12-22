#include<stdio.h>
int main() {
	int  p[20], bt[20], wt[20], tat[20]; //Arrays for processes, burst times, waiting times and turnaround times
	int i, j, n, total = 0, pos, temp; //local int vars for calculation purpose
	float avg_wt, avg_tat; //local float vars for calculation purpose

	printf("enter number of process: ");
	scanf("%d", &n); //taking input the total number of process to be considered

	printf("\nEnter Burst Time: \n");

	for(i = 0; i < n; i++) { //Taking input of the burst times
		printf("p%d : ",i+1);
		scanf("%d",&bt[i]);
		p[i] = i+ 1;
	}

	//sorting of burst times
	for(i = 0; i < n; i++) {
		pos = i;
		for(j = i+1; j < n; j++) {
			if(bt[j] < bt[pos])
				pos = j;
		}
		temp = bt[i];
		bt[i] = bt[pos];
		bt[pos] = temp;

		temp = p[i];
		p[i] = p[pos];
		p[pos] = temp;
	}

	wt[0] = 0;

	for(i = 1; i < n; i++) {
		wt[i] = 0;
		for(j = 0; j < i; j++) {
			wt[i] += bt[j];
		}
			total += wt[i];
	}

	avg_wt = (float)total/n;
	total = 0;

	printf("\nProcess\t Burst time\t Waiting time\t Turnaround time");
	for(i= 0; i < n; i++) {
		tat[i] = bt[i] + wt[i];
		total += tat[i];
		printf("\np%d\t\t %d\t\t %d\t\t%d", p[i], bt[i], wt[i], tat[i]);
	}

	avg_tat = (float)total/n;

	printf("\n\nAverage Waiting Time = %f", avg_wt);
	printf("\nAverage Turnaround Time = %f\n", avg_tat);

	return 0;
}
