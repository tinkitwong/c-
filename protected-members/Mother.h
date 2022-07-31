#ifndef MOTHER_H
#define MOTHER_H

class Mother
{
    public:
        int publicv;
    protected:
        // The class has access to this
        // Friends have access to this
        // Any class inheriting this class has access to this
        int protectedv;
    private:
        int privatev;

};

#endif