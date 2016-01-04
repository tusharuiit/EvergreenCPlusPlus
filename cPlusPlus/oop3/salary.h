#include<iostream>
class salary
{
	private :
		int m_sal ;

	protected :

	public :
		salary();
		salary(int value);

		~salary();

		salary(const salary& other);

		salary& operator=(const salary& other);

		void printsalary(const salary& value);
};
