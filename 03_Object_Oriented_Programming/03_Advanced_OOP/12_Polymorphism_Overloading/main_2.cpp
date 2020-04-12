/*
Exercise
In this exercise, you will build two vehicle motion models, and overload the Move() member function.


//Model 1
The first motion model will be class ParticleModel.
In this model, the state is x, y, and theta (heading).
The Move(double v, double theta) function for this model includes instantaneous steering:

    theta += phi
    x += v * cos(theta)
    y += v * cos(theta)




//Model 2
The second motion model will be class BicycleModel.
In this model, the state is x, y, theta (heading),
and L (the length of the vehicle).
The Move(double v, double theta) function for this model is affected by the length of the vehicle:

    theta += v / L * tan(phi)
    x += v * cos(theta)
    y += v * cos(theta)


You are encouraged to read more about vehicle motion, but for the purposes of practicing function overriding,
the precise motion models are not so important. What is important is that the two models, and thus to the two Move()
functions, are different.

http://www.cs.cmu.edu/~motionplanning/reading/PlanningforDynamicVeh-1.pdf


Instructions:
    1.Define class ParticleModel, including its state and Move() function.
    2.Extend class BicycleModel from class ParticleModel.
    3.Override the Move() function within class BicycleModel.
    4.Pass the tests in main() by verifying that the two Move() functions override each other in different scenarios.

*/

#include <assert.h>
#include <cmath>
#include <iostream>
// TODO: Define PI
#define PI 3.1415926
// TODO: Define ParticleModel

class ParticleModel{
    // TODO: Define the Move() function for ParticleModel
public:
    void Move(double v, double phi){
        theta += phi;
        x += v * cos(theta);
        y += v * cos(theta);
        std::cout <<"Move in ParticleModel"<<std::endl;

    }

    void get_info(){
        std::cout<< x<< ",add:"<< &x << std::endl;
        std::cout<< y<< ",add:"<< &y << std::endl;
        std::cout<< theta<< ",add:"<< &theta << std::endl;
        std::cout <<"get_info in ParticleModel"<<std::endl;

    }

//private:
    //x, y is the position
    double x = 0;
    double y = 0;
    //theta is the heading of object
    double theta = 0;

};
// TODO: Inherit BicycleModel from ParticleModel
class BicycleModel : public ParticleModel{
    // TODO: Define the move() function for BicycleModel
public:
    void Move(double v, double phi){
        theta += v / L * tan(phi);
        x += v * cos(theta);
        y += v * cos(theta);
        std::cout <<"Move in BicycleModel"<<std::endl;
    }

        void get_info(){
            std::cout<< x<< ",add:"<< &x << std::endl;
            std::cout<< y<< ",add:"<< &y << std::endl;
            std::cout<< theta<< ",add:"<< &theta << std::endl;
            std::cout <<"get_info in BicycleModel"<<std::endl;

        }
private:
    //the length of the vehicle
    double L = 1;



};
// TODO: Pass the tests
int main()
{
    ParticleModel particle;
    BicycleModel bicycle;

    particle.get_info();
    bicycle.get_info();

    particle.Move(10, PI/9);
    bicycle.Move(10, PI/9);

    //各自走自己的Move, 即便輸入一樣, 當衍伸class 出現一樣的function name 時, overwrite base class 的
    //雖然x,y,theta 定義在base class, 但 宣告 derived class object 時, dervied class 的 xytheta 是不同份
    //所以每個object 有自己的 x,y,theta
    assert(particle.x != bicycle.x);
    assert(particle.y != bicycle.y);
    assert(particle.theta != bicycle.theta);


    particle.get_info();
    bicycle.get_info();

}
