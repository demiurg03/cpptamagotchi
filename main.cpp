#include <iostream>
using namespace std;



struct animal_s{

    int live =100;

    int hunger = 0;

    int intelligence = 1;

    int strength = 1;

    int agility = 1;

    int fatigue = 0;

    string name = "NAN";

}static tamagotchi;

struct things_s{
    std::pair<int,int>high_feed{0,100};
    std::pair<int,int>middle_feed{0,50};
    std::pair<int,int>low_feed{0,25};

    std::pair<int,int>high_medicine{0,500};
    std::pair<int,int>middle_medicine{0,250};
    std::pair<int,int>low_medicine{0,125};


}static things;

static float mony = 100.00f;
static int day = 0;


void f_tamagotchi(){

cout<<"(1)info"<<endl;





}



void f_shop(){
    auto gbye = [](){
        int count = -1;

        while (1) {
            cout<<"(1)high feed "<<things.high_feed.second<<'$'<<endl;
            cout<<"(2)middle feed "<<things.middle_feed.second<<'$'<<endl;
            cout<<"(3)low feed "<<things.low_feed.second<<'$'<<endl;
            cout<<endl;
            cout<<"(4)high medicine "<<things.high_medicine.second<<'$'<<endl;
            cout<<"(5)middle medicine"<<things.middle_medicine.second<<'$'<<endl;
            cout<<"(6)low medicine "<<things.low_medicine.second<<'$'<<endl;
            cout<<endl;
            cout<<"(7)exit"<<endl;
            cout<<"Select action: ";cin>>count;

            switch (count) {
            case 1:
                if(mony>=things.high_feed.second){
                    mony-=things.high_feed.second;
                    things.high_feed.first++;
                    break;
                }
                cout<<"mony < prise"<<endl;
                break;
            case 2:
                if(mony>=things.middle_feed.second){
                    mony-=things.middle_feed.second;
                    things.middle_feed.first++;
                    break;
                }
                cout<<"mony < prise"<<endl;
                break;
            case 3:
                if(mony>=things.low_feed.second){
                    mony-=things.low_feed.second;
                    things.low_feed.first++;
                    break;
                }
                cout<<"mony < prise"<<endl;
                break;
            case 4:
                if(mony>=things.high_medicine.second){
                    mony-=things.high_medicine.second;
                    things.high_medicine.first++;
                    break;
                }
                cout<<"mony < prise"<<endl;
                break;

            case 5:
                if(mony>=things.middle_medicine.second){
                    mony-=things.middle_medicine.second;
                    things.middle_medicine.first++;
                    break;
                }
                cout<<"mony < prise"<<endl;
                break;
            case 6:
                if(mony>=things.low_medicine.second){
                    mony-=things.low_medicine.second;
                    things.low_medicine.first++;
                    break;
                }
                cout<<"mony < prise"<<endl;
                break;

            case 7:
                return;

            }
        }
    };

    int count = -1;


    while (1) {
        cout<<"(1)bye"<<endl;
        cout<<"(2)exit"<<endl;
        cout<<"Select action: ";cin>>count;
        switch (count) {
        case 1:
            gbye();
            break;
        case 2:return;

        }

    }


}





int main(){


    //    cout<<"set the name: ";
    //    cin>>tamagotchi.name;


    while(1){
        system("cls");
        if(tamagotchi.live <=0)
            return 0;


        int cat = -1;
        cout<<"(1)tamagotchi"<<endl;
        cout<<"(2)store"<<endl;
        cout<<"(3)save exit"<<endl;
        cout<<"(4)exit"<<endl;
        cout<<"Select action: ";cin>>cat;


        switch (cat) {
        case 1:f_tamagotchi();break;
        case 4:f_shop();break;
        }

        day++;
    }





    return 0;
}
