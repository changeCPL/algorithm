//#include<cstdio>
//int input[15];
//int main() {
//	int min_index=0,max_index=0;
//	for (int i = 0; i < 10; i++) {
//		scanf("%d", &input[i]);
//		if (input[i] > input[max_index]){ 
//			max_index = i;
//		}
//		if (input[i] < input[min_index]) {
//			min_index = i;
//		}
//	}
//	int temp = input[0];
//	input[0] = input[min_index];
//	input[min_index] = temp;
//	if (max_index == 0)
//		max_index = min_index;
//	temp = input[9];
//	input[9] = input[max_index];
//	input[max_index] = temp;
//	for (int i = 0; i < 10; i++) {
//		printf("%d", input[i]);
//		if (i < 9)
//			printf(" ");
//	}
//	printf("\n");
//	return 0;
//}