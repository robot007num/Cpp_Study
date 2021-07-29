//Const return by value
//Result cannot be used as an lvalue

class X
{
private:
    int  i_;
public:
    X(int ii = 0);
    void modify();
};

X::X(int ii) { i_ = ii;}

void X::modify() { i_++;}

X f5() { return X();}

const X f6() { return X();}

void f7(X&x) { x.modify();} 

int main01()
{
    f5() = X(1);  // ok -- non-const return value
    f5().modify(); //ok

}

