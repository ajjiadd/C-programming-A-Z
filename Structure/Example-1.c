#include<stdio.h>
struct student
{
  int id;
  char name[10];
  float cgpa;
};

int main(){
  struct student s;

  printf("Enter your name: ");
  scanf(" %s", s.name);
  printf("Enter your ID: ");
  scanf(" %d",&s.id);
  printf("Enter your CGPA: ");
  scanf(" %f ",&s.cgpa);

    printf("Output mentioned bellow:\n");
  
    printf("Name: %s\nID: %d\nCGPA: %f", s.name, s.id, s.cgpa);

  return 0;
}