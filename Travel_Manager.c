#include <stdio.h>
struct Driver
{
    char name[34];
    char dlno[45];
    char route[47];
    int kms;
};
int main()
{
    struct Driver d1, d2, d3, d4, d5;
    printf("\n");
    printf("** Enter the Details of the Driver No. 01 **\n");
    printf("Enter the Name of first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlno of first driver\n");
    scanf("%s", &d1.dlno);

    printf("Enter the route of first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of first driver\n");
    scanf("%d", &d1.kms);

    printf("\n");
    printf("** Enter the Details of the Driver No. 02 **\n");
    printf("Enter the Name of Second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlno of Second driver\n");
    scanf("%s", &d2.dlno);

    printf("Enter the route of Second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of Second driver\n");
    scanf("%d", &d2.kms);

    printf("\n");
    printf("** Enter the Details of the Driver No. 03 **\n");
    printf("Enter the Name of Third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlno of Third driver\n");
    scanf("%s", &d3.dlno);

    printf("Enter the route of Third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the kms of Third driver\n");
    scanf("%d", &d3.kms);

    printf("\n");
    printf("** Enter the Details of the Driver No. 04 **\n");
    printf("Enter the Name of Third driver\n");
    scanf("%s", &d4.name);

    printf("Enter the dlno of Third driver\n");
    scanf("%s", &d4.dlno);

    printf("Enter the route of Third driver\n");
    scanf("%s", &d4.route);

    printf("Enter the kms of Third driver\n");
    scanf("%d", &d4.kms);

    printf("\n");
    printf("** Enter the Details of the Driver No. 05 **\n");
    printf("Enter the Name of Third driver\n");
    scanf("%s", &d5.name);

    printf("Enter the dlno of Third driver\n");
    scanf("%s", &d5.dlno);

    printf("Enter the route of Third driver\n");
    scanf("%s", &d5.route);

    printf("Enter the kms of Third driver\n");
    scanf("%d", &d5.kms);

    printf("\n");
    printf("*** Printing Information of these Drivers ***\n");

    printf("\n");
    printf("For Driver No 1:\nName is %s\n", d1.name);
    printf("DL Number is %s\n", d1.dlno);
    printf("Route is %s\n", d1.route);
    printf("Kms is %d\n", d1.kms);

    printf("\n");
    printf("For Driver No 2:\nName is %s\n", d2.name);
    printf("DL Number is %s\n", d2.dlno);
    printf("Route is %s\n", d2.route);
    printf("Kms is %d\n", d2.kms);

    printf("\n");
    printf("For Driver No 3:\nName is %s\n", d3.name);
    printf("DL Number is %s\n", d3.dlno);
    printf("Route is %s\n", d3.route);
    printf("Kms is %d\n", d3.kms);

    printf("\n");
    printf("For Driver No 4:\nName is %s\n", d4.name);
    printf("DL Number is %s\n", d4.dlno);
    printf("Route is %s\n", d4.route);
    printf("Kms is %d\n", d4.kms);

    printf("\n");
    printf("For Driver No 5:\nName is %s\n", d5.name);
    printf("DL Number is %s\n", d5.dlno);
    printf("Route is %s\n", d5.route);
    printf("Kms is %d\n", d5.kms);
}