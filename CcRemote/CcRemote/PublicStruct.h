#pragma once

enum
{
	ONLINELIST_IP = 0,          //IP����˳��
	ONLINELIST_ADDR,          //��ַ
	ONLINELIST_COMPUTER_NAME, //�������/��ע
	ONLINELIST_OS,           //����ϵͳ
	ONLINELIST_CPU,          //CPU
	ONLINELIST_VIDEO,       //����ͷ
	ONLINELIST_PING          //PING
};

//�����������б��Ľṹ
typedef struct
{
	char	*title;   //�б�������
	int		nWidth;   //�б��Ŀ���
}COLUMNSTRUCT;