#include <iostream>
#include "data_abstraction.h"
using namespace std;
int main(){
    data_abstraction data;
    data.Add_data(1000);
    data.Add_data(324);
    data.Add_data(34);

    cout << data.get_data() << endl;
    return 0;
}
// Created by 86138 on 2024/3/26.
//

#include "data_abstraction.h"
