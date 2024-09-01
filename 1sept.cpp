class Person
{
public:
    string name, gender;
    int age;

    string uppercase_name()
    {
        string upper_name = name;
        for(char &c: upper_name)
        {
            c = toupper(c);
        }
        return upper_name;
    }

    string uppercase_gender()
    {
        string upper_gender = gender;
        for(char &c: upper_gender)
        {
            c = toupper(c);
        }
        return upper_gender;
    }
};
