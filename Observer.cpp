#include<iostream>
#include<vector>

using namespace std;

class ISubject{
public:

    virtual void Attach() {};
    virtual void Notify() {};
};

class IObserver {
public:
    virtual void Operation() {};
};

class Subject : public ISubject{
public:

    vector<IObserver*> attached;


    void Attach(IObserver* obs){
        this->attached.push_back(obs);
        cout << "Observer is attached" << endl;



    }


    void Notify(){
        for (IObserver *obs : attached )
        {
            obs->Operation();

        }
        
    }

};


class Observer : public IObserver{
public:

    void Operation(){
        cout << "Subject just did something" << endl;
    }

};





int main() {

    Subject s;

    Observer o;

    s.Attach(&o);

    //Observer o2;

    //s.Attach(&o2);

    s.Notify();



    return 0;
}