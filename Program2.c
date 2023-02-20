/*
 * Program2.c
 *
 *  Created on: Feb 19, 2023
 *      Author: zakariyaahmed
 */
#include <stdio.h>
int main() {
	int n, TD, FG, Safety, Pt2, Pt1;
	printf("Input a number: ");
	scanf("%d", & n);
	if (n >= 1 && n<= 100) {
		int count = 0;
				for (TD = 0; TD<= n; TD++) {
					for (FG = 0; FG <= n; FG++) {
						for (Safety = 0; Safety <= n; Safety++) {
							for (Pt2 = 0; Pt2 <= n; Pt2++) {
								for (Pt1 = 0; Pt1 <= n; Pt1++) {
									if ((6 * TD) + (3 * FG) + (2 * Safety) + (8 * Pt2) + (7 * Pt1) == n) {
										printf("\n%d TD | %d FG | %d Safety | %d Safety | %d TD + ConversionPt2 | %d TD + FGPT1", TD, FG, Safety, Pt2, Pt1);
									}
								}
							}
						}
					}
				}
				printf("\n\n%d Combination |n", count);
	}
	return 0;
}

