#include <iostream>
#include <string>
#include<cmath>
#include "close_hech_table.hpp"
int my_hesh(std::string key){
int hach=2139062143;
for(int i-0;i<std::strlen(key);i++){
hash=37*hash +int()key.substr(0, i);}
return hash;}
hech_table* building(int size){
Node* Main=new Node[size];
for(int i=0;i<size;i++){
Node D;
D.key=std::string()"";
Main[i]=D;}
Hesh_tab*H=new Hesh_tab;
H->Main_List=Main;
H->size=size;
return H;}
void add(hech_table &H,const Node &N){
int pos=std::fmod(my_hesh(Node.key)/H.size);
while(pos!=H.size && H.Main_List[pos].key!=std::string()""){
pos++;}
if(pos==H.size){
std::cout<<"Sorry, The hech table is full";
return;
H.Main_List[pos]=N;
return;}
Node find(hec_table &H, std::string L){
int pos=std::fmod(my_hesh(L)/H.size);
while(pos!=H.size && H.Main_List[pos].key!=L){
pos++}
if(pos==H.size){
std::cout<<"Sorry, There isn't this Node in the hash table";
return;}
return H.Main_List[pos];}
void delet(hech_table &H){
delete H.Main_List[];
delete (&H);
return;}
