#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
void core();
void banner();
void create();
void del();
void edit();
void coc();
void coj();
void exit();
void ext();
void cd();
void bout();
void update();
void mid(string a);
//bool check(string act);
static bool If1st=true;
int main(void){
	system("clear");
	//static int sec=0;
	//do{printf("Please provide your activation code:");
	//string a;
	//cin>>a;
	//if(check(a)==1){
		core();
	//}
	//else
	//{
	//puts("Error! Try Again!");
	//sec++;
	//}
	//}while(sec<3);
	//printf("Too many times,QUITTING!!!");
	//exit(0);
		return 0;
}
void core(){
	system("clear");
	banner();
	puts("______________MENU_____________");
	puts("| >>>1.Create a new file       |");
	puts("| >>>2.Delete a file           |");
	puts("| >>>3.Edit a file             |");
	puts("| >>>4.Compile a C++ file      |");
	puts("| >>>5.Compile a Java file     |");
	puts("| >>>6.Run an extension        |");
	puts("| >>>7.About this software     |");
	puts("| >>>8.Online update           |");
	puts("| >>>9.Change dictionary       |");
	puts("| >>>10.Exit the program       |");
	puts("-------------VIDEA--------------");
	do{
		string pointer;
		printf("./~>");
		cin>>pointer;
		switch(atoi(pointer.c_str())){
			case 1:create();break;
			case 2:del();break;
			case 3:edit();break;
			case 4:coc();break;
			case 5:coj();break;
			case 6:ext();break;
			case 7:bout();break;
			case 8:update();break;
			case 9:cd();break;
			case 10:exit();break;
			default:mid(pointer);break;
		}
	}while(1);
}
void banner(){
	if(If1st) {
	system("clear");
	puts("++      ++");
	puts("++      ++");
	puts(" ++    ++");
	puts("   ++++");
	puts("    ++");
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	system("clear");
	puts("++      ++   ++++");
	puts("++      ++    ++");
	puts(" ++    ++     ++");
	puts("   ++++       ++");
	puts("    ++       ++++");
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	system("clear");
	puts("++      ++   ++++   +++");
	puts("++      ++    ++    ++ ++");
	puts(" ++    ++     ++    ++   ++");
	puts("   ++++       ++    ++ ++");
	puts("    ++       ++++   +++");
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	system("clear");
	puts("++      ++   ++++   +++      +++++");
	puts("++      ++    ++    ++ ++    ++");
	puts(" ++    ++     ++    ++   ++  +++++");
	puts("   ++++       ++    ++ ++    ++");
	puts("    ++       ++++   +++      +++++");
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	system("clear");
	puts("++      ++   ++++   +++      +++++      ++");
	puts("++      ++    ++    ++ ++    ++        ++++ ");
	puts(" ++    ++     ++    ++   ++  +++++    ++--++");
	puts("   ++++       ++    ++ ++    ++      ++    ++");
	puts("    ++       ++++   +++      +++++  ++      ++");
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	system("clear");
	puts("++      ++   ++++   +++      +++++      ++");
	puts("++      ++    ++    ++ ++    ++        ++++ ");
	puts(" ++    ++     ++    ++   ++  +++++    ++--++          By Research Technology");
	puts("   ++++       ++    ++ ++    ++      ++    ++");
	puts("    ++       ++++   +++      +++++  ++      ++");
	std::this_thread::sleep_for(std::chrono::milliseconds(500));
	If1st=false;
	}
	else{
	system("clear");
	puts("++      ++   ++++   +++      +++++      ++");
	puts("++      ++    ++    ++ ++    ++        ++++ ");
	puts(" ++    ++     ++    ++   ++  +++++    ++--++          By Research Technology");
	puts("   ++++       ++    ++ ++    ++      ++    ++");
	puts("    ++       ++++   +++      +++++  ++      ++");
	}
	}
