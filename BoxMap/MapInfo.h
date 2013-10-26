//////////////////////////////////////////////////////////////////////////
#pragma once
//////////////////////////////////////////////////////////////////////////
#ifndef MAP_INFO_H
#define MAP_INFO_H
//////////////////////////////////////////////////////////////////////////
#define ROW_NUM		12	/*��ͼ������*/
#define COL_NUM		14
//////////////////////////////////////////////////////////////////////////
//========================================================================
typedef enum 
{
	MAP_BACK = '0',	//��ͼ�ϵ����֣�'0'��������
	MAP_WALL,		//ǽ
	MAP_ROAD,		//��·
	MAP_BOX_NRM,	//����״̬������
	MAP_BOX_FIS,	//������Ŀ�ĵ�����
	MAP_DEST,		//Ŀ�ĵ�
	MAP_MAN,		//����
	MAP_BOMB		//ը��

}MapType;
//========================================================================
typedef struct _MAPINFO_
{
	DWORD	ver;					//�汾
	char	author[20];				//����
	char	name[32];				//��ͼ����
	char	data[ROW_NUM][COL_NUM];	//����y
	short	bomb;					//ը����

	struct _MAPINFO_ *prev;
	struct _MAPINFO_ *next;

}MAPINFO, MAPLIST, *PMAPINFO, *PMAPLIST;
//////////////////////////////////////////////////////////////////////////
#endif
//////////////////////////////////////////////////////////////////////////