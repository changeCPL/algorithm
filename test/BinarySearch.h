#pragma once
//严格递增序列A,左闭右闭，初始传入[0,n-1]，成功返回x下标，否则-1
int binary_search(int A[], int left, int right, int x); 
//递增序列A，返回第一个大于等于x的位置，左闭右闭，初始传入[0,n]
int lower_bound(int A[], int left, int right, int x);
//递增序列A，返回第一个大于x的位置，左闭右闭，初始传入[0,n]
int upper_bound(int A[], int left, int right, int x);
//寻找有序序列第一个满足某条件的元素位置的模板
//[left,right],初值必须覆盖解的所有可能取值
int solve(int left, int right);