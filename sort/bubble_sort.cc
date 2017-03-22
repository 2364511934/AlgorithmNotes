// ð������
void bubble_sort(int arr[], int len)  
{  
    int i, j;  
    for (i = 0; i < len; i++)  
        for (j = 1; j < len - i; j++)  
            if (arr[j - 1] > arr[j])  
                swap(arr[j - 1], arr[j]);  
}


// ð������Ľ���
// ͨ�����ñ�־λ����¼�˴α����������ݽ��������������ж��Ƿ�Ҫ����ѭ��
void bubble_sort(int arr[], int len)
{
    for (int i = 0; i < len-1; i++){        //�Ƚ�n-1��
        bool exchange = true;               //ð�ݵĸĽ�������һ����û�з��������������������
        for (int j = len-1; j >i; j--){     //ÿ�δӺ��ð��һ����Сֵ
            if (arr[j] < arr[j - 1]){       //���������򽻻�
                swap(arr[j], arr[j - 1]);
                exchange = false;
            }
        }
        if (exchange){
            return;
        }
    }
}

// ð������Ľ��� 
// ��¼ĳ�α���ʱ��������ݽ�����λ��pos,
// ����posλ��֮��ļ�¼���ѽ�����λ,���ڽ�����һ������ʱֻҪɨ�赽posλ�ü��ɡ�
void bubble_sort(int arr[], int len)  
{  
    int j, k;  
    int flag;  

    flag = len;  
    while (flag > 0)  
    {  
        k = flag;  
        flag = 0;  
        for (j = 1; j < k; j++)  
            if (arr[j - 1] > arr[j])  
            {  
                swap(arr[j - 1], arr[j]);  
                flag = j;  
            }  
    }  
}