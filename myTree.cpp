#include "myTree.h"

CMyTree::CMyTree()
{
    m_leftTree = nullptr;
    m_rightTree = nullptr;
}

CMyTree::~CMyTree()
{
    if(m_leftTree != nullptr)
    {
        delete m_leftTree;
    }

    if(m_rightTree)
    {
        delete m_rightTree;
    }
    if (m_rightTree)
    {
        delete m_rightTree;
    }

    
    if(m_rightTree   )
    {
        delete m_rightTree;
    }
}