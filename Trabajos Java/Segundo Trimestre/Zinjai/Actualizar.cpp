#include <iostream>
#include <windows.h> 
using namespace std;

int main(int argc, char *argv[]) {
	
	int i,j,k;
	
	for (i=0; i<8; i++){
		if (i==0 or i==5){
			for (j=0; j<18; j++){
				if (j==0){
					cout<<"  ..";
				}else {
					if (j==17){
						cout<<".."<<endl;
					}else{
						cout<<"..";
					}
				}
			}
		}else{
			if (i==1 or i==4){
				for (k=0; k<18; k++){
					if (k==0){
						cout<<"  ..";
					}else{
						if (k==17){
							cout<<".."<<endl;
						}else{
							cout<<"  ";
						}
					}
				}
			}else{
				if (i==2){
					cout<<"  ..          Actualizando          .."<<endl;
				}else{
				    if (i==3){
						cout<<"  ..         Base De  Datos         .."<<endl;
				    }else{
						if (i==6){
							cout<<""<<endl;
						}else{
							for (k=0; k<8; k++){
								if(k==0){
									cout<<"      ||";
									Sleep(1000);
								}else{
									if(k==1){
										cout<<"|||";
										Sleep(1300);
									}else{
										if(k==2){
											cout<<"||||";
											Sleep(1800);
										}else{
											if(k==3){
												cout<<"|||||";
												Sleep(1000);
											}else{
												if(k==4){
													cout<<"||";
													Sleep(1200);
												}else{
													if(k==5){
														cout<<"|||";
														Sleep(1100);
													}else{
														if(k==6){
															cout<<"||||";
															Sleep(1600);
														}else{
															if(k==7){
																cout<<"|||||"<<endl;
																Sleep(1800);
															}else{
																
															} 
															
														} 
													} 
												} 
											} 	
										} 
									}
								}
							}
							
						}
			     	}
				}  
		    } 
		   
	    }
	}
	cout<<""<<endl;
	cout<<"        Actiualizacion Finalizada"<<endl;
	cout<<"        _________________________"<<endl;
	cout<<""<<endl;
	system("pause");
	
	return 0;
}

