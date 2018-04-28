class Box {
  private:
    int l, b, h;
  public:
    Box() { l = b = h = 0; }
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    Box(Box &B) {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    
    int getLength() {return l;}
    int getBreadth() {return b;}
    int getHeight() {return h;}
    long long CalculateVolume() {
        return l*b*h;
    }
    
    bool operator < (Box B) {
        if (this->l < B.l){ return true; }
        else if (this->l == B.l && this->b < B.b) { return true; }
        else if (this->l == B.l && this->b == B.b && this->h < B.h) {return true;}
        else { return false; }
    }
    
    friend ostream& operator<< (ostream &out, const Box &B);
};

ostream & operator<< (ostream &out, const Box &B){
    out << B.l << " " << B.b << " " << B.h;
    return out;
}


