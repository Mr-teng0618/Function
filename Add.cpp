int add(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    int p1 = a&b;//位与。
    p1 = p1 << 1;//这两句只考虑进位   
    int p2 = a^b;//位异或。不考虑进位
    return add(p2, p1);    //结束的标志是a为0了，或者b为0了
}
int main()
{
    int x = 3, y = 2;
    int sum = 0;
    sum = add(x,y);
    cout << sum << endl;

}
