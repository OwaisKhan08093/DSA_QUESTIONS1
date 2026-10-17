class Solution {
public:
    string complexNumberMultiply(string num1, string num2) {
        int a,b,c,d;
        char sign1,sign2,i1,i2;
        stringstream s1(num1), s2(num2);
        s1 >> a >> sign1 >> b >> i1;
        s2 >> c >> sign2 >> d >> i2;

        int real=a*c-b*d;
        int img=a*d+b*c;

        return to_string(real)+"+"+to_string(img)+"i";
    }
};