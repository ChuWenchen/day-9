#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
                 //复习一个没有实际作用但是有练习意义的bug
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("请输入密码：\n");
//	scanf("%s", password);                //这里%s不能加\n
//	printf("请确认（Y/N）：\n");
//	while((ch=getchar()) !='\n');
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
//
//	return 0;
//}

                 //一个只输出数字字符的代码
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)           //这里不能加分号，否则后面continue会报错
//    {
//        if (ch < '0' || ch>'9')
//            continue;                       // 此处continue报错的问题
//        putchar(ch);
//    }
//    return 0;
//}




                                 //for循环     
//int main()
//{
//    int i = 0;
//      // 初始化， 判断，  调整
//    for (i = 1; i <= 10; i++)             //这里也不能加分号，否则后面continue也会报错
//    {              
//        if (i == 5)
//            continue;                     //continue 输出：1234678910，    break：1234后跳出循环
//        printf("%d  ", i);
//    }
//    return 0;
//}





//int main()
//{
//    int i = 0;
//    //int j = 0;                   //省略了初始化，j=0在外面定义，打印出10个hehe
//    for (; i < 10; i++)
//    {
//        int j = 0;                  //j=0在里面定义，打印出100个hehe
//        for (; j < 10; j++)
//        {
//            printf("hehe ");
//        }
//    }
//    return 0;
//}


                 //  一个奇怪的陷阱                 //这条代码循环0次
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 0, b = 0; b = 0; ++a, b++)            //因为这里for循环的判断语句为 b=0，是一个赋值的语句，而0为假，所以条件直接不成立。
//                                                   //并不是每次循环开始b都等于一然后死循环
//    {
//        printf("hehe");
//    }
//    return 0;
//}



                   //dowhile循环
//  do while 循环打印1-10
//int main()
//{
//    int i = 1;
//    do
//    {                                   //do后面要用{}，否则它只能放一条语句
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}


                    //计算n的阶乘
//int main()
//{
//    int a = 1;
//    int n = 0;
//    int sum = 1;
//    scanf("%d", &n);
//    //while (a <= n)
//    //{
//    //    sum = sum * a;
//    //    a++;
//    //}
//    //
//
//    for (a = 1; a <= n; a++)
//    {
//        sum = sum * a;
//    }
//    printf("sum=%d\n", sum);
//    return 0;
//}


                     //计算1到10阶乘的和
//int main()
//{
//    int a = 1;
//    int n = 0;
//    int jc = 1;
//    int zonghe = 0;
//    for (n = 1; n <= 3; n++)
//    {
//
//        for (a = 1,jc=1; a <= n; a++)            //这里每次jc都要初始化，不然它会保留之前的值（比如算三的阶乘之前它已经保留了2的阶乘）
//        {
//            jc = jc * a;
//        }
//        zonghe = zonghe + jc;
//    }
//    printf("jc=%d\n", jc);
//    printf("zonghe=%d", zonghe);
//    return 0;
//}

//
//int main()
//{
//    int a = 1;
//    int n = 0;
//    int jc = 1;
//    int zonghe = 0;
//    for (n = 1; n <= 3; n++)
//    {
//            jc = jc * n;
//        zonghe = zonghe + jc;
//    }
//    printf("jc=%d\n", jc);
//    printf("zonghe=%d", zonghe);
//    return 0;
//}


                         //写一个代码在有序数组中找到目标数
//int main()
//{
//    char arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//    int k = 0;
//    int i = 0;
//    scanf("%d", &k);
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (i = 0; i < sz; i++)
//    {
//        if (k == arr[i])
//        {
//            printf("找到目标数，下标为：%d\n", i);
//            printf("k=%d\n", arr[i]);
//            break;
//        }
//    }
//        if (i == sz)
//            printf("找不到目标数");
//    return 0;
//}



                          //二分法
int main()
{
    char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;                                    //定目标数
    int left = 0;                                 //左下标
    int sz = sizeof(arr) / sizeof(arr[0]);        //计算元素个数，得到右下标
    int right = sz;                               //右下标
    int mid = 0;
    while ("left<=right")
    {
        int mid = (left + right) / 2;
        if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
        else
        {
            printf("找到了，下标为：%d\n", mid);
            break;
        }
    }
    if (left >= right)
    {
        printf("找不到目标数字");
    }
    return 0;
}