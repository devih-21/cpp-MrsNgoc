- Kiểu dữ liệu cấu trúc - Strucures
struct + function  = class
class bao gồm : {
    public : truy cập mọi nơi,
    private : truy cập riêng tư, thường để dữ liệu
    protected : tương tự private
}


class Time{
    private:
        int hour, minute, second;
    public:
        void input(); //method
        void output();
}

void Time::input(){
    do{
        cin >> hour;
    } while (hour >= 0 || hour < 24);

    do{
        cin >> minute;
    } while (minute >= 0 || minute < 60);

    do{
        cin >> second ;
    } while (second >= 0 || second < 60);

}

void Time::outPut(){
    cout << setfill('0') << setw(2) << hour << "h" << minute << "p" << second<< "s" << endl;
}

int main(){
    Time newTime;
    newTime.input();
    newTime.output();
}