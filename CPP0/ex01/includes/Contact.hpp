#ifndef CONTACT_HPP
#include <string>
class Contact {
    public:
        Contact();
        ~Contact();
        void setFirstName(std::string firstName);
        void setLastName(std::string lastName);
        void setPhoneNumber(std::string phoneNumber);
        void setNickName(std::string nickName);
        void setDarkestSecret(std::string darkestSecret);
        std::string getFirstName();
        std::string getLastName();
        std::string getPhoneNumber();
        std::string getNickName();
        std::string getDarkestSecret();
    private:
        std::string _firstName;
        std::string _lastName;
        std::string _phoneNumber;
        std::string _nickName;
        std::string _darkestSecret;
};
#endif
