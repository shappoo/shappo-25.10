#include <iostream>
using namespace std;
int main() 
{
setlocale(0, "");
int count=0, answer;
for(int i=0; i<20; i++){
    switch(i){
        case 0:
            cout<<"Вопрос номер 1\n";
            cout<<"Любимый цвет shappo?\n";
            cout<<"1)рыжый\n";
            cout<<"2)белый\n";
            cout<<"3)черный\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }     
            case 1:
            cout<<"Вопрос номер 2\n";
            cout<<"Какой десерт любит shappo?\n";
            cout<<"1)пончики\n";
            cout<<"2)мороженное\n";
            cout<<"3)чизкейк\n";
            cin>>answer;
            if(answer==1){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 2:
            cout<<"Вопрос номер 3\n";
            cout<<"Куда хочет попасть shappo?\n";
            cout<<"1)эстония\n";
            cout<<"2)норвегия\n";
            cout<<"3)перу\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 3:
            cout<<"Вопрос номер 4\n";
            cout<<"Любимый напиток shappo?\n";
            cout<<"1)сок\n";
            cout<<"2)вода\n";
            cout<<"3)пиво\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 4:
            cout<<"Вопрос номер 5\n";
            cout<<"Любимый вкус мороженного shappo?\n";
            cout<<"1)шоколадный\n";
            cout<<"2)манго\n";
            cout<<"3)клубничный\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 5:
            cout<<"Вопрос номер 6\n";
            cout<<"Любимый фрукт shappo?\n";
            cout<<"1)банан\n";
            cout<<"2)яблоко\n";
            cout<<"3)манго\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 6:
            cout<<"Вопрос номер 7\n";
            cout<<"Как любит путешествовать shappo?\n";
            cout<<"1)соло\n";
            cout<<"2)с семьей\n";
            cout<<"3)с друзьями\n";
            cin>>answer;
            if(answer==1){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 7:
            cout<<"Вопрос номер 8\n";
            cout<<"Когда др у shappo?\n";
            cout<<"1)27 января\n";
            cout<<"2)3 апреля\n";
            cout<<"3)15 сентября\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 8:
            cout<<"Вопрос номер 9\n";
            cout<<"На чем играет shappo?\n";
            cout<<"1)приставка\n";
            cout<<"2)пк\n";
            cout<<"3)телефон\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 9:
            cout<<"Вопрос номер 10\n";
            cout<<"Какую игру shappo любит больше всего?\n";
            cout<<"1)дота 2\n";
            cout<<"2)фортнайт\n";
            cout<<"3)кс го\n";
            cin>>answer;
            if(answer==1){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 10:
            cout<<"Вопрос номер 11\n";
            cout<<"Что выбирет shappo?\n";
            cout<<"1)поспать\n";
            cout<<"2)пойти в зал\n";
            cout<<"3)поиграть\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 11:
            cout<<"Вопрос номер 12\n";
            cout<<"Месси или Роналду выбирет shappo?\n";
            cout<<"1)суууу\n";
            cout<<"2)Роналду\n";
            cout<<"3)Месси\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 12:
            cout<<"Вопрос номер 13\n";
            cout<<"Какую соц сеть выбирет shappo?\n";
            cout<<"1)тг\n";
            cout<<"2)вк\n";
            cout<<"3)инст\n";
            cin>>answer;
            if(answer==1){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 13:
            cout<<"Вопрос номер 14\n";
            cout<<"Какое упражение выбирет shappo?\n";
            cout<<"1)жим\n";
            cout<<"2)на ноги\n";
            cout<<"3)становая\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 14:
            cout<<"Вопрос номер 15\n";
            cout<<"Кого пикнет shappo?\n";
            cout<<"1)сфа\n";
            cout<<"2)инвокера\n";
            cout<<"3)дарк виллоу\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 15:
            cout<<"Вопрос номер 16\n";
            cout<<"Сколько лет shappo?\n";
            cout<<"1)19\n";
            cout<<"2)17\n";
            cout<<"3)18\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 16:
            cout<<"Вопрос номер 17\n";
            cout<<"Какой телефон у shappo?\n";
            cout<<"1)айфон\n";
            cout<<"2)андройд\n";
            cout<<"3)айфон и андройд\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 17:
            cout<<"Вопрос номер 18\n";
            cout<<"Какую клавиатуру предпочитает shappo?\n";
            cout<<"1)механическую\n";
            cout<<"2)мембранную\n";
            cout<<"3)оптическую\n";
            cin>>answer;
            if(answer==1){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
            case 18:
            cout<<"Вопрос номер 19\n";
            cout<<"Любимая марка техники у shappo?\n";
            cout<<"1)bloody\n";
            cout<<"2)logitech\n";
            cout<<"3)oklick\n";
            cin>>answer;
            if(answer==2){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
                
                
            case 19:
            cout<<"Вопрос номер 20\n";
            cout<<"Без чего не может прожить shappo\n";
            cout<<"1)соц сети\n";
            cout<<"2)комьютер\n";
            cout<<"3)музыка\n";
            cin>>answer;
            if(answer==3){
                count+=1;
                answer=0;
                break;
            }else{
                answer=0;
                break;
            }
        default:
            break;
    }
}

cout<<count<< " праильных ответов из 20";

return 0;
}