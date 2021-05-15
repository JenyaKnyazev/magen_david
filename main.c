#include <stdio.h>
#include <stdlib.h>
void print_stars(int n){
    if(n>0){
        putchar('*');
        print_stars(n-1);
    }
}
void print_space(int n){
    if(n>0){
        putchar(' ');
        print_space(n-1);
    }
}
void print_triangle_up(int n,int max,int min){
    if(n-min>2)
        print_triangle_up(n-1,max,min+1);
    print_space( (max*2)/3-n);
    print_stars(n-min);
    putchar('\n');
}
void print_triangle_down(int n,int max,int min){
    print_space((max*2)/3-n);
    print_stars(n-min);
    putchar('\n');
    if(n-min>2)
        print_triangle_down(n-1,max,min+1);
}
void print_body_up(int n,int max,int min){
    print_space(max-n);
    print_stars(n-min);
    putchar('\n');
    if(n-min>max*2/3+2)
        print_body_up(n-1,max,min+1);
}
void print_body_down(int n,int max,int min){
    if(n-min>max*2/3+2)
        print_body_down(n-1,max,min+1);
    print_space(max-n);
    print_stars(n-min);
    putchar('\n');
}
void print_magen_david(int n){
    print_triangle_up(n,n*3,0);
    print_body_up(n*3,n*3,0);
    print_body_down(n*3,n*3,0);
    print_triangle_down(n,n*3,0);

}
int main()
{
    int num;
    while(1){
        printf("Enter number of triangle length\n");
        scanf("%d",&num);
        print_magen_david(num);
    }
    //scanf("%d",&num);
    return 0;
}
