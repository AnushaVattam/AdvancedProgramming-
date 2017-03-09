#ifndef CHARSET_H_INCLUDED
#define CHARSET_H_INCLUDED

class CharSet
{
    private:
        bool array[26];
        int map(char x);
    public:
        CharSet();
        void insert(char x);
        void display();
        bool find(char x);

};

#endif // CHARSET_H_INCLUDED
