#include <stdio.h>
void displayEmployeesBelowThreshold(float threshold, int n, int ids[], char names[][50], float salaries[]) 
{  
printf("Employees with salary less than %.2f:\n", threshold);
for (int i = 0; i < n; ++i)
{
if (salaries[i] < threshold)
{
printf("%d %s %.2f\n", ids[i], names[i], salaries[i]);
}
}
}
int main()
{
int employeeIds[] = {1234, 1345, 69, 1234};
char employeeNames[][50] = {"Iyanger", "Kajal", "Ram", "Ridhima"};
float employeeSalaries[] = {67.67, 87.87, 69.0, 45.67};
int n = sizeof(employeeIds) / sizeof(employeeIds[0]);
float thresholdSalary;
printf("Enter the salary threshold: ");
scanf("%f", &thresholdSalary);
displayEmployeesBelowThreshold(thresholdSalary, n, employeeIds, employeeNames, employeeSalaries);
return 0;
}
