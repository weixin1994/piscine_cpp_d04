
#ifndef _DROID_HH_
# define _DROID_HH_

#include <string>
#include <cctype>

class Droid
{
	public:
		Droid(const std::string &id = "");
		Droid (const Droid &droid);
		~Droid();

		Droid& operator=(const Droid &droid);
		Droid& operator<<(size_t &energy);
		bool operator==(const Droid &droid) const;
		bool operator!=(const Droid &droid) const;

		std::string getId() const;
		size_t getEnergy() const;
		size_t getAttack() const;
		size_t getToughness() const;
		std::string *getStatus() const;
		void setId(std::string id);
		void setEnergy(size_t energy);
		void setStatus(std::string *status);

	private:
		std::string _id;
		size_t _energy;
		const size_t _attack;
		const size_t _toughness;
		std::string *_status;

};

std::ostream &operator<<(std::ostream &s, const Droid &droid);

#endif
