#import<iostream>
using namespace std;

class User{
	User();
	public:
		string getUsername(){
			return username;
		}
		string getPassword(){
			return password;
		}

		void setUsername(string userName){
			username = userName;
		}

		void setPassword(string pass){
			password = pass;
		}

		string printall(){
			string finalString;
			finalString = "Username:"+username+"\n";
			finalString = finalString+"Password:"+password+"\n";
			return finalString;
		}

		void readSave(string save){
			bool foundString = 1;
			int i = 0;
			int j = 0;
			//<editor-fold desc="Get username">
			while(foundString){
				if(save.at(i)=='U'){
					string test;
					for(i; i<9; i++){
						test = test + save.at(i);
					}
					if(test=="Username:"){
						while(!save.at(i)=='\n'){
							j++;
						}
						username = save.substr(i, j);
						i = i+j;
					}
				}
			}
			//</editor-fold>

			foundString = 0;
			while(foundString){
				if(save.at(i)=='P'){
					string test;
					for(i; i<j+i; i++){
						test = test + save.at(i);
					}
					if(test=="Password:"){
						while(!save.at(i)=='\n'){
							j++;
						}
						username = save.substr(i, j);
						i = i-j;
					}
				}
			}
		}
	private:
		string username;
		string password;
};
