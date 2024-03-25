#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{ 
    string P = "Print numbers";
    string A = "Add numbers";
    string M = "Display mean of the numbers";
    string S = "Display the smallest number";
    string L = "Display the largest number";
    string Q = "Quit";
    
    char choice;
    
    vector<int> nlist {};

    
  do{
            cout << "\nP - Print numbers\nA - Add numbers\nM - Display mean of the numbers\nS - Display the smallest number\nL - Display the largest number\nQ - Quit" <<endl;
            cout << "\nEnter your choice: ";
            cin >> choice;
            choice = toupper(choice);
            
            switch(choice){
                case 'P':
                    if(nlist.size()==0)cout << "\n[] - the list is empty\n";
                    else{
                        cout << "[";
                        for (auto num:nlist)
                            cout << " "<<num;
                        cout << " ]\n";
                    }
                    break;
                case 'A':
                    int new_num;
                    cout << "\nEnter a new number to the list: ";
                    cin >> new_num;
                    nlist.push_back(new_num);
                    cout << new_num << " added" <<endl;
                    break;
                case 'M':
                    if(nlist.size()==0)cout << "\nUnable to calculate the mean - no data\n";
                    else{
                        double sum = 0;
                        for(auto num:nlist){
                        sum += num;}
                        double average = sum / nlist.size();
                        cout << "\nAverage: " << average << endl;
                    }
                    break;
                case 'S':
                     if(nlist.size()==0)cout << "\nUnable to determine the smallest number - list is empty\n";
                     else{
                         int smallest = nlist[0];
                         for (auto num:nlist){
                             if(num < smallest) smallest = num;
                         }
                         cout <<"\nThe smallest number is "<< smallest << endl;
                     }
                     break;
                    case 'L':
                        if(nlist.size()==0)cout << "\nUnable to determine the largest number - list is empty\n";
                        else{
                             int biggest = nlist[0];
                             for (auto num:nlist){
                                 if(num > biggest) biggest = num;
                             }
                             cout <<"\nThe largest number is "<< biggest << endl;
                         }
                         break;
                     case 'Q':
                        cout << "\nGoodbye\n\n" << endl;
                        break;
                    default: 
                        cout << "\nUnknown selection, please try again\n\n" << endl;
                        
                    
            }
  }while(choice != 'Q');
    
    


	return 0;
}
