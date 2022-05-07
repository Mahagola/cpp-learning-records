#include <iostream>
using namespace std;
class A
{
    int id;

public:
    void set_id(int a)
    {
        id = a;
    }
    void show_id()
    {
        cout << "id is : " << id << endl;
    }
};
class B : virtual public A
{
protected:
    int marks;

public:
    void set_marks(int b)
    {
        marks = b;
    }
    void show_marks()
    {
        cout << "marks is : " << marks << endl;
    }
};
class C : virtual public A
{
protected:
    int score;

public:
    void set_score(int c)
    {
        score = c;
    }
    void show_score()
    {
        cout << "score is: " << score << endl;
    }
};
class D : public B, public C
{
    int total;

public:
    void display(void)
    {
        total = marks + score;

        cout << "your score is : " << total << endl;
    }
};
int main()
{
    D obj;
    obj.set_id(45);
    obj.set_marks(40);
    obj.set_score(50);
    obj.display();
    obj.show_id();
    obj.show_marks();
    obj.show_score();
    return 0;
}