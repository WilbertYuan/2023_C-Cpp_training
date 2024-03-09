#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct experiment
{
	char model[20];
	double gpumax;
	double time;
	double stddiv;
}experiment;
int read_data(FILE* filep, experiment project[])
{
	int i = 0;
	do
	{
		int k = fscanf(filep,"%19s %lf %lf %lf",project[i].model, &project[i].gpumax, &project[i].time, &project[i].stddiv);
		i++;
	} while (!feof(filep));
	int k = fscanf(filep, "%19s %lf %lf %lf", project[i].model, &project[i].gpumax, &project[i].time, &project[i].stddiv);
	return i;
}
char* process_data(int data_num, experiment project[], double*d)
{
	double max = -1;
	int maxnum = 0;
	for (int i = 0; i < data_num; i++)
	{ 
		*d = 10.0 / (project[i].gpumax * project[i].time * project[i].time * project[i].stddiv);
		if (*d >= max)
		{
			max = *d;
			maxnum = i;
		}
		d++;
	}
	return project[maxnum].model;
}
void ouput_index(FILE* result, int n, double* start, experiment project[])
{
	for (int i = 0; i < n; i++)
	{
		fprintf(result, "%s:%lf\n", project[i].model,*(start+i));
	}
}
int main()
{
	experiment project[20];
	double comindex[20] = { -10000 },*d;
	FILE* data = fopen("C:\\Users\\17193\\Desktop\\experiment_data.txt", "r");
	FILE* result = fopen("C:\\Users\\17193\\Desktop\\experiment_result.txt", "w");
	d = comindex;
	if (data == NULL || result == NULL)
	{
		printf("error!");
		exit(1);
	}
	int n = read_data( data,project );
	printf("the best model is %s",process_data(n, project, d));
	ouput_index( result,n,d,project );
	fclose(data);
	fclose(result);
	return 0;
}
