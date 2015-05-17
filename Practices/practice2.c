
#include "practice2.h"

//typedef struct node
//{
//	int value;	/* データ */
//	struct node *p_prev, *p_next;	/* 前方と後方のノードアドレス */
//}NODE;
//
//NODE *create_node(void);
//
//bool valid_node(NODE *p_node);
//void connect(NODE *p_node1, NODE *p_node2);
//bool insert_prev(NODE *p_node, NODE *p_inserting_node);
//bool insert_next(NODE *p_node, NODE *p_inserting_node);
//bool remove_node(NODE *p_node);
//

void test_01_04();

void practice2()
{
	printf("Hello World!\n");
	
	printf("【問１ - １】\n");
	/*
	問１ - １
		NODEを１つ生成する関数を作成せよ。
		★NODE型のポインタを宣言する。
		★この関数内部で動的にメモリ確保する。
		★正しくデータを初期化する。
		(value は初期値0、p_prev と p_next は 初期値 NULL)
			例）NODE *create_node(void);
	*/

	NODE *myNode1 = create_node();
	NODE *myNode2 = create_node();
	NODE *myNode3 = create_node();
	NODE *myNode4 = create_node();
	myNode1->value = 1;
	myNode2->value = 2;
	myNode3->value = 3;
	myNode4->value = 4;

	printf("\tmyNode1->value = %d\n", myNode1->value);
	printf("\tmyNode2->value = %d\n", myNode2->value);
	printf("\tmyNode3->value = %d\n", myNode3->value);
	printf("\tmyNode4->value = %d\n", myNode4->value);

	printf("【問１ - ２】\n");
	/*
	問１ - ２
		2つのNODEをつながった状態にする関数(connect)を作りなさい。
		★引数のNODEのp_prevとp_nextを正しく設定する。
		例）void connect(NODE *p_node1, NODE *p_node2);
	*/
	// 1 - 2
	connect(myNode1, myNode2);
	printf("\tmyNode1->value = %d\n", myNode1->value);
	printf("\tmyNode2->value = %d\n", myNode2->value);
	printf("\tmyNode1->p_next->value = %d\n", myNode1->p_next->value);
	printf("\tmyNode2->p_prev->value = %d\n", myNode2->p_prev->value);

	printf("【問１ - ３】\n");
	/*
	問１ - ３
		問１ - ２の関数を利用し、 NODEの前にNODEを挿入する関数
		(insert_prev)とNODEの後ろにNODEを挿入する関数(insert_next) を作成せよ。
		★connect関数を何回か用いる（つなげる順番に気をつける）
		例）void insert_prev(NODE *p_node, NODE *p_inserting_node);
		void insert_next(NODE *p_node, NODE *p_inserting_node);
	*/
	// 1-3-2
	insert_next(myNode1, myNode3);

	printf("\tmyNode1->p_next->value = %d\n", myNode1->p_next->value);
	printf("\tmyNode1->p_next->p_next->value = %d\n", myNode1->p_next->p_next->value);

	// 1-4-3-2
	insert_prev(myNode3, myNode4);

	printf("\tmyNode1->p_next->value = %d\n", myNode1->p_next->value);
	printf("\tmyNode1->p_next->p_next->value = %d\n", myNode1->p_next->p_next->value);
	printf("\tmyNode1->p_next->p_next->p_next->value = %d\n", myNode1->p_next->p_next->p_next->value);
	
	printf("【問１ - ４】\n");
	/*
	問１ - ４.
		問１ - ２の関数を利用し、指定したNODEを削除する関数(remove_node) を作成せよ。
		★connect関数を何回か用いる
		★削除するノードは開放する
		例）void remove_node(NODE *p_node);
	*/

	// 1-3-2
	remove_node(myNode4);
	printf("\tmyNode1->p_next->value = %d\n", myNode1->p_next->value);
	printf("\tmyNode1->p_next->p_next->value = %d\n", myNode1->p_next->p_next->value);

}

	/*
	問２、
		問１で作った関数群を利用し、各問に答えよ。
		★あらかじめリストの最初(p_head)と最後(p_tail)にダミーノードを作成しておくと楽。
		（ダミーなのでもちろんリストの一覧には含まれない）

		問２ - １　以下の形式でメニュー操作を表示するプログラムを作成せよ。
		******* MENU *******
		1）表示
		2）挿入
		3）削除
		9）終了
		>
		例）「>」で（1 - 3）を入力するとそのモードに移行する。
		モードの処理を終了したら、再度メニューに戻る
	*/

	/*

	問２ - ２　
		表示関数（全件）を作成せよ。
	*/

	/*

	問２ - ３　
		ノード作成＆挿入する関数（終端の手前）を作成せよ。
		もちろん挿入時に動的メモリ確保を行う。(つまり，create_node関数を用いる)
	*/

	/*

	問２ - ４
		メニューの終了選択時、全ノードを開放する処理（関数が望ましい）を追加せよ。
		★開放するタイミングに注意する
		*/

	/*

	問２ - ５
		表示関数（一件指定）と挿入関数（先頭・場所指定）を作成せよ。
		*/

	/*

	問２ - ６
		削除関数（先頭・終端・場所指定）を作成せよ。
		*/

	/*

	問２ - ７
		メニューに「変更」を追加し、ノード内のデータを変更する関数を作成せよ。
		*/

	/*

	問２ - ８
		メニューに「検索」を追加し、指定した値が何番目にあるか表示する。
		複数個ある場合はすべて表示すること。
		*/

	
	//問３
	//	チャレンジ課題（できる人は挑戦してみて）
	

	//問３ - １
	//	メニューに「保存（セーブ）」を追加し、バイナリ形式で保存する関数を作成せよ。
	//	・ファイル指定する（ファイル名を標準入力から入力する）
	//	★ノードのデータだけをファイルに書き込んでいけばよい。

	//問３ - ２
	//	メニューに「読込（ロード）」を追加し、バイナリ形式で読み込む関数を作成せよ。
	//	・ファイル指定はする（ファイル名を標準入力から入力する）
	//	・読み込み時、以前あったノードは全て開放する
	
	//問３ - ３
	//	メニューに「ソート」を追加し、昇順でソートを行う関数を作成せよ。
	//	ただし、データのみの移動ではなく、ノードのつながりを変更すること。
	//	★ノードを入れ替える関数があると楽（入れ替えは意外と難しい）
	//	★ソートアルゴリズムはバブルソートが楽



