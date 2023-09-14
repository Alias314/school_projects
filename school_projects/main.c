#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// prev_reading & bill_prev_reading for month of june not july so change it
	int prev_reading = 1303;
	int pres_reading;
	int bill_prev_reading = 13100;
	int bill_pres_reading;
	float current_bill;
	
	printf("What's your present reading? ");
	scanf("%d", &pres_reading);
	
	printf("What's the present reading of the electricity bill? ");
	scanf("%d", &bill_pres_reading);
	
	printf("What's the current bill? ");
	scanf("%f", &current_bill);
	
	int diff_rdg = pres_reading - prev_reading;
	int bill_diff_rdg = bill_pres_reading - bill_prev_reading;
	float amount_contribution = diff_rdg * (current_bill / (float) bill_diff_rdg);
	int rounded_amount = round(amount_contribution / 1000) * 1000;
	
	printf("\nThe actual amount for the contribution for the electricity bill is: \nPHP %.2f", amount_contribution);
	printf("\nThe rounded amount for the contribution for the electricity bill in thousands is: \nPHP %d", rounded_amount);
	
	return 0;
	
}
