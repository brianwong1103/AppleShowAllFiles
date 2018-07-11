//
//  main.cpp
//  AppleShowAllFiles
//
//  Created by 黃浩源 on 11/7/2018.
//  Copyright © 2018年 黃浩源. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout<<"[1]AppleShowAllFiles"<<endl;
    cout<<"[2]AppleHideHiddenFiles"<<endl;
    int a,b;
    cin>>a;
    if(a==1){
        system("defaults write com.apple.finder AppleShowAllFiles TRUE");
        system("killall Finder");
    }else if(a==2){
        system("defaults write com.apple.finder AppleShowAllFiles FALSE");
        system("killall Finder");
    }else{
        cout<<"Please enter 1 or 2 to enable AppleShowAllFiles or AppleHideHiddenFiles"<<endl;
    }
}
