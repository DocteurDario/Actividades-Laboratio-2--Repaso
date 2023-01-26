#include <iostream>
using namespace std;
int main(void){
    int codigo_batido=0;
    int vaso=0;
    float bidon[3]={20,35,44};
    int cantidad[3][3]={0};
    cout<<"Indicar codigo de batido : "<<endl;
    cin>> codigo_batido;
        while (codigo_batido !=0){
            cout<<"Ingresar el tipo de vaso: "<<endl;
            cin>>vaso;
            switch(vaso){
                case 1:
                        bidon[codigo_batido-1]-=0.15f;
                    break;
                case 2:
                        bidon[codigo_batido-1]-=0.2f;
                    break;
                case 3:
                        bidon[codigo_batido-1]-=0.3f;
                    break;
            }
        cantidad[codigo_batido-1][vaso-1]++;
        cout<<"Indicar codigo de batido : "<<endl;
        cin>> codigo_batido;
        }
            cout<<"Banana : "<<bidon[0]<< "  -- Vaso 1: "<<cantidad[0][0] <<"  --Vaso 2: "<<cantidad[0][1]<<"   --Vaso 3: "<<cantidad[0][2]<<endl;
            cout<<"Anana  : "<<bidon[1]<< "  -- Vaso 1: "<<cantidad[1][0] <<"  --Vaso 2: "<<cantidad[1][1]<<"   --Vaso 3: "<<cantidad[1][2]<<endl;
            cout<<"Sandia : "<<bidon[2]<< "  -- Vaso 1: "<<cantidad[2][0] <<"  --Vaso 2: "<<cantidad[2][1]<<"   --Vaso 3: "<<cantidad[2][2]<<endl;
return 0;
}
