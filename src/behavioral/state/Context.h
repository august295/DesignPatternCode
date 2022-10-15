#ifndef __CONTEXT_H__
#define __CONTEXT_H__

class IState;

class Context
{
public:
    Context(IState* state);
    ~Context();

	void ChangeState(IState* state);
	void DoThis();
	void DoThat();

private:
	IState* PPriState;
};

#endif