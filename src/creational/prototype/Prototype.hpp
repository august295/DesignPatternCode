#ifndef __PROTOTYPR_HPP__
#define __PROTOTYPR_HPP__

class Prototype
{
public:
    Prototype(){};
    virtual ~Prototype(){};

	/* �ؼ�ԭ��ģʽ�������������� */
    virtual Prototype * Clone() = 0;
};

#endif