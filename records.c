// WAP to get a list of students and arrange them in ascending order on the basis of height using structure

#include <stdio.h>

struct student {
  int sid;
  int height;
  char name[];
};

int main() {
  struct student std[100], std2[100];
  int records;

  printf("Enter number of records: ");
  scanf("%d", &records);

  for (int i = 1; i <= records; i++) {
    printf("Enter sid, name and height of student: ");
    scanf("%d %s %d", &std[i].sid, &std[i].name, &std[i].height);
  }


  printf("The list of students is: ");
  for (int i = 1; i <= records; i++) {
    printf("%d %s %d", std[i].sid, std[i].name, std[i].height);
  }

  return 0;
}
