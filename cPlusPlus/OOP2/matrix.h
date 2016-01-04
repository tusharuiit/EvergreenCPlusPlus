#include<array>
class matrix
{
	private :
		int m_value[4][5] ;
	protected :

	public :

		matrix();
		virtual ~matrix();
		
		matrix(const matrix& other);
		matrix& operator=(const matrix& other);

		int getter(int row, int col);
		int setter(int row, int col, int value);
		void print();
		void initialize();

		int& operator()(int row, int col);
};
