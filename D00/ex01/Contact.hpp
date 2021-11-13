#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact {

public:
	
	Contact(std::string fname, std::string lname, std::string nname, std::string phone, std::string secret);
	~Contact(void);

	std::string getFirstname(void) const;
	std::string getLastname(void) const;
	std::string getNickname(void) const;
	std::string getPhone_number(void) const;
	std::string getDarkest_secret(void) const;

	void		setFirstname(std::string fname);
	void		setLastname(std::string fname);
	void		setNickname(std::string nname);
	void		setPhone_number(std::string phonenum);
	void		setDarkest_secret(std::string secret);



private:

	std::string	_firstname;
	std::string _lastname;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

};

#endif
