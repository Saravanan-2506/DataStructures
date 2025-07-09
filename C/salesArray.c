//1-D arrays
#include<stdio.h>
int total_sales(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("Total sales done by the employee is %d\n",sum);
}

int sales_6(int arr[],int n){
    printf("Sales done by employee in 6 month is %d\n", arr[5]);
}

int max_sales(int arr[],int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if (max<arr[i]){
            max = arr[i];
        }
    }
    printf("Maximum sales done by the employee is %d\n",max);
}

int min_month(int arr[],int n){
    int min = arr[0];
    int index = 0;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            index = i;
        }
    }
    printf("Sales with minimum month is %d\n", index+1);
}

int avg_sales(int arr[],int n){
    int avg =0;
    for(int i=0;i<n;i++){
        avg += arr[i];
    }
    printf("The average sales done by the employee is %d\n",avg);
}

int check_promotion(int a[], int b[], int n) {
    int a_promotion = 1, b_promotion = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i]) a_promotion = 0;
        if (b[i] <= a[i]) b_promotion = 0;
    }

    if (a_promotion){
        printf("Employee 1 gets promotion.\n");
    }
    else if (b_promotion){
        printf("Employee 2 gets promotion.\n");
    }
    else{
        printf("No one gets promotion.\n");
    }
}

void input_sales(int arr[], int n, int emp_no) {
    printf("Enter sales for Employee %d (%d months):\n", emp_no, n);
    for (int i = 0; i < n; i++) {
        printf("Month %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}


int main() {
    int emp1[12], emp2[12];
    int choice;
    int n = 12;

    input_sales(emp1, n, 1);
    input_sales(emp2, n, 2);

    do {
        printf("\n----- MENU -----\n");
        printf("1. Total Sales\n");
        printf("2. 6th Month Sales\n");
        printf("3. Maximum Sales\n");
        printf("4. Minimum Sales Month\n");
        printf("5. Average Sales\n");
        printf("6. Check Promotion\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("\nEmployee 1: ");
                total_sales(emp1, n);
                printf("Employee 2: ");
                total_sales(emp2, n);
                break;
            case 2:
                printf("\nEmployee 1: ");
                sales_6(emp1, n);
                printf("Employee 2: ");
                sales_6(emp2, n);
                break;
            case 3:
                printf("\nEmployee 1: ");
                max_sales(emp1, n);
                printf("Employee 2: ");
                max_sales(emp2, n);
                break;
            case 4:
                printf("\nEmployee 1: ");
                min_month(emp1, n);
                printf("Employee 2: ");
                min_month(emp2, n);
                break;
            case 5:
                printf("\nEmployee 1: ");
                avg_sales(emp1, n);
                printf("Employee 2: ");
                avg_sales(emp2, n);
                break;
            case 6:
                printf("\nPromotion Result:\n");
                check_promotion(emp1, emp2, n);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 7);

    return 0;
}