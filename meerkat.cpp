#include <iostream>

using namespace std;
class Meerkat()
{
    public:
    string m_name;
    int m_age;
    void setName(string meerName){
    m_name = meerName;
    }
    string getName(){
        return m_name;
    }

    void setAge(int age)
    {
        m_age = age;
    }

    int getAge(int age)
    {
        return m_age;
    }
};

