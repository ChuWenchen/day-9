#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
                 //��ϰһ��û��ʵ�����õ�������ϰ�����bug
//int main()
//{
//	char password[20] = { 0 };
//	int ret = 0;
//	int ch = 0;
//	printf("���������룺\n");
//	scanf("%s", password);                //����%s���ܼ�\n
//	printf("��ȷ�ϣ�Y/N����\n");
//	while((ch=getchar()) !='\n');
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//
//	return 0;
//}

                 //һ��ֻ��������ַ��Ĵ���
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)           //���ﲻ�ܼӷֺţ��������continue�ᱨ��
//    {
//        if (ch < '0' || ch>'9')
//            continue;                       // �˴�continue���������
//        putchar(ch);
//    }
//    return 0;
//}




                                 //forѭ��     
//int main()
//{
//    int i = 0;
//      // ��ʼ���� �жϣ�  ����
//    for (i = 1; i <= 10; i++)             //����Ҳ���ܼӷֺţ��������continueҲ�ᱨ��
//    {              
//        if (i == 5)
//            continue;                     //continue �����1234678910��    break��1234������ѭ��
//        printf("%d  ", i);
//    }
//    return 0;
//}





//int main()
//{
//    int i = 0;
//    //int j = 0;                   //ʡ���˳�ʼ����j=0�����涨�壬��ӡ��10��hehe
//    for (; i < 10; i++)
//    {
//        int j = 0;                  //j=0�����涨�壬��ӡ��100��hehe
//        for (; j < 10; j++)
//        {
//            printf("hehe ");
//        }
//    }
//    return 0;
//}


                 //  һ����ֵ�����                 //��������ѭ��0��
//int main()
//{
//    int a = 0;
//    int b = 0;
//    for (a = 0, b = 0; b = 0; ++a, b++)            //��Ϊ����forѭ�����ж����Ϊ b=0����һ����ֵ����䣬��0Ϊ�٣���������ֱ�Ӳ�������
//                                                   //������ÿ��ѭ����ʼb������һȻ����ѭ��
//    {
//        printf("hehe");
//    }
//    return 0;
//}



                   //dowhileѭ��
//  do while ѭ����ӡ1-10
//int main()
//{
//    int i = 1;
//    do
//    {                                   //do����Ҫ��{}��������ֻ�ܷ�һ�����
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}


                    //����n�Ľ׳�
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


                     //����1��10�׳˵ĺ�
//int main()
//{
//    int a = 1;
//    int n = 0;
//    int jc = 1;
//    int zonghe = 0;
//    for (n = 1; n <= 3; n++)
//    {
//
//        for (a = 1,jc=1; a <= n; a++)            //����ÿ��jc��Ҫ��ʼ������Ȼ���ᱣ��֮ǰ��ֵ�����������Ľ׳�֮ǰ���Ѿ�������2�Ľ׳ˣ�
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


                         //дһ�������������������ҵ�Ŀ����
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
//            printf("�ҵ�Ŀ�������±�Ϊ��%d\n", i);
//            printf("k=%d\n", arr[i]);
//            break;
//        }
//    }
//        if (i == sz)
//            printf("�Ҳ���Ŀ����");
//    return 0;
//}



                          //���ַ�
int main()
{
    char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int k = 7;                                    //��Ŀ����
    int left = 0;                                 //���±�
    int sz = sizeof(arr) / sizeof(arr[0]);        //����Ԫ�ظ������õ����±�
    int right = sz;                               //���±�
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
            printf("�ҵ��ˣ��±�Ϊ��%d\n", mid);
            break;
        }
    }
    if (left >= right)
    {
        printf("�Ҳ���Ŀ������");
    }
    return 0;
}