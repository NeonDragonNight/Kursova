#include<iostream>
#include <random>
#include <conio.h>

using std::cout;
using std::endl;

int main(){
	
	int i,j,ww,wh,tic,q,o,w;
	int kl,a,a2,r,z,sz,zkol,zt;
	
	int qwe; //test
	int wk,hk,x,y; //kordinats
	
	qwe=0; //test
	
	
	ww=5;  //высота |  Y  (wk)
	wh=5;  //ширина __  X  (hk)
	
	
	zkol=0;
	z=0;
	zt=0;
	r=0;
	x=0;
	y=0;
	wk=0;
	hk=0;
	a2=0;
	kl=0;
	a=0;
	tic=0;
	w=0;
	
	
	std::random_device rd;
    std::mt19937 gen(rd());
	
	
	o=ww*wh;
	
	int swh[o];
	int kx[o];
	int ky[o];
	int liv_t[o];
	
	

	while(w < o){
		kx[w]=0;
		ky[w]=0;
		swh[w] = 0;
		liv_t[w] =0;
		w++;
	}
	


	q=wh*ww-1; //poisk zentra
	q=q/2; 
	swh[q] = 1; 



	
	// Nachalo
	while(true){
	
	wk=0;
	hk=0;
	a2=0;
	kl=0;
	a=0;
	tic=0;
	w=0;
	
	
	zkol=0;
	zt=0;


	
	while(zt < o){
		if(swh[zt] == 1 && liv_t[zt] < 6){
			zkol++;
		}
	zt++;
	}
	
	cout << "Zarajonyx kletok: " << zkol << "|" << endl;
	
	
	//Vivod na ekran
	for(i = 0;i < ww; i++){
		
		
		for (j = 0; j < wh; j++) {
			
			ky[tic] = wk;
			kx[tic] = hk;
			
        	cout << " ";
        	
        	if(swh[tic] == 1 && liv_t[tic] < 6){
        		cout << "@";
			
			}else{
            cout << "#";}
        
            tic++;
            cout << " ";
            
            hk++;
            
        }
        cout << endl;
	
	hk=0;
	wk++;
	
	}
	
	cout << "___________________________________" << endl;
	
	wk=0;
	
	
	
	while(a < o){  	//Vkluchenie kletok
		
		
		if(swh[a] == 1){
			
			
			liv_t[a]++;
			
			if(liv_t[a] == 10){
				swh[a] = 0;
				liv_t[a] = 0;
			}
			
			
    		std::uniform_int_distribution<> dis(1,2);
    		
    		if(dis(gen) == 2 && liv_t[a] < 6 && swh[a] == 1){
			
			
			
			x = kx[a];
			y = ky[a];
			
			
    		std::uniform_int_distribution<> dis_x(-1,1);
    		
    		std::uniform_int_distribution<> dis_y(-1,1);
    		
			
			
			x=x+dis_x(gen);  
			y=y+dis_x(gen);
			

			
			while(a2 < o){
				
				
				if(kx[a2] == x && ky[a2] == y){
					
					
					swh[a2] = 1;
					break;
					
				}
 
				a2++;
				
			}
		kl=0;
		a2=0;
		
	}
		
		}

		
	a++;
	
	
	
	}
	
	cout << endl;
	
a=0;
	

qwe++;	//test

cout << qwe << endl; //test

if(qwe == 100){  //test
	break;}



if(zkol == o){
	cout << "Vse zarajeny";
	break;}

if(zkol == 0){
	cout << "Vse zdorovy";
	break;}


} //nachalo
	
getch();
	
}