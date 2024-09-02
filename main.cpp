#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include <thread>
using namespace std;

int main()
{

    // cout<<"MUHAMMAD HAMZA KALEEM"<<endl;
    cout << "=======================================================\n";
    cout << "\t\t  Group Members\n";
    cout << "=======================================================\n";
    cout << "\nNAME : MUHAMMAD HAMZA KALEEM\t ID : FA23-BESE-0003\n";
    cout << "\nNAME : MUHAMMAD SAFWAN\t\t ID : FA23-BESE-0030\n";
    cout << "\nNAME : USMAN MATLOOB\t\t ID : FA23-BESE-0049\n";
    cout << "\n=======================================================\n\n";
    cout << "\tWelcome To Word Guessing Game\n\n";

    cout << "\n-------------------------------------------------------\n";
    string uname;
    cout << "Enter Your Name : ";
    getline(cin, uname);
    cout << endl
         << endl;
    cout << "\nNote: Please remember that you have only 60-sec / 1-min and 5-Chances for each question.\nIf you don't enter correct letter in 60-sec / 1-min and 5-Chances than automatically Moving\non to the next question.\n";
    bool wrong = true;
    while (wrong == true)
    {
        wrong = false;
        string scat;
        string categories = "(1.Fruits , 2.Animals , 3.Countries)";

        cout << "\nSelect Category " << categories << " : ";
        getline(cin, scat);
        cout << endl;
        int count = 0;
        int i = 0;
        int counter = 0;

        if (scat == "1" || scat == "Fruits" || scat == "Fruit" || scat == "fruits" || scat == "fruit" || scat == "1.Fruits" || scat == "1.Fruit" || scat == "1.fruits" || scat == "1.fruit")
        {
            string data;
            ifstream myfile("fruits.txt");
            for (int i = 0; getline(myfile, data); i++)
            {
                // cout<<data;
                string ch;
                string arr[10] = {"_", "_", "_", "_", "_", "_", "_", "_"};
                auto start_time = chrono::steady_clock::now();
                if (i == 0)
                {
                    count = 0;

                    cout << endl
                         << data << endl;
                    for (int j = 0; j < 3 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "B" || ch == "b")
                        {
                            arr[0] = "B";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[1] = "a", arr[3] = "a", arr[5] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[2] = "n", arr[4] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question." << endl;
                            }
                        }
                    }
                }
                else if (i == 1)
                {
                    int count = 0;

                    cout << endl
                         << endl
                         << data << endl;
                    for (int j = 0; j < 4 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "A" || ch == "a")
                        {
                            arr[0] = "A";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "P" || ch == "p")
                        {
                            arr[1] = "p", arr[2] = "p";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "L" || ch == "l")
                        {
                            arr[3] = "l";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "E" || ch == "e")
                        {
                            arr[4] = "e";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question.";
                            }
                        }
                    }
                }
                else if (i == 2)
                {
                    int count = 0;

                    cout << endl
                         << endl
                         << data << endl;
                    for (int j = 0; j < 6 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "O" || ch == "o")
                        {
                            arr[0] = "O";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "R" || ch == "r")
                        {
                            arr[1] = "r";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[2] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[3] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "G" || ch == "g")
                        {
                            arr[4] = "g";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else if (ch == "E" || ch == "e")
                        {
                            arr[5] = "e";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question.";
                            }
                        }
                    }
                }

                auto end_time = chrono::steady_clock::now();
                auto elapsed_time = chrono::duration_cast<chrono::seconds>(end_time - start_time).count();

                cout << "\nTime taken for this question: " << elapsed_time << " seconds\n";

                if (elapsed_time > 30)
                {
                    cout << "Time's up! Moving on to the next question.\n";
                    counter += 5;
                }
                else
                {

                    this_thread::sleep_for(chrono::seconds(2));
                }
            }
            if (counter >= 10)
            {

                cout << "\n\nOh no " << uname << "! You Lose This Guessing Game.\n";
            }
            else
            {
                cout << "\n\nCongratulations " << uname << "! You Win This Guessing Game.\n";
            }
        }

        else if (scat == "2" || scat == "Animals" || scat == "Animal" || scat == "animals" || scat == "animal" || scat == "2.Animals" || scat == "2.Animal" || scat == "2.animals" || scat == "animal")
        {
            string data;
            ifstream myfile("animals.txt");
            for (int i = 0; getline(myfile, data); i++)
            {
                // cout<<data;
                string ch;
                string arr[10] = {"_", " _", " _", " _", " _", " _", " _", " _"};
                auto start_time = chrono::steady_clock::now();
                if (i == 0)
                {
                    int count = 0;

                    cout << data << endl;
                    for (int j = 0; j < 7 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "E" || ch == "e")
                        {
                            arr[0] = "E";
                            arr[2] = "e";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "L" || ch == "l")
                        {
                            arr[1] = "l";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "P" || ch == "p")
                        {
                            arr[3] = "p";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "H" || ch == "h")
                        {
                            arr[4] = "h";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[5] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[6] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "T" || ch == "t")
                        {
                            arr[7] = "t";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question." << endl;
                            }
                        }
                    }
                }
                else if (i == 1)
                {
                    int count = 0;

                    cout << endl
                         << endl
                         << data << endl;
                    for (int j = 0; j < 4 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "L" || ch == "l")
                        {
                            arr[0] = "L";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3];
                        }
                        else if (ch == "I" || ch == "i")
                        {
                            arr[1] = "i";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3];
                        }
                        else if (ch == "O" || ch == "o")
                        {
                            arr[2] = "o";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[3] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question.";
                            }
                        }
                    }
                }
                else if (i == 2)
                {
                    int count = 0;

                    cout << endl
                         << endl
                         << data << endl;
                    for (int j = 0; j < 5 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "C" || ch == "c")
                        {
                            arr[0] = "C";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[1] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "M" || ch == "m")
                        {
                            arr[2] = "m";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "E" || ch == "e")
                        {
                            arr[3] = "e";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "L" || ch == "l")
                        {
                            arr[4] = "l";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question.";
                            }
                        }
                    }
                }
                auto end_time = chrono::steady_clock::now();
                auto elapsed_time = chrono::duration_cast<chrono::seconds>(end_time - start_time).count();

                cout << "\nTime taken for this question: " << elapsed_time << " seconds\n";

                if (elapsed_time > 30)
                {
                    cout << "Time's up! Moving on to the next question.\n";
                    counter += 5;
                }
                else
                {

                    this_thread::sleep_for(chrono::seconds(2));
                }
            }
            if (counter >= 10)
            {

                cout << "\n\nOh no " << uname << "! You Lose This Guessing Game.\n";
            }
            else
            {
                cout << "\n\nCongratulations " << uname << "! You Win This Guessing Game.\n";
            }
        }

        else if (scat == "3" || scat == "Countries" || scat == "Country" || scat == "countries" || scat == "country" || scat == "3.Countries" || scat == "3.country" || scat == "3.Country" || scat == "3.countries")
        {
            string data;
            ifstream myfile("countries.txt");
            for (int i = 0; getline(myfile, data); i++)
            {
                // cout<<data;
                string ch;
                string arr[10] = {"_", " _", " _", " _", " _", " _", " _", " _"};
                auto start_time = chrono::steady_clock::now();
                if (i == 0)
                {
                    int count = 0;

                    cout << data << endl;
                    for (int j = 0; j < 7 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "P" || ch == "p")
                        {
                            arr[0] = "P";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[1] = "a", arr[6] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "K" || ch == "k")
                        {
                            arr[2] = "k";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "I" || ch == "i")
                        {
                            arr[3] = "i";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "S" || ch == "s")
                        {
                            arr[4] = "s";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "T" || ch == "t")
                        {
                            arr[5] = "t";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[7] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << arr[5] << arr[6] << arr[7];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question." << endl;
                            }
                        }
                    }
                }
                else if (i == 1)
                {
                    int count = 0;

                    cout << endl
                         << endl
                         << data << endl;
                    for (int j = 0; j < 4 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "C" || ch == "c")
                        {
                            arr[0] = "C";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "H" || ch == "h")
                        {
                            arr[1] = "h";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "I" || ch == "i")
                        {
                            arr[2] = "i";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[3] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[4] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question.";
                            }
                        }
                    }
                }
                else if (i == 2)
                {
                    count = 0;
                    // i = 0;
                    cout << endl
                         << endl
                         << data << endl;
                    for (int j = 0; j < 4 && count < 5; j++)
                    {
                        if (j == 0)
                        {
                            cout << "\nEnter Letter : ";
                        }
                        else
                        {
                            cout << "\nEnter Next Letter : ";
                        }

                        cin >> ch;
                        cout << endl;
                        if (ch == "I" || ch == "i")
                        {
                            arr[0] = "I", arr[3] = "i";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "N" || ch == "n")
                        {
                            arr[1] = "n";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "D" || ch == "d")
                        {
                            arr[2] = "d";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else if (ch == "A" || ch == "a")
                        {
                            arr[4] = "a";
                            cout << "You Entered Correct Letter : " << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];
                        }
                        else
                        {
                            count++;
                            j--;
                            counter++;
                            if (count < 5)
                            {
                                cout << "You Entered Wrong Letter. You Have " << 5 - count << "-Chances Left, Try Again! ";
                            }
                            else
                            {
                                cout << "You Entered Wrong Letter. You Have No Chances Left For This Question.";
                            }
                        }
                    }
                }
                auto end_time = chrono::steady_clock::now();
                auto elapsed_time = chrono::duration_cast<chrono::seconds>(end_time - start_time).count();

                cout << "\nTime taken for this question: " << elapsed_time << " seconds\n";

                if (elapsed_time > 30)
                {
                    cout << "Time's up! Moving on to the next question.\n";
                    counter += 5;
                }
                else
                {

                    this_thread::sleep_for(chrono::seconds(2));
                }
            }
            if (counter >= 10)
            {

                cout << "\n\nOh no " << uname << "! You Lose This Guessing Game.\n";
            }
            else
            {
                cout << "\n\nCongratulations " << uname << "! You Win This Guessing Game.\n";
            }
        }
        else
        {
            cout << "You Select Wrong Category. Please try again!\n";
            wrong = true;
        }
    }

    // if (counter >= 10)
    // {

    //     cout << "\n\nOh no " << uname << "! You Lose This Guessing Game.\n";
    // }
    // else
    // {
    //     cout << "\n\nCongratulations " << uname << "! You Win This Guessing Game.\n";
    // }

    return 0;
}