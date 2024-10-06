#ifndef CONTACT_HPP
#include <string>
class Contact {
    public:
        Contact();
        ~Contact();
        std::string firstName;
        std::string lastName;
        std::string phoneNumber;
        std::string nickName;
        std::string darkestSecret;
};
#endif
