#include <iostream>
using namespace std;
// Abstract base class is class which have atleast one Pure Virtual Function
class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do-nothing function --> pure virtual function
    // If i comment out the display() funtion of CWHText then it will throw error because it will not run CWH dsiplay
    // fucntion , this class is made specifically for inheritance
};

class CWHVideo : public CWH
{
    float VideoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        VideoLength = vl;
    }
    void display(void)
    {
        cout << "\nThis is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this Video is " << VideoLength << " minutes" << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display(void)
    {
        cout << "\nThis is an amazing text tutorial with title " << title << endl;
        cout << "Ratings of this text tutorial is " << rating << " out of 5 stars" << endl;
        cout << "No. of words in this text tutorial: " << words << endl;
    }
};
int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Django Tutorial";
    vlen = 5.96;
    rating = 4.5;
    CWHVideo djVideo(title, rating, vlen);

    title = "Django Text Tutorial";
    words = 596;
    rating = 4.1;
    CWHText djText(title, rating, words);

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}