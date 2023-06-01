// DesignPattern.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "MallardDuck.h"
#include "FlyNoWings.h"
#include "MuteQuack.h"
#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "ForecastDisplay.h"
#include "Espresso.h"
#include "DarkRoast.h"
#include "Mocha.h"
#include "SDarkRoast.h"
#include "SMocha.h"
#include "NYPizzaStore.h"
#include "Singleton.h"

#include "RemoteControl.h"
#include "RemoteLoader.h"

#include "OldMallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include "ClsAdapter.h"

#include "CaffeineBeverageWithHook.h"
#include "CoffeeWithHook.h"
#include "TeaWithHook.h"

#include "MenuComponent.h"
#include "Menu.h"
#include "MenuItem.h"

#include "BumballMachine.h"


void testSimpleUDuck() {
    shared_ptr<Duck> mallardD(new MallardDuck());
    mallardD->swim();
    mallardD->performFly();
    mallardD->performQuack();
    mallardD->display();
    cout << "disable fly" << endl;
    mallardD->setFlyBehavior(shared_ptr<FlyNoWings>(new FlyNoWings()));
    mallardD->performFly();

    cout << "disale quack ability" << endl;
    mallardD->setQuackBehavior(shared_ptr<MuteQuack>(new MuteQuack()));
    mallardD->performQuack();
}
void testObserverPattern() {
    shared_ptr<WeatherData> weatherInfo(new WeatherData());
    shared_ptr<CurrentConditionDisplay> ccDisplay(new CurrentConditionDisplay(weatherInfo));
    ccDisplay->registerItSelf();// inside this method, the shared_from_this() is used.

    shared_ptr<ForecastDisplay> fcDisplay(new ForecastDisplay(weatherInfo));
    fcDisplay->registerObserver(fcDisplay);// register it's self ----------> do not need to use shared_from_this().

    weatherInfo->setMeasurements(28.4, 47.6, 30.03);

    ccDisplay->removeObserver();
    cout << "CurrentConditionDisplay does not received update anymore...." << endl;
    weatherInfo->setMeasurements(38.4, 87.6, 40.07);
    
}
void testDecorator() {
   /* cout << "smart pointer..." << endl;
    shared_ptr<Beverage>  espresso(new Espresso());   
    cout << " description: " << espresso->getDescription() <<" | cost : "<<espresso->cost() << endl;
    cout << "normal pointer...." << endl;
    Beverage* mbv = new Espresso();
    cout<<"description: "<<mbv->getDescription() <<" | cost: "<<mbv->cost()<< endl;
    delete mbv;*/

    shared_ptr<Beverage> darkroast(new DarkRoast());
    shared_ptr<Beverage> mocha(new Mocha(darkroast));
    shared_ptr<Beverage> d_mocha(new Mocha(mocha));
    cout << " description: " << d_mocha->getDescription() << " | cost : " << d_mocha->cost() << endl;

}
void testSimpleDecorator() {
    shared_ptr<SIBeverage> darkroast(new SDarkRoast(nullptr, 0.99));
    cout << "des: " << darkroast->getDescription() << " cost : " << darkroast->calculateCost() << endl;
    cout <<endl<<" double mocha darkroasted"<< endl;
    shared_ptr<SIBeverage> smocha(new SMocha(darkroast, 0.20));
    shared_ptr<SIBeverage> dsmc(new SMocha(smocha, 0.20));
    cout << "des: " << dsmc->getDescription() << " cost : " << dsmc->calculateCost() << endl;
}
void testPizzaStore() {
    shared_ptr<PizzaStore> nypStore(new NYPizzaStore());
    shared_ptr<Pizza> pizza = nypStore->orderPizza();
    pizza->description();

}

void testSingleton() {
    shared_ptr<Singleton> onlyO = Singleton::getInstance();
   cout<<onlyO->getDescription() << endl;

   shared_ptr<Singleton> obj2 = Singleton::getInstance();

   
    if (onlyO == obj2) {
        cout << "same object.." << endl;
    }
    else
        cout << "different objects.." << endl;
}
void testRemoteControl() {
    shared_ptr<RemoteControl> rmCtrl = RemoteLoader::loadRemoteControl(4);
   // rmCtrl->onButtonWasPushed(1);
   // cout << "------------"<<endl;
    rmCtrl->onButtonWasPushed(3);
    cout << "--------------" << endl;
    rmCtrl->showCommandList();
    cout << "--------------" << endl;
    rmCtrl->onButtonUndoPushed();
}
void testObjectAdapter() {
    shared_ptr<TDuck> omallardDuck(new OldMallardDuck());
    shared_ptr<ATurkey> turkey(new WildTurkey());
    shared_ptr<TDuck> turkeyAdapter(new TurkeyAdapter(turkey));
    
    omallardDuck->quack();
    omallardDuck->fly();
    cout << "//-----------//" << endl;

    turkeyAdapter->quack();
    turkeyAdapter->fly();   
}

void testClassAdapter() {
    shared_ptr<TDuck> cls_AdapterDuck(new ClsAdapter());
    cls_AdapterDuck->quack();
    cls_AdapterDuck->fly();
}

void testTemplateMethodWithHook() {
    shared_ptr<CaffeineBeverageWithHook> coffe(new CoffeeWithHook());
    coffe->perepareRecipe();
    cout << "//--------------//" << endl;
    shared_ptr<CaffeineBeverageWithHook> tea(new TeaWithHook());
    tea->perepareRecipe();
}

void testMenuComponentComposite() {
    shared_ptr<MenuComponent> pancakeHouseMenu(new Menu("PANCAKE HOUSE MENU", "Breakfast"));
    shared_ptr<MenuComponent> dinnerMenu(new Menu("LUNCH MENU", "Lunch"));
    shared_ptr<MenuComponent> cafeMenu(new Menu("CAFE MENU", "Cafe"));

    shared_ptr<MenuComponent> allMenus(new Menu("ALL MENUS", "All menus combined"));
    allMenus->add(pancakeHouseMenu);
    allMenus->add(dinnerMenu);
    allMenus->add(cafeMenu);


    pancakeHouseMenu->add(shared_ptr<MenuComponent>(new MenuItem("pancake", "baked pancake", true, 2.45)));
    dinnerMenu->add(shared_ptr<MenuComponent>(new MenuItem("Pasta", "Spaghetti with Marinara sauce...", true, 3.89)));
    cafeMenu->add(shared_ptr<MenuComponent>(new MenuItem("Apple Pie", "Applie Pie with flakey crust, topped with vanilla icecream", true, 1.59)));

    allMenus->print();
}

void testGumballMachine() {
    shared_ptr<GumballMachine> gb_Machine(new GumballMachine(2));
    gb_Machine->setMachine2State(gb_Machine);
    gb_Machine->insertQuarter();
    gb_Machine->ejectQuarter();
    gb_Machine->insertQuarter();
    gb_Machine->turnCrank();
    gb_Machine->turnCrank();

    gb_Machine->insertQuarter();
    gb_Machine->turnCrank();
    gb_Machine->ejectQuarter();

    gb_Machine->insertQuarter();
    
}

int main() {

 testGumballMachine();    
    return 0;
}


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
