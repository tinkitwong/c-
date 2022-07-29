#ifndef SALLY_H
#define SALLY_H

class Sally
{
    public:
        Sally(int a, int b);
        void print();
    protected:
    private:
        int regVar;
        // needs to be init via member init list
        const int constVar;
};

#endif