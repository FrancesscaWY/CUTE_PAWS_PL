//
// Created by 86138 on 2024/3/26.
//

#ifndef CWEEK_5_DATA_ABSTRACTION_H
#define CWEEK_5_DATA_ABSTRACTION_H


class data_abstraction {
public:
    data_abstraction(int i=0){
        total=i;
    }
    void Add_data(int number){
        total+=number;
    }
    int get_data(){
        return total;
    }
private:
    int total;
};


#endif //CWEEK_5_DATA_ABSTRACTION_H
