#pragma once
//�ϸ��������A,����ұգ���ʼ����[0,n-1]���ɹ�����x�±꣬����-1
int binary_search(int A[], int left, int right, int x); 
//��������A�����ص�һ�����ڵ���x��λ�ã�����ұգ���ʼ����[0,n]
int lower_bound(int A[], int left, int right, int x);
//��������A�����ص�һ������x��λ�ã�����ұգ���ʼ����[0,n]
int upper_bound(int A[], int left, int right, int x);
//Ѱ���������е�һ������ĳ������Ԫ��λ�õ�ģ��
//[left,right],��ֵ���븲�ǽ�����п���ȡֵ
int solve(int left, int right);