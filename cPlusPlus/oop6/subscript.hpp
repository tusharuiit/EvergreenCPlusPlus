
class subscript
{
	private :
		int m_value[10] ;
	protected :

	public :
		int& operator[](int index);
		int& getter(int index);
};
