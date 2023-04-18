# 作業三
## ITSA15
### 問題描述 ：

在電腦科學上 ，計算一串文字上各個字母出現的頻率是常被用到的技術，這對壓縮來講是很重要的資訊，而計算字數也可以幫助人們作校正的工具。一行文字被空白、逗點或是句點所分隔而形成很多字，例如 ”I have a pencil.” 這行字就有 I ， have ， a ， pencil 這四個字，即此行字數為 4 。所以現在要請你幫忙設計一個程式來計算一行文字的字 數及各個字母出現的次數。

### 輸入說明 ：

輸入一行正常的英文文字，也就是不要有開頭是空白或是有連續兩個 空白的情形發生，並且內容只能包含英文字母、空白、逗點、句點。 注意 : 輸入的字串長度最多是 100 。

### 輸出說明 ：

第一行輸出一個正整數 n ，表示此行文字的字數。 第二行開始依序輸出在此行文字中有出現的字母及出現的次數。 注意 : 大小寫不分，輸出小寫字母。

### 範例 ：
![](https://i.imgur.com/fyYjITH.png)
s1存放大寫字母
s2存放小寫字母
s1[i]-'A',s2[i]-'a'
for i in range(0,27)
    if s1[i] s2[i] != 0
        print('A'+i+32+":"+s1[i])
        print('a'+i+":"+s2[i])
```cpp
for (int i=0;i < str.length();i++){
        if (str[i]>='A' && str[i]<='Z')
            s1[str[i]-'A']++;

        else if (str[i]>='a' && str[i]<='z')
            s2[str[i]-'a']++;

        if (str[i] == ' ')
            con++;
    }
    cout << con << endl;
    for (int i = 0;i<26;i++){
        if (s1[i]!=0)
            cout << char('A'+i+32) << " : " << s1[i] <<endl;
        else if (s2[i]!=0)
            cout << char('a'+i) << " : "<< s2[i] <<endl;
    }
```
## ITSA16
### 問題描述 :

給予兩個英文字串，請計算出第一個字串出現在第二個字串中的次數。

### 輸入說明 :

輸入分為兩行，第一行是由英文大小寫字母與數字所組成的字串，長度不超過 128 個字母。
第二行也是由英文大小寫字母與數字所組成的字串，長度不超過 512 個字母。

### 輸出說明 :

第一個字串出現在第二個字串中的次數。

### 範例 :
![](https://i.imgur.com/b588TYz.png)
設兩字串分別為str1和str2，利用getline取得字串長度，count為出現次數，利用find函數，若找到重複則計入count，直到字串結束，最後再將count輸出。
```cpp
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1,str2;
	getline(cin,str1); 
    getline(cin,str2);
    int i = 0,count = 0;
    while (true)
    {
    	i = str2.find(str1,i);
    	if (i != string::npos)
    	{
    		i++;
    		count++;
		}
    	else
        {
            break;
        }
	}
	cout << count << endl;
	return 0;
}
```
## ITSA17
### 問題描述 ：

斷詞在自然語言的研究上是個很重要的步驟，主要就是將關鍵字從句子中斷出，英文的斷詞較為簡單，就根據句子中的空格將英文字隔開。

### 輸入說明 ：

輸入一句英文敘述句。 字元數≤1000。

### 輸出說明 ：

將輸入的句子進行斷詞，將斷出的關鍵字依照句子中的出現排序列印出。全部轉成小寫，列印出的關鍵字不得重複，關鍵字間以一個空格隔開，最後一個關鍵字後面進行換行。例如輸入 How do you do ，則輸出 how do you 。

### 範例 ：
![](https://i.imgur.com/e91eh20.png)
使用getcher()讀取整行資料並以空格分開
```cpp
string s,arr[1000];
    int index=0;
    while (cin >> s){
        arr[index++] = s;
        char x = getchar();
        if (x == '\n')
            break;
    }
```
將大寫字母轉小寫
利用set的特性(不重複、排序)將arr轉為set資料型態後印出
```cpp
set<string> ans(arr,arr+1000);
    cout << "\b";
    for (const auto &s : ans) {
        for (int i=0;i<sizeof(&s);i++)
            if (s[i]>=65 && s[i]<=90){
                cout << char(s[i]+32);
                continue;
                }
            else{
                cout << char(s[i]);
            }
        
        cout << ' ';
    }
    
    cout << '\n';
```
## ITSA18
### 問題描述 ：

輸入一段文字 ( 限制為 ASCII 表中，編號 32 至 125 之字元 ) ，將它們每個字元依照鍵盤的位置，印出它們右邊的字元，若右邊按鍵有兩層字元 ( 如 : 和 ; 位於同一按鍵上 ) ，則輸出下層字元，即 ”;” ，若該按鍵為上層字元 ( 如 !) 則輸出其右邊按鍵之上層字元 ( 如 @) ，若輸入的字元右邊的鍵為不可視按鍵，如 shift, enter,backspace 或右邊已無按鍵，如不做更動，照樣輸出。

### 輸入說明 ：

輸入一行鍵盤上屬於 ASCII 表中編號 32 至 125 之字元，並以 enter 結束該行。

### 輸出說明 ：

輸出該行每個字元右邊位置的文字，除題目所述之例外字元除外。
最後必須有換行

### 範例 ：
![](https://i.imgur.com/frLWLg1.png)
建字典暴力解
```cpp
key.insert(make_pair(' ',' '));key.insert(make_pair('!','@'));
	key.insert(make_pair('"','"'));key.insert(make_pair('#','$'));
	key.insert(make_pair('$','%'));key.insert(make_pair('%','^'));
	key.insert(make_pair('&','*'));key.insert(make_pair('\'','\''));
	key.insert(make_pair('(',')'));key.insert(make_pair(')','_'));
	key.insert(make_pair('*','('));key.insert(make_pair('+','+'));
	key.insert(make_pair(',','.'));key.insert(make_pair('-','='));
	key.insert(make_pair('.','/'));key.insert(make_pair('/','/'));
	key.insert(make_pair('0','-'));key.insert(make_pair('1','2'));
	key.insert(make_pair('2','3'));key.insert(make_pair('3','4'));
	key.insert(make_pair('4','5'));key.insert(make_pair('5','6'));
	key.insert(make_pair('6','7'));key.insert(make_pair('7','8'));
	key.insert(make_pair('8','9'));key.insert(make_pair('9','0'));
	key.insert(make_pair(':','\"'));key.insert(make_pair(';','\''));
	key.insert(make_pair('<','>'));key.insert(make_pair('=','='));
	key.insert(make_pair('>','?'));key.insert(make_pair('?','?'));
	key.insert(make_pair('@','#'));key.insert(make_pair('a','s'));
	key.insert(make_pair('b','n'));key.insert(make_pair('c','v'));
	key.insert(make_pair('d','f'));key.insert(make_pair('e','r'));
	key.insert(make_pair('f','g'));key.insert(make_pair('h','j'));
	key.insert(make_pair('g','h'));key.insert(make_pair('i','o'));
	key.insert(make_pair('j','k'));key.insert(make_pair('k','l'));
	key.insert(make_pair('l',';'));key.insert(make_pair('m',','));
	key.insert(make_pair('n','m'));key.insert(make_pair('o','p'));
	key.insert(make_pair('p','['));key.insert(make_pair('q','w'));
	key.insert(make_pair('r','t'));key.insert(make_pair('s','d'));
	key.insert(make_pair('t','y'));key.insert(make_pair('u','i'));
	key.insert(make_pair('v','b'));key.insert(make_pair('w','e'));
	key.insert(make_pair('x','c'));key.insert(make_pair('y','u'));
	key.insert(make_pair('z','x'));key.insert(make_pair('[',']'));
	key.insert(make_pair('\\','\\'));key.insert(make_pair(']','\\'));
	key.insert(make_pair('^','&'));key.insert(make_pair('_','='));
	key.insert(make_pair('`','1'));key.insert(make_pair('{','}'));
	key.insert(make_pair('|','|'));key.insert(make_pair('}','|'));
	key.insert(make_pair('~','!'));
```
## ITSA19
### 問題描述 ：

某遊覽車派遣公司共收到n筆任務訂單，訂單中詳細記載發車時間s和返回時間d。每一輛遊覽車只要任務時間不衝突，可立即更換司機繼續上路執行任務。請問該公司至少需要調遣多少車輛才足以應付需求？

### 輸入說明 ：

程式的輸入包含兩行數字，第一行包含一個正整數n，1 ≤ n ≤ 30，代表第二行有n筆訂單的出發時間和返回時間s1, d1, s2, d2, ..., sn, dn，0 < si < di ≤ 24，而此2n個正整數間以空格隔開。

### 輸出說明 ：

輸出最少車輛需求數。

### 範例 ：
![](https://i.imgur.com/1R3tSnk.png)
a陣列存放發車時間
b陣列存放返回時間
若發車時間>=返回時間
則表示無須派多一輛車
否則ans+1
```cpp
for (int i=1;i<n;i++){
        for (int j=0;j<i;j++){
            if(b[j]<=a[i]){
                b[j]=b[i];
                break;
            }
            ans+=1;
        }
    }
```
## ITSA20
### 問題描述：

有時候我們有些很大的值，大到即使大型的計算機也無法幫我們作一些很基本的運算。請你寫一個程式來解決兩個大整數的加法問題。

### 輸入說明：

第一行有一個正整數 N ，表示共有 N 筆測試資料。接下來有 N 行，每行為一筆測試資料，內含兩個整數，其值不超過 30 位數，兩個整數間有一個空格。

### 輸出說明：

每筆測試資料輸出兩個整數的和於一行。

### 範例
![](https://i.imgur.com/VctCbRs.png)
輸入使用字串存取
寫一個高精度加法函式
```cpp
void add(string& a, const string& b) {
    int carry = 0;
    for (int i = a.size() - 1, j = b.size() - 1; i >= 0; i--, j--) {
        int sum = carry + (i >= 0 ? (a[i] - '0') : 0) + (j >= 0 ? (b[j] - '0') : 0);
        a[i] = sum % 10 + '0';
        carry = sum / 10;
    }
    if (carry) {
        a = '1' + a;
    }
}
```
a 和 b 分別表示加法中的兩數，型態為string
從個位開始進行進位運算
carry用來保存進位的值
使用for從最低位數開始，對應位數相加，同時還需要加上上一輪進位的值

為方便運算
將a設為較大數
```cpp
if (a.size() < b.size()) {
            swap(a, b);
        }
```
將兩數的位數設為同位數(不足前面補0)
```cpp
int diff = a.size() - b.size();
        b = string(diff, '0') + b;
        add(a, b);
```
## ITSA21
### 問題描述 ：

寫一個程式來找出輸入的十個數字的最大值和最小值，數值不限定為整數，且值可存放於 float 型態數值內。

### 輸入說明 ：

輸入十個數字，以空白間隔。

### 輸出說明 ：

輸出數列中的最大值與最小值，輸出時需附上小數點後兩位數字。

### 範例 ：
![](https://i.imgur.com/Ru5gzZB.png)
分別設定兩個float變數M(最大值)、n(最小值)和一個儲存輸入的陣列num。
```cpp
for (int i = 0; i < 10; i++){
        cin >> num[i];
    }//透過這個for迴圈將輸入的float存入num陣列

    M=num[0];//先將M值設為陣列中的第一個數值
    n=num[0];//先將n值設為陣列中的第一個數值
    for (int i = 0; i < 10; i++){   
        if (num[i]>M){
            M=num[i];//透過for迴圈比較陣列中的值，如大則取代
        }    
    }
    for (int i = 0; i < 10; i++)
    {   
        if (num[i]<n){
            n=num[i];//透過for迴圈比較陣列中的值，如小則取代
        }    
    }
    cout << fixed << "maximum:"<< setprecision(2)<< M <<endl;//透過fixed及setprecision函式式小數點後兩位數，並輸出其結果
    cout << fixed << "minimum:"<< setprecision(2)<< n <<endl;
    return 0;
```


## ITSA22
### 問題描述 ：

OX 遊戲是大家小時候的童年記憶，甚至在長大後，無聊時還是會玩一下呢 ! 但當你一個人時，是否也能讓電腦跟你玩呢 ?

### 輸入說明 ：

輸入一個 3*3 的 2 維矩陣，矩陣內容， 0 代表 O ， 1 代表 X 。註：每列數字之間均有空格隔開。

### 輸出說明 ：

輸出這場 OX 遊戲是否有勝負之分。註：輸出結尾需換行。

### 範例 ：
![](https://i.imgur.com/Frq9sGp.png)
讀三行分別為s1、s2、s3
直線:判斷s1[i]、s2[i]、s3[i]是否相等
斜線:判斷s1[0]、s2[2]、s3[4]是否相等
```cpp
for (int i=0;i<6;i+=2) {
        if (s1[i]==s2[i] && s2[i]==s3[i]){
            k = "True" ;
            break;}}
    
    if (s1[0]==s2[2] && s2[2]==s3[4])
        k="True";
    if (s1[4]==s2[2] && s2[2]==s3[0])
        k="True";
```
## ITSA23
### 問題描述 ：

假設銅板有1元、5元、50元共三種，媽媽請小明去菜市場買水果，給了小明N元，且媽媽交待，要老闆找小明的零錢的數目要最少，而小明到了水果攤買了a1顆蘋果，a2顆柳丁，及a3顆桃子，1顆蘋果15元，1顆柳丁20元，1顆桃子30元，請問老問需找多少個1元、5元、50元，其銅板數目最少。

### 輸入說明 ：

先輸入媽媽給小明多少錢，N，接著輸入a1, a2, a3 ， 在此n, a1, a2, a3為整數，且a1*15+ a2*20+ a3*30小於或等於N。

### 輸出說明 ：

列出共找小明多少個1元，5元及50元，若帶的錢不夠買水果，則顯示”0”。

### 範例 ：
![](https://i.imgur.com/9Kh9Yrc.png)
n,a1,a2,a3
算出總金額total
應找金額remaining = n - total
remaining / 50 = 50元數量
remaining %= 50 剩餘應找金額
remaining / 5 =5元數量
remaining %= 5 =1元數量
```cpp
int remaining = n - total;
    int fifty = remaining / 50; 
    remaining %= 50;
    int five = remaining / 5;
    remaining %= 5;
    int one = remaining;
```
## ITSA24
計算複利

Problem Description
你每個月存 10000 元到銀行中，銀行的每月利率為 0.1% ，以複利計算，請問 3 個月後，你的帳戶為多少錢？

底下的表格示範了如何得到第 3 個月時，帳戶中的本利和（本金 + 利率總合）。
![](https://i.imgur.com/xRj0APQ.png)
我們定義底下幾個符號：

r: 每期利率。以前例而言， r = 0.1%

n: 期數。以前例而言， n = 3

p: 每期投入金額。以前例而言 p = 10000

現在，給你前述的三個值（即 r, n 及 p ），請計算期末的本利和。以前例而言，期未的本利合為 30060.04001 元。

Input File Format
輸入有 3 行。第一行為 r ，為浮點數值。第二行為 n ，為一整數。第三行為 p ，為一整數。

Output Format
輸出本利和，請將數值以「整數」表示（無條件捨去）

Example

![](https://i.imgur.com/wXelfp1.png)
月初*利息+月初
下個月*利息+下個月
.....
```cpp
int s=p,pm[30],pt[30],rr=floor(r*1000);;
	
	for(int i=0;i<30;i++)
	{
		if(i>=0&&i<11)pm[i]=0;
		else {pm[i]=p%10;p/=10;}
		pt[i]=0;
	}
	for(int k=0;k<n;k++)
	{	
		for(int i=0;i<30;i++)
		{
			pt[i]+=pm[i]*rr;
		}
		for(int i=0;i<30;i++)
		{
			pt[i+1]+=pt[i]/10;
			pt[i]%=10;
		}
		for(int i=3;i<30;i++)
		{
			pt[i-3]=pt[i];
		}
		for(int i=0;i<30;i++)
		{
			pt[i]+=pm[i];
		}
		for(int i=0;i<30;i++) 
		{
			pt[i+1]+=pt[i]/10;
			pt[i]%=10;
		} 	
		if(k==n-1)
		{
			bool t=0;
			for(int i=29;i>=11;i--)
			{
				if(pt[i]!=0||t!=0)
				{
				t++;
				cout<<pt[i];
				if(i==11)cout<<endl;
				}
			else continue;
			}
		}
		else
		{
			pt[11]+=s;
			for(int i=0;i<30;i++)
			{
			pm[i]=pt[i];
			pt[i]=0;
			}
		}	
	}
```