class class2
{
	private :
		int m_beauty_index ;
	protected :

	public :
//		class2() ;
		class2 ( int beauty_index ) ;
		class2& operator=(const class2& other){return *this ;}
//		virtual ~class2();

//		getter function
		int getter1();

//		setter function
		void setter1(int value_beauty_index);

//		friend function
		friend int get_beauty(class2& object)
		{
			return object.m_beauty_index ;
		}
};
