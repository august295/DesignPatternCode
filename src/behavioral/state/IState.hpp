#ifndef __ISTATE_HPP__
#define __ISTATE_HPP__

class Context;

class IState
{
public:
    IState(){};
    virtual ~IState(){};

	void SetContext(Context* context)
	{
		PProContext = context;
	}

    /* 操作接口 */
    virtual void DoThis() = 0;
	virtual void DoThat() = 0;

protected:
	Context* PProContext;
};

#endif