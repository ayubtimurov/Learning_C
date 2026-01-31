#include <stdio.h>


// int main(){
//     int c, i, j;

//     while ((c = getchar()) != EOF){
//         if (c != ' '){
//             putchar(c);
//         }
//         else if (c = ' '){
//             putchar(c);
//             c = getchar();
//             while (c == ' '){
//                 c = getchar();
//                 if (c != ' '){   
//                     putchar(c);
//                 }
//                 else{
//                     ;
//                 }
//             }
//         }
//     }
// }



int main(){
    int c, saw_blank;

    saw_blank = 0;
    while((c = getchar()) != EOF){
        if (c == ' '){
            if (saw_blank == 0){
                putchar(c);
                saw_blank = 1;
            }
        }
        else{
            putchar(c);
            if (saw_blank == 1){
                saw_blank = 0;
            }
        }
    }
    
}