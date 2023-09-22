#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case)
	{
       int dis = 0, car_type, car_speed = 0, change_speed = 0, count;
        
       cin >> count;
       for(int i = 0; i < count; i++)
       {
       		cin >> car_type;
           if(car_type != 0) cin >> change_speed;
           
           if(car_type == 1) car_speed += change_speed;
           else if(car_type == 2) car_speed -= change_speed;
           
           if(car_speed < 0) car_speed = 0;
           dis += car_speed;
       }
       cout << "#" << test_case << " " << dis << endl; 
	}
	return 0;
}