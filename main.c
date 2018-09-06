-+/*This program was created for the purpose of asking the user for the amount of decimal numbers he wants Pi to have
 *
 * Author: Angel Daniel Olvera Perales
 * Date: September 6
 * email:angelolvera00@gmail.com
 */


#include <stdio.h>
//I had to include another library because it had the power functions
#include <math.h>

int main() {
    //Variables are declared
    double pi = 0;
    int n;
//The program asks the user for the amount of numbers he wants Pi to have
    printf("How many decimals do you want?");
    scanf("%d",&n);

    printf("Pi is: ");

    //The formula for pi is written
    for (int i=0; i<n; i++)
    {
// The formula to get decimal numbers is the following, where I replaced the K in the formula with the i variable I declared
        pi+= pow(16,-i) * (4.0 / (8.0*i+1) - 2.0/(8*i+4) - 1/(8.0*i+5) - 1.0/(8*i+6));

    }
    //The program gives the user Pi with n decimal numbers
    printf("%.*lf", n, pi);
    return 0;
}