//bool check(string act){
//	string a="KTPPS-KG256";
//	string ct="-77K8I";
//	string a_ct=a+ct;
//	if(act==a_ct){
//		return true;
//	}
//	else
//		return false;
//}
void create(){
	system("clear");
	puts("What do you want to create?(A file name)");
	printf("./create~>");
	string fn,fs;
	cin>>fn;
	string cmt="touch ";
	fs=cmt+fn;
	system(fs.c_str());
	puts("File has been created!");
	puts("PRESS ANY KEY TO CONTINUE....");
	cin.ignore();
	getchar();
	core();
}
void del(){
	system("clear");
	puts("What file you want to delete(A file name)");
	printf("./delete~>");
	string fn,fs;
	cin>>fn;
	string cmt="rm -f ";
	fs=cmt+fn;
	system(fs.c_str());
	puts("File has been deleted!");
	puts("PRESS ANY KEY TO CONTINUE....");
	cin.ignore();
	getchar();
	core();
}
void edit(){
	system("clear");
	puts("What file you want to edit(A file name)");
	printf("./edit~>");
	string fn,fs;
	cin>>fn;
	string cmt="vim ";
	fs=cmt+fn;
	system(fs.c_str());
	core();
}
void coc(){
	system("clear");
	puts("File name?");
	printf("./compile.C++~>");
	string fn,fs,ft;
	cin>>fn;
	puts("The target program name?");
	cin>>ft;
	string cmt="g++ ";
	string target=" -o ";
	fs=cmt+fn+target+ft;
	system(fs.c_str());
	printf("Do you want to run?[y/N]");
	char a;
	cin>>a;
	if(a!='y'&&a!='Y')
	{printf("\nPRESS ANY KEY TO CONTINUE....");
	cin.ignore();
	getchar();
	core();
	}
	else
	{
		string runner;
		string misc="./";
		runner=misc+ft;
		system(runner.c_str());
		puts("\nPRESS ANY KEY TO CONTINUE....");
		cin.ignore();
		getchar();
		core();
	}
}
void coj(){
	system("clear");
	puts("File name?");
	printf("./compile.java~>");
	string fn,fs;
	cin>>fn;
	string cmt="java ";
	fs=cmt+fn;
	system(fs.c_str());
	puts("PRESS ANY KEY TO CONTINUE....");
	cin.ignore();
	getchar();
	core();
}
void ext(){
	system("clear");
	puts("Avaliable extensions:");
	system("ls Exts");
	puts("Which extension you want to run?");
	string e="./Exts/";
	string xts,come;
	cin>>xts;
	come=e+xts;
	system(come.c_str());
	puts("PRESS ANY KEY TO CONTINUE....");
	cin.ignore();
	getchar();
	core();
}
void update(){
	system("clear");
	puts("This action needs Superuser access!!!");
	puts("starting update...");
	puts("Getting update files...");
	system("wget https://codeload.github.com/intfloatjohn/VIDEA_update/zip/refs/heads/main");
	system("unzip main");
	system("sudo rm main");
	system("sudo mv VIDEA_update-main VIDEA_update");
	system("sudo mv VIDEA_update/update.sh ./");
	system("sudo chmod +x update.sh");
	system("./update.sh");
	printf("PRESS ANY KEY TO CONTINUE....");
	printf("Tips:Need to restart the program to finish update.");
	cin.ignore();
	getchar();
	core();
}
void bout(){
	system("clear");
	puts("VIDEA v0.0.4 by Research Technology,John");
	puts("build-in Version:V230910C");
	puts("Copyright (c)2023 Research Technology,Ultd. All Rights Reserved.");
	puts("Current dictionary:");
    system("pwd");
    puts("");
    printf("PRESS ANY KEY TO CONTINUE....");
	cin.ignore();
	getchar();
	core();
}
void mid(string a){
	if(a=="NGGYU"||a=="Never"||a=="114514"||a=="?"){
		system("clear");
		puts("Something good's coming!!!");
		system("wget http://m701.music.126.net/20230903142456/6ddeee7410a4b40451f62d355bfb7feb/jdymusic/obj/wo3DlMOGwrbDjj7DisKw/15329916276/4a70/92a9/cf39/050de20a06e54dfc97a36a42936f5717.mp3");
		system("open 050de20a06e54dfc97a36a42936f5717.mp3");
		core();
	}
	else{printf("-> ");
	printf(a.c_str());
	printf(" <- ");
	puts("Is not a correct command! Please Try Again!");
	cin.ignore();
	getchar();
	core();
	}
}
void cd(){
    system("clear");
    puts("Dictionary name:");
    string dir,command,final_Command;
    cin>>dir;
    command="cd ";
    final_Command=command+dir;
    system(final_Command.c_str());
    puts("Current dictionary:");
    system("pwd");
    puts("PRESS ANY KEY TO CONTINUE....");
    cin.ignore();
    getchar();
	main();
}
void exit(){
	exit(0);
}
