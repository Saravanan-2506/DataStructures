#include <stdio.h>
#include <string.h>

struct employee {
    int sales1[12];
    int sales2[12];
    int emp1_no, emp2_no;
    char emp1_name[50], emp2_name[50];
} e;

int sum_sales(int sales[], int n) {
    int total = 0;
    int i;
    for (i = 0; i < n; i++) {
        total += sales[i];
    }
    return total;
}

int avg(int total) {
    return total / 12;
}

void max(int total1, int total2, char name1[], char name2[], int id1, int id2) {
    if (total1 > total2) {
        printf("Employee 1 has higher sales: %d\n", total1);
        printf("Name: %s\n", name1);
        printf("ID: %d\n", id1);
    } else if (total2 > total1) {
        printf("Employee 2 has higher sales: %d\n", total2);
        printf("Name: %s\n", name2);
        printf("ID: %d\n", id2);
    } else {
        printf("Both employees have equal sales: %d\n", total1);
    }
}

int promote(int sales1[], int sales2[]) {
    int i;
    for (i = 0; i < 12; i++) {
        if (sales1[i] <= sales2[i]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int i;
    e.emp1_no = 101;
    e.emp2_no = 102;
    strcpy(e.emp1_name, "Kaviya");
    strcpy(e.emp2_name, "Kavin");

    for (i = 0; i < 12; i++) {
        e.sales1[i] = 1000 + i * 10;
        e.sales2[i] = 950 + i * 5;
    }

    int total1 = sum_sales(e.sales1, 12);
    int total2 = sum_sales(e.sales2, 12);
    int avg1 = avg(total1);
    int avg2 = avg(total2);

    printf("Total Sales of Employee 1: %d\n", total1);
    printf("Average Sales of Employee 1: %d\n", avg1);
    printf("Total Sales of Employee 2: %d\n", total2);
    printf("Average Sales of Employee 2: %d\n", avg2);

    max(total1, total2, e.emp1_name, e.emp2_name, e.emp1_no, e.emp2_no);

    int promoted = promote(e.sales1, e.sales2);
    if (promoted) {
        printf("Employee 1 is promoted to higher position\n");
    } else {
        printf("Employee 1 is not eligible for promotion\n");
    }

    return 0;
}
