// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "linkedList1.h"
#include "linkedList1.cpp"


int main(int argc, char* argv[])
{
	ios::sync_with_stdio(false);
	freopen( "1.in", "r", stdin );
	
	linkedList L1;//, L2;
	int n;
	cin >> n;
	L1.createLinkedListFront(n);
	cout << "原表表长为：" << endl;
	cout << L1.linkedListLength() << endl;
	cout << "原表元素为：" << endl;
	L1.printLinkedList();
	/*
	L1.~linkedList();
	cout << "现表表长为：" << endl;
	cout << L1.linkedListLength() << endl;
	cout << "现表元素为：" << endl;
	L1.printLinkedList();
	//L2.createLinkedListFront(5);
	//cout << L2.linkedListLength() << endl;
	//L2.printLinkedList();
	22
	30 70 92 91 15 47 84 10 43 34 9 62 60 26 79 96 38 4 92 24 25 5
	
	linkedList L3;
	int n;
	cin >> n;
	L3.createLinkedListRail(n);
	cout << "原表表长为：" << endl;
	cout << L3.linkedListLength() << endl;
	cout << "原表元素为：" << endl;
	L3.printLinkedList();//5，n，0，n+1，n+2
	
	int value = -100;
	int num;
	cin >> num;
	for( int i = 0; i < num; i ++ )
	{
		int pos;
		cin >> pos;
		if( L3.getElementByPosition( pos, value ) )
		{
			cout << "第 " << pos << " 个元素的值为：" << value << endl;

		}
		else
			cout << "不存在位置为 " << pos << " 的元素！" << endl;
	}

	linkedList L4;
	int n;
	cin >> n;
	L4.createLinkedListRail(n);
	cout << "原表表长为：" << endl;
	cout << L4.linkedListLength() << endl;
	cout << "原表元素为：" << endl;
	L4.printLinkedList();//x=100,  i分别为5,n,n+1,0,1,n+2
	int value = 100;
	int num;
	cin >> num;
	for( int i = 0; i < num; i ++ )
	{
		int pos;
		cin >> pos;
		if( L4.insertListByPosition( pos, value ) )
		{
			cout << "value = " << value << " 的值已插在 pos = " << pos << "的位置上！" << endl;
			cout << "现表表长为：" << endl;
			cout << L4.linkedListLength() << endl;
			cout << "现表元素为：" << endl;
			L4.printLinkedList();
		}
	}
	
	linkedList L5;
	int n;
	cin >> n;
	L5.createLinkedListRail(n);
	cout << "原表表长为：" << endl;
	cout << L5.linkedListLength() << endl;
	cout << "原表元素为：" << endl;
	L5.printLinkedList();
	int index = -1;
	//1，17，20，88
	for( int i = 0; i < 4; i ++ )
	{
		int value;
		cin >> value;
		if( L5.getElementByValue( index, value ) )
		{
			cout << "pos = " << index << ", value = " << 1 << endl;
		}
	
		else
		{
			cout << "链表中不存在值为 " << value << " 的值" << endl;  
		}
	}
	
	linkedList L6;
	int n;
	cin >> n;
	L6.createLinkedListRail(n);
	L6.printLinkedList();
	cout << L6.linkedListLength() << endl;
	int value = -1;
	//5,n,1,n+1,0 
	if( L6.removeListNodeByPosition( 5, value ) )
	{
		cout << "pos = " << 5 << ", value = " << value << "已删除！" << endl;
	}
	L6.printLinkedList();
	if( L6.removeListNodeByPosition( n , value ) )
	{
		cout << "pos = " << n << ", value = " << value << "已删除！" << endl;
	}
	else
	{
		cout << "不存在位置等于 " << n << " 的元素！" << endl;
	}
	L6.printLinkedList();
	if( L6.removeListNodeByPosition( 1, value ) )
	{
		cout << "pos = " << 1 << ", value = " << value << "已删除！" << endl;
	}
	L6.printLinkedList();
	if( L6.removeListNodeByPosition( n + 1, value ) )
	{
		cout << "pos = " << n + 1 << ", value = " << value << "已删除！" << endl;
	}
	else
	{
		cout << "不存在位置等于 " << n + 1 << " 的元素！" << endl;
	}
	L6.printLinkedList();
	if( L6.removeListNodeByPosition( 0, value ) )
	{
		cout << "pos = " << 0 << ", value = " << value << "已删除！" << endl;
	}
	else
	{
		cout << "不存在位置等于 " << 0 << " 的元素！" << endl;
	}
	L6.printLinkedList();

	
	linkedList L7;
	int n;
	cin >> n;
	L7.createLinkedListRail(n);
	cout << "原表表长为：" << endl;
	cout << L7.linkedListLength() << endl;
	cout << "原表元素为：" << endl;
	L7.printLinkedList();
	
	//int value = -1;
	//5,n,1,n+1,0 
	for( int i = 0; i < 1; i ++ )
	{
		int value;
		cin >> value;
		if( L7.removeListNodeByPosition( 5, value ) )
		{
			cout << "pos = " << 5 << ", value = " << value << "已删除！" << endl;
			cout << "现表表长为：" << endl;
			cout << L7.linkedListLength() << endl;
			cout << "现表元素为：" << endl;
			L7.printLinkedList();
		}
		if( L7.removeListNodeByPosition( n , value ) )
		{
			cout << "pos = " << n << ", value = " << value << "已删除！" << endl;
		}
		else
		{
			cout << "不存在位置等于 " << n << " 的元素！" << endl;
		}
	}
	
	linkedList L8;
	int n;
	cin >> n;
	L8.createLinkedListRail(n);
	cout << "原表表长为：" << endl;
	cout << L8.linkedListLength() << endl;
	
	cout << "原表元素为：" << endl;
	L8.printLinkedList();
	int value;
	for( int i = 0; i < 4; i ++ )
	{
		cin >> value;
		if( L8.insertListSort(value) )
		{
			cout << "插入元素 " << value << " 后表长为：" << endl;
			cout << L8.linkedListLength() << endl;
			cout << "插入元素 " << value << " 表元素为：" << endl;
			L8.printLinkedList();
		}
		else
			cout << "Error!" << endl;
	}
	
	int n;
	linkedList L9, LA, LB;
	cin >> n;
	L9.createLinkedListRail(n);
	//LA.initiateLinkedList(), LB.initiateLinkedList();
	cout << "原链表表长为：" << endl;
	cout << L9.linkedListLength() << endl;
	cout << "原链表元素为：" << endl;
	L9.printLinkedList();
	L9.oddEvenSort( LA, LB );
	cout << "奇数链表表长为：" << endl;
	cout << LA.linkedListLength() << endl;
	cout << "奇数链表元素为：" << endl;
	LA.printLinkedList();
	cout << "偶数链表表长为：" << endl;
	cout << LB.linkedListLength() << endl;
	cout << "偶数链表元素为：" << endl;
	LB.printLinkedList();
	*/
	return 0;
}
