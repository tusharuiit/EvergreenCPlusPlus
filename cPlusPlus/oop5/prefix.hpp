class prefix
{
	private :
		int m_value ;
	protected :

	public :
		prefix();
		~prefix();
		prefix(int value);
		prefix(const prefix& other);

//		prefix& operator=(const prefix& other);

		int getter();

		prefix& operator++();

		prefix operator--(int);
};
