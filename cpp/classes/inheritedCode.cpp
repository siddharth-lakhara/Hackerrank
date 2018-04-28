class BadLengthException: public exception {
    public:
    int len;
    BadLengthException(int n):len(n){}
    int what() {
        return len;
    }
};
