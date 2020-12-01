#include "pch.h"
#include "Calculator.h"

int Calculator::Add(std::string expression)
{
    return 0;
}

int Calculator::Add(char* s)
{
    char ts[20];        //����� ��� ��������
    int cur_index = 0;  //������� ������
    int result=0;       //���������
    int d = 0;          //������� �������
    char delimeter = ',';
    memset(ts, 0, 20);
    //������ ������
    if (strnlen(s, 100) == 0)
        return -1;
    if ((*s == '/') && (*(s + 1) == '/')) {
        s += 2;
        delimeter = *s;
        s += 2;
    }
    while (*s) {
        if ((*s >= '0') && (*s < '9'))
            ts[cur_index++] = *s;
        else if ( ( (*s == delimeter)||(*s=='\n') ) && (cur_index != 0)) {
            ts[cur_index++] = 0;
            sscanf(ts, "%d", &d);
            result += d;
            cur_index = 0;
            memset(ts, 0, 20);
        }
        else if (((*s == ',') || (*s == '\n')) && (cur_index == 0)) 
            return -4;
        else {  //�������� ������
            if (cur_index != 0) //�������� �����������
                return -5;
            return -3;
        }
        s++;
    }
    if (cur_index > 0) {
        ts[cur_index++] = 0;
        sscanf(ts, "%d", &d);
        result += d;
    }
    else
        return -2;
    return result;
}
