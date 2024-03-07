#include<iostream>
#include <random>
#include <conio.h>


using namespace std;

int main(){
	
	int i,j,ww,wh,tic,q,o,w;
	int kl,a,a2,r,z,sz,zkol,zt;
	int key,zd,za,prow;
	
	int qwe; //test
	int wk,hk,x,y; //kordinats
	
	qwe=0; //test
	ww=0;
	wh=0;
	zd=0;
	za=0;
	prow=0;
	
	
	ww=5;  //высота |  Y  (wk)
	wh=5;  //ширина __  X  (hk)
	
	
	cout << "Vvedyte vysotu dylanky shkiry: ";
	cin >> ww;
	
	for(int i=0;i<ww;i++){
		if(ww < 3){
			cout << "Vysota natto mala " << "vstanovlen rozmir za zamovchuvannyam(5)" << endl;
			ww=5;
		}
		
		if(ww == prow){
			cout << "Chislo parne " << "vstanovlen rozmir za zamovchuvannyam(5)" << endl;
			ww=5;
		}
		
		prow = prow + 2;
	}
	
	prow=0;
	
	
	cout << "Vvedyte shirenu dylanky skiry: ";
	cin >> wh;
	
		for(int i=0;i<wh;i++){
		if(wh < 3){
			cout << "shirena natto mala " << "vstanovlen rozmir za zamovchuvannyam(5)" << endl;
			wh=5;
		}
		
		if(wh == prow){
			cout << "Chislo parne " << "vstanovlen rozmir za zamovchuvannyam(5)" << endl;
			wh=5;
		}
		
		prow = prow + 2;
	}
	
	prow=0;
	
	
	while(true){
	
	
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
	int res[o];
	
	

	while(w < o){
		kx[w]=0;
		ky[w]=0;
		swh[w] = 0;
		liv_t[w] =0;
		res[w];
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
	
	for(int i=0;i<wh;i++){
		cout << "_";
	}
	cout << endl;
	
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
					
					
					res[a2] = 1;
					break;
					
				}
 
				a2++;
				
			}
		kl=0;
		a2=0;
		
	}
		
		}

		
	a++;
	
	}  	 //vkluchenie kletok konec
	
	
	for(int i=0; i < o ;i++){
		if(res[i] == 1){
			swh[i] = res[i];
		}
	}
	
	
	for(int i=0; i < o;i++){
		res[i]=0;
	}
	
	
	cout << endl;
	
	
a=0;
	
	
	sleep(1);
	

qwe++;	//test

cout << qwe << endl; //test

if(qwe == 10000){  //test
	break;}



if(zkol == o){
	cout << "Vse zarajeny";
	za++;
	break;}

if(zkol == 0){
	cout << "Vse zdorovy";
	zd++;
	break;}


} //nachalo
	
	cout << endl;
	
	cout << "Zapustyt snova?" << endl;
	cout << "Da '1'/Net '2', izmenit rozmir dilyanky '3': " << endl;
	cin >> key;
	
	if(key==2){
		break;
	}
	
	if(key==3){
			
	cout << "Vvedyte vysotu dylanky shkiry: ";
	cin >> ww;
	
	cout << "Vvedyte shirenu dylanky skiry: ";
	cin >> wh;
	}
	
	qwe=0;
	
} //Restart symulysii
	
	
	cout << "Vse zdorovi: " << zd << " raz" << endl;
	cout << "Vse zarajeny: " << za << " raz" << endl;
	
	
getch();
	
}