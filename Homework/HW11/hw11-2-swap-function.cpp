/*
    ผู้ใช้กรอกชื่อและอายุเข้าไปในระบบจำนวน 2 ครั้ง โดยให้คุณทำการสลับอายุของคน 2 คนนี้ผ่านฟังก์ชันที่คุณเขียนขึ้นมา เช่น นาย ก อายุ 31 ปี และ นาย ข อายุ 20 ปี หลังจากเรียกฟังก์ชันการสลับค่าแล้ว นาย ก จะอายุ 20 ปี และนาย ข จะอายุ 31 ปี

    Test case:
        Input A
        Name : 
            Yorn
        Age : 
            31
        Input B
        Name : 
            Thane
        Age : 
            20
    Output:
        ** RESULT **
        Name: Yorn (31)
        Name: Thane (20)

        ** SWAP AGE **
        Name: Yorn (20)
        Name: Thane (31)

*/

#include <stdio.h>
#include <string.h>

struct Person {
    char name[50] ;
    int age ;
} ;

void swapAges(struct Person *person1, struct Person *person2) ;


int main() {
    struct Person personA, personB ;

    printf( "Input A\n" ) ;
    printf( "Name: \n" ) ;
    scanf( "%s", personA.name ) ;
    printf( "Age: \n" ) ;
    scanf( "%d", &personA.age ) ;

    printf( "Input B\n" ) ;
    printf( "Name: \n" ) ;
    scanf( "%s", personB.name ) ;
    printf("Age: \n");
    scanf( "%d", &personB.age ) ;

    printf( "\n** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", personA.name, personA.age ) ;
    printf( "Name: %s (%d)\n", personB.name, personB.age ) ;

    swapAges( &personA, &personB ) ;

    printf( "\n** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n", personA.name, personA.age ) ;
    printf( "Name: %s (%d)\n", personB.name, personB.age ) ;

    return 0 ;
}//end function

void swapAges(struct Person *person1, struct Person *person2) {
    int sum = person1 -> age ;
    person1 -> age = person2 -> age ;
    person2 -> age = sum ;
}//end function

