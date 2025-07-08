#include <stdio.h>
#include<string.h>
struct employee {
    int sales1[12];
    int sales2[12];
    int emp1_no, emp2_no;
    char emp1_name[50], emp2_name[50];
};

int sum_sales(int sales[], int n) {
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += sales[i];
    }
    return total;
}
int avg(int total)
{
    return total/12;
}
int max(int total1,int total2,char name1[],char name2[],int id1,int id2)
{
    if(total1>total2)
    {
       printf("Employee 1 has higher sales: %d\n",total1);  
       printf("name: %s\n",name1);
       printf("id: %d\n",id1);
    }
    else if(total2>total1)
    {
       printf("Employee 2 has higher sales: %d\n",total2);  
       printf("name: %s\n",name2);
       printf("id: %d\n",id2);
    }
}
void promote(int sales1[],int sales2[])
{
    int emp1_count=0,emp2_count=0;
    for(int i=0;i<12;i++)
    {
    if(sales1[i]<sales2[i])
    {
    emp2_count++; 
}
else
{
    emp1_count++;
}
}
if(emp1_count<emp2_count)
{
    printf("Employee 2 is promoted to higher position");
}
else
{
    printf("Employee 1 is promoted to higher position");
}
}
int main() 
{
    e.emp2_no=102;
    strcpy(e.emp1_name,"kaviya");
    strcpy(e.emp2_name,"kavin");
    int total1 = sum_sales(e.sales1, 12);
    int total2 = sum_sales(e.sales2, 12);
    int avg1=avg(total1);
    int avg2=avg(total2);
    printf("Total Sales of Employee 1: %d\n", total1);
    printf("Average sales of employee 1: %d\n",avg1);
    printf("Total Sales of Employee 2: %d\n", total2);
    printf("Average sales of employee 2: %d\n",avg2);
    max(total1,total2,e.emp1_name,e.emp2_name,e.emp1_no,e.emp2_no);
    promote(e.sales1,e.sales2);
    return 0;
}