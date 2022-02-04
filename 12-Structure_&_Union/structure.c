#include<stdio.h>
#include<string.h>
int main()
{
    //Array : homogenous collection of data
    // int arr[5]; -> 5 blocks of type int
    //structure : heterogeneous collection of data 
    struct Student
    {
        int id;
        char name[20];
        float fees;
    }stu1,stu2,stu3={205,"Ritik",10000};
    //2 variables of data type struct Student //1st approach

    // stu1.id=102;
    // stu1.name="Neha"; //it will give error
    // stu1.name={"Neha"}; //it will give error
    // stu1.name[]={"Neha"}; //it will give error
    // strcpy(stu1.name,"Yashvi");
    // printf("enter the name : ");
    // scanf("%[^\n]s",&stu1.name);// %s is string's format specifier(it will take input until space is not met)
    // and %[^\n]s is also a string's format specifier(it will take the string including space also)
    // printf("enter the fees : ");
    // scanf("%f",&stu1.fees);
    // printf("the id is %d and name is %s and fees is %f \n",stu1.id,stu1.name,stu1.fees);

    // printf("the id is %d and name is %s and fees is %0.2f \n",stu3.id,stu3.name,stu3.fees);
    int id;
    struct Student stu4; //2nd approach
    stu4.id=103;
    printf("enter the name : ");
    scanf("%[^\n]s",&stu4.name);
    printf("enter the fees : ");
    scanf("%f",&stu4.fees);
    printf("the id is %d and name is %s and fees is %0.2f \n",stu4.id,stu4.name,stu4.fees);
   
    return 0;
}
