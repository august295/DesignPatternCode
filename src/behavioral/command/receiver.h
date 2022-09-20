#ifndef __RECEIVER_H__
#define __RECEIVER_H__

#include <iostream>

class receiver
{
public:
    receiver();
    ~receiver();

    bool get_state(); /* 获取 */
    void shut();      /* 指令开 */
    void open();      /* 指令关 */

private:
    bool m_state;
};

#endif