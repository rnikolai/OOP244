#ifndef ICT_NONPERISHABLE_H__
#define ICT_NONPERISHABLE_H__

#include "Item.h"
#include "Error.h"
// ict namespace
namespace ict {
	class NonPerishable : public Item {
		//private
		Error m_err;

	protected:
		bool ok() const;//ok returns true if m_err is clear and has no error message.
		void error(const char* message);//error sets the error message of m_err to the incoming argument �message�.
		virtual char signature()const;//Returns the record tag of the NonPershable class to be written in a file, that is �N�; (it returns �N�)
	
	public:
		// I/O
		std::fstream& save(std::fstream& file)const;
		std::fstream& load(std::fstream& file);
		std::ostream& write(std::ostream&, bool)const;
		std::istream& read(std::istream& is);
	};
}// ict namespace




#endif