// WAP to get empid, name, post and salary and display the record of employee who has the maximum salary

#include <stdio.h>

struct employee
 {
    char name[20];
    char post[20];
    int empid;
    int salary;
  };

int main (int argc, char *argv[])
{
  struct employee emps[100];
  int maxSalary = 0;
  int records, max;

  printf("Enter the number of records: ");
  scanf("%d", &records);
  
  for (int i = 0; i < records; i++) {
    printf("Enter name: ");
    scanf("%s", emps[i].name);
    printf("Enter empid: ");
    scanf("%d", &emps[i].empid);
    printf("Enter post: ");
    scanf("%s", emps[i].post);
    printf("Enter salary: ");
    scanf("%d", &emps[i].salary);

    if (emps[i].salary > maxSalary) {
      max = i;
    }
  }

  printf("\n");
  printf("The employee with maximum salary is:\n");
  printf("Name: %s\n", emps[max].name);
  printf("EMPID: %d\n", emps[max].empid);
  printf("Post: %s\n", emps[max].post);
  printf("Salary: %d\n", emps[max].salary);

  return 0;
}
