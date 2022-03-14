// WAP to take empid, name, and salary of 100 employees and search a particular empid. Also find its position in record.

#include <stdio.h>

struct employees
  {
    int empid;
    int salary;
    char name[];
  };

int main (int argc, char *argv[])
{
  struct employees emps[100];
  int search, record;

  for (int i = 1; i <= 100; i++) {
    printf("Enter name, empid and salary of employee: ");
    scanf("%s %d %d", &emps[i].name, &emps[i].empid, &emps[i].salary);
  }

  printf("Enter empid to search: ");
  scanf("%d", &search);

  for (int i = 1; i <= 100; i++) {
    if (emps[i].empid == search) {
      record = i;
      break;
    }
  }

  printf("The employee name is %s with empid %d and salary %d at record number %d", emps[record].name, emps[record].empid, emps[record].salary, record);

  return 0;
}
