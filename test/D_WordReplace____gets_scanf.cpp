//#include<iostream>
//#include<cstring>
//#define MAX 105
//char input[MAX],A[MAX],B[MAX],temp[MAX];
//int main() {
//	//!!scanf %s�ӵ�һ���ǿհ��ַ���ʼ(���տ�ʼ�Ŀհ��ַ�)�������հ��ַ������Ҳ����ո�ĩβ�հ��ַ�,��һ�ζ�Ҫע������
//  //C11֮��Ž�gets���ã�������gets_s()��һ��Ҫע��OJ��C++��׼
//	//!!gets_s����\n�����(��һ��,\n������),֮��getchar()��scanf %c��%s��������\n���൱�����յ���
//	while (gets_s(input, MAX) != NULL) {  //ÿ�����������������룬
//		//scanf("%s%s", A, B);//�������������B֮��س���scanf����\nֹͣ��������һ��gets_s������\n��ʼ
//		gets_s(A, MAX);  
//		gets_s(B, MAX);
//		//printf("input:%s,A:%s,B:%s\n", input,A, B);
//		int lenA = strlen(A);
//		int leninput = strlen(input);
//		for (int i = 0;input[i]!='\0'; i++){
//			if (input[i] == A[0]) {
//				temp[0] = A[0];
//				int j;
//				for (j = 1; j < lenA; j++) {
//					i++; //������ȡ��һ���ַ��ж�
//					if (input[i] == '\0') {i--; break; }//��ǰ�����ַ�������
//					if (input[i] == A[j]) temp[j] = A[j];
//					else if(input[i]==A[0]){  //�����ж�
//						temp[j] = '\0';
//						printf("%s", temp);
//						j = 0;
//					}
//					else {
//						temp[j] = '\0';
//						printf("%s%c", temp,input[i]);  //��ǰ��ƥ����ַ�Ҫ���
//						break;
//					}
//				}
//				if (j == lenA)printf("%s", B);
//			}
//			else{
//				printf("%c", input[i]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}