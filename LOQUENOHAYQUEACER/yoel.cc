#include<iostream>
#include<vector>
using namespace std;class PrintProgramPurpose{public:PrintProgramPurpose(){const string programpurpose=ProgramPurposeGetter();cout<<programpurpose;}~PrintProgramPurpose(){};PrintProgramPurpose(PrintProgramPurpose& printprogrampurposeobject){this->programpurpose=printprogrampurposeobject.ProgramPurposeGetter();};string ProgramPurposeGetter(){return programpurpose;};private:string programpurpose="esteprogramacalculaelproductoescalardedosvectores:";};bool CheckCorrectParameters(int argc,char* argv[],const int correct_parameters){if(argc==correct_parameters){return true;}else{return false;}};int main(int argc,char* argv[]){PrintProgramPurpose myObjectProgramPurpose;CheckCorrectParameters(argc,argv,1);vector<int> my_vector={1,2,3};vector<int> my_vector2{1,2,3};int suma=0;for(int i = 0;i<my_vector.size();++i){if(i==my_vector.size()-1){suma+=my_vector[i]+my_vector2[i];cout<<my_vector[i]+my_vector2[i];}else{suma+=my_vector[i]+my_vector2[i];cout<<my_vector[i]+my_vector2[i]<<"+";}}cout<<"productoescalar="<<suma;return 0;}