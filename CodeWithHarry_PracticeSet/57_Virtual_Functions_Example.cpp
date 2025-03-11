#include <iostream>
using namespace std;
/*

Rules for virtual functions:
1. They cannot be static
2. They are accessed by object pointers
3. Virtual functions can be a friend of another class
4. Virtual function in base class might not be used.
5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class
    Means that if it can't find that function in derived class then it will run the base class function
    For example: If I comment out the display() function of CWHText class then the tuts[1] ->display(); will run the
    display function of CWH class
*/
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
    virtual void display()
    {
        cout << "Almost useless function" << endl;
    }
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
    // djVideo.display();

    title = "Django Text Tutorial";
    words = 596;
    rating = 4.1;
    CWHText djText(title, rating, words);
    // djText.display();

    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display(); // If the display function present in CWH Class is not virtual then these array poniter will
    tuts[1]->display(); // call the display function of CWH class instead of display function CWHVideo and CWHText
    /*
    We have learnt this concept in previous video that if the base class's function has the name as in Derived
    class or classes then the pointer created by base class will point to its own function until and unless we
    make the base function virtual
    */
    return 0;
}