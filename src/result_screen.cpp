#include "result_screen.h"

void
ResultScreen::Update(){
    if(check_box_ok.Clicked()){
        //...
    }
    if(check_box_retry.Clicked()){
        //...
    }
}

void
ResultScreen::Draw(Camera* _camera){
    check_box_ok.Draw(_camera);
    check_box_retry.Draw(_camera);
}