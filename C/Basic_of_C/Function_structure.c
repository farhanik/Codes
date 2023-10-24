#include<stdio.h>
#include<string.h>

struct Person{
    char name[30];
    int age;
    int salary;
};

struct Person person[4];

void Display(struct Person p)
{
    
    printf("Name = %s\n",p.name);
    printf("Age= %d\n",p.age);
    printf("Salary= %d\n",p.salary);
}

int main()
{

for(int i=0 ; i<4 ; i++)
{
    printf("Enter person %d Detail:\n",i+1);
    printf("Enter name = ");
    fgets(person[i].name,sizeof(person[i].name),stdin);
    printf("Enter Age =");
    scanf("%d",&person[i].age);
    printf("Enter Salary=");
    scanf("%d",&person[i].salary);
    printf("\n");
}
printf("\n");
for(int j=0 ; j<4 ; j++)
 {
    printf("Person %d :\n",j+1);
    Display(person[j]);
    printf("\n");
 }
 

}