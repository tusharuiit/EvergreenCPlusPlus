#include"salary.h"
class person
{
	private :
		float m_height ;

	protected :

	public :
		person();
		person(float m_height);

		virtual ~person();
		
		person(const person& other);

		person& operator=(const person& other);

		float getter();
		void setter(float value);

		operator float();

		operator salary();
};