NODE *create_node(void)
{
	printf("\tcreate_node()\n");

	NODE *pNode = (NODE *)malloc(sizeof(struct node));
	pNode->value = 0;
	pNode->p_prev = NULL;
	pNode->p_next = NULL;

	return pNode;
}

bool valid_node(NODE *p_node)
{
	if (p_node != NULL)
	{
		return true;
	}

	return false;
}

void connect(NODE *p_node1, NODE *p_node2)
{
	printf("\tconnect(p_node1=%d, p_node2=%d)\n", p_node1->value, p_node2->value);

	p_node1->p_next = p_node2;
	p_node2->p_prev = p_node1;
}

bool insert_prev(NODE *p_node, NODE *p_inserting_node)
{
	if (!valid_node(p_node) || !valid_node(p_inserting_node))
	{
		return false;
	}
	printf("\tinsert_prev(p_node=%d, p_inserting_node=%d)\n", p_node->value, p_inserting_node->value);

	connect(p_node->p_prev, p_inserting_node);
	connect(p_inserting_node, p_node);
	
	return true;
}

bool insert_next(NODE *p_node, NODE *p_inserting_node)
{
	if (!valid_node(p_node) || !valid_node(p_inserting_node))
	{
		return false;
	}
	printf("\tinsert_next(p_node=%d, p_inserting_node=%d)\n", p_node->value, p_inserting_node->value);

	connect(p_inserting_node, p_node->p_next);
	connect(p_node, p_inserting_node);

	return true;
}

bool remove_node(NODE *p_node)
{
	if (!valid_node(p_node))
	{
		return false;
	}
	printf("\tremove_node(p_node=%d)\n", p_node->value);

	if (!valid_node(p_node->p_next))
	{

	}
	else if(!valid_node(p_node->p_prev))
	{
		
	}

	connect(p_node->p_prev, p_node->p_next);

	free(p_node);
	
	return true;
}