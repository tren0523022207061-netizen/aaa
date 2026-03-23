//クラス番号　ATー11Cー505　
//出席番号　18
//氏名　露口　蓮
#include<iostream>
#include<Windows.h>
using namespace std;
void output(int);
void output2(int);
void output3(int);
void output4(int);
void output5(int);
void output6(int);
void output7(int);
void output8(int);
int main()
{
	int input, select = 0, check = 0;
	while (true)
	{                                                                                   //どれを出力するかの確認
		cout << "種類を選択してください。\n" << "1～6:問題　7～8:オリジナル 9:終了\n";  //         ↓
		cout << "※それ以外の数字、文字を入力するとエラーになります\n";                 //         ↓
		cin >> select;                                                                  //         ↓
		switch (select)
		{
		case 1:                           //問１
		{                                 // ↓
			cout << "何段つくりますか？"; // ↓
			cin >> input;                 // ↓
			output(input);                // ↓
			break;                        // ↓
		}
		case 2:                           //問２
		{                                 // ↓
			cout << "何段つくりますか？"; // ↓
			cin >> input;                 // ↓
			output2(input);               // ↓
			break;                        // ↓
		}
		case 3:                           //問３
		{                                 // ↓
			cout << "何段つくりますか？"; // ↓
			cin >> input;                 // ↓
			output3(input);               // ↓
			break;                        // ↓
		}
		case 4:                           //問４
		{                                 // ↓
			cout << "何段つくりますか？"; // ↓
			cin >> input;                 // ↓
			output4(input);               // ↓
			break;                        // ↓
		}
		case 5:                           //問５
		{                                 // ↓
			cout << "何段つくりますか？"; // ↓
			cin >> input;		          // ↓
			output5(input);               // ↓
			break;                        // ↓
		}
		case 6:                           //問６
		{                                 // ↓
			cout << "何段つくりますか？"; // ↓
			cin >> input;                 // ↓
			output6(input);               // ↓
			break;                        // ↓
		}
		case 7:
		{                                 //オリジナル
			cout << "何段つくりますか？"; //    ↓
			cin >> input;                 //    ↓
			output7(input);               //    ↓
			break;                        //    ↓
		}
		case 8:
		{                                 //オリジナル２
			cout << "何段つくりますか？"; //    ↓
			cin >> input;                 //    ↓
			output8(input);               //    ↓
			break;                        //    ↓
		}
		case 9:
		{
			cout << "終了しますか？\n" << "1:はい 2:いいえ\n";
			cout << "※それ以外の数字、文字を入力すると強制終了してしまいます\n";
			cin >> check;
			switch (check)                                //終了するかどうかの確認の処理
			{                                            //            ↓
			case 1:                                      //            ↓
			{                                            //            ↓
				int timer = 4;                           //            ↓
				cout << "5秒後に強制終了します\n";       //            ↓
				for (int i = timer;i >= 0;i--)            //           ↓
				{                                         //           ↓
					Sleep(1000);                          //           ↓
					cout << i << "秒後に強制終了します\n";//      　　 ↓
				}                                         //           ↓
				return 0;                                //            ↓
			}                                            //            ↓
			case 2:                                      //            ↓
			{                                            //            ↓
				return main();                           //            ↓
				break;                                   //            ↓
			}                                            //            ↓
			default:
			{                                             //5秒後に強制終了（終了処理のエラー）
				int timer = 4;                            //      ↓
				cout << "エラーメッセージ\n";             //      ↓
				cout << "5秒後に強制終了します\n";        //      ↓
				for (int i = timer;i >= 0;i--)            //      ↓
				{                                         //      ↓
					Sleep(1000);                          //      ↓
					cout << i << "秒後に強制終了します\n";//      ↓
				}                                         //      ↓
				return 0;                                 //      ↓
			}                                             //      ↓
			}                                             //      ↓
			return 0;                                     //      ↓
		}
		default:
		{                                             //5秒後に強制終了(種類選択の時のエラー）
			int timer = 4;                            //      ↓
			cout << "エラーメッセージ\n";             //      ↓
			cout << "5秒後に強制終了します\n";       //       ↓
			for (int i = timer;i >= 0;i--)            //      ↓
			{                                         //      ↓
				Sleep(1000);                          //      ↓
				cout << i << "秒後に強制終了します\n";//      ↓
			}                                         //      ↓
			return 0;                                 //      ↓
		}                                             //      ↓

		}
	}
	return 0;
}
void output(int data)           //　　問１
{                                //　　↓
	int i, j;                    //　　↓
	for (i = data;i > 0;i--)     //　　↓
	{                            //　　↓
		for (j = 0;j < i;j++)    //　　↓
		{                        //　　↓
			cout << "■";        //　　↓
		}                        //　　↓
		cout << "\n";            //　　↓
	}                            //　　↓
}
void output2(int data)          //    問２
{                              //      ↓
	int i, j;                  //      ↓
	for (i = 0;i < data;i++)   //      ↓
	{                          //      ↓
		for (j = 0;j <= i;j++) //      ↓
		{                      //      ↓
			cout << "■";      //      ↓
		}                      //      ↓
		cout << "\n";          //      ↓
	}
}
void output3(int data)         //     問３
{                             //       ↓
	int i, j;                 //       ↓
	for (i = 2;i < data;i++)  //       ↓
	{                         //       ↓
		for (j = 1;j < i;j++) //       ↓
		{                     //       ↓
			cout << "■";     //       ↓
		}                     //       ↓
		cout << "\n";         //       ↓
	}                         //       ↓
	for (i = data;i > 1;i--)  //       ↓
	{                         //       ↓
							  //       ↓
		for (j = 1;j < i;j++) //       ↓
		{                     //       ↓
			cout << "■";     //       ↓
		}                     //       ↓
		cout << "\n";         //       ↓
	}
}
void output4(int data)                 //問４
{                                      // ↓
	int i, j, k;                       // ↓
	for (i = 1;i <= data;i++)          // ↓
	{                                  // ↓                                      
		for (j = 1;j <= data - i;j++)  // ↓
		{                              // ↓
			cout << "　";              // ↓
		}                              // ↓						
		for (k = 1;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		cout << "\n";                  // ↓
	}                                  // ↓
}
void output5(int data)                 //問５
{                                      // ↓
	int i, j, k;                       // ↓
	for (i = 1;i <= data;i++)          // ↓
	{                                  // ↓
		for (j = 1;j <= data - i;j++)  // ↓
		{                              // ↓
			cout << "　";              // ↓
		}                              // ↓
		for (k = 3;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		for (k = 2;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		cout << "\n";                  // ↓
	}                                  // ↓
}                                      // ↓
void output6(int data)
{                                      //問６
	int i, j, k;                       // ↓
	for (i = 1;i <= data;i++)          // ↓
	{                                  // ↓
		for (j = 1;j <= data - i;j++)  // ↓
		{                              // ↓
			cout << "　";              // ↓
		}                              // ↓
		for (k = 3;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		for (k = 2;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		cout << "\n";                  // ↓
	}                                  // ↓
	for (i = data;i > 0;i--)           // ↓
	{                                  // ↓
		for (j = 0;j <= data - i;j++)  // ↓
		{                              // ↓
			cout << "　";              // ↓
		}                              // ↓
		for (k = 4;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		for (k = 3;k <= i;k++)         // ↓
		{                              // ↓
			cout << "■";              // ↓
		}                              // ↓
		cout << "\n";                  // ↓
	}                                  // ↓
}                                      // ↓
void output7(int data)
{                                      //オリジナル
	int i, j, k;                       //    ↓
	for (i = data;i >= 1;i--)          //    ↓
	{                                  //    ↓                                      
		for (j = 1;j <= data - i;j++)  //    ↓
		{                              //    ↓
			cout << "　";              //    ↓
		}                              //    ↓    						
		for (k = 1;k <= i;k++)         //    ↓
		{                              //    ↓
			cout << "■";              //    ↓
		}                              //    ↓   
		cout << "\n";                  //    ↓
	}                                  //    ↓
}
void output8(int data)
{                                      //オリジナル２
	int i, j, k;                       // 　 ↓
	for (i = 1;i <= data;i++)          //    ↓
	{                                  //    ↓
		for (j = 1;j <= data - i;j++)  //    ↓
		{                              //    ↓
			cout << "　";              //    ↓
		}                              //    ↓
		for (k = 2;k <= i;k++)         //    ↓
		{                              //    ↓
			cout << "　";              //    ↓
		}                              //    ↓
		for (k = 2;k <= i;k++)         //    ↓
		{                              //    ↓
			cout << "■";              //    ↓
		}                              //    ↓
		cout << "\n";                  //    ↓
	}                                  //    ↓
	for (i = data + 1;i > 0;i--)       //    ↓
	{                                  //    ↓
		for (j = 0;j <= data - i;j++)  //    ↓
		{                              //    ↓
			cout << "　";              //    ↓
		}                              //    ↓
		for (k = 3;k <= i;k++)         //    ↓
		{                              //    ↓
			cout << "■";              //    ↓
		}                              //    ↓
		for (k = 2;k <= i;k++)         //    ↓
		{                              //    ↓
			cout << "　";              //    ↓
		}                              //    ↓
		cout << "\n";                  //    ↓
	}                                  //    ↓  
}
