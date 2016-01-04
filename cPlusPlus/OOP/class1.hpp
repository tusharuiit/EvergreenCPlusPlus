class class1
{
	private :
		int m_beauty_index ;
	protected :

	public :
//		class1() ;
		class1 ( int beauty_index ) ;
		class1& operator=(const class1& other){return *this ;}
//		virtual ~class1();

//		getter function
		int getter1();

//		setter function
		void setter1(int value_beauty_index);

//		friend function
	friend int get_beauty(class1& object)
	{
		return object.m_beauty_index ;
	}

//		overloading the + operator, class1 + class2 should return class 1
	friend class1 operator+(const class1& object1, const class1& object2 ) ;
};

//		overloading the + operator, class1 + class2 should return class 1
	class1 operator+(const class1& object1, const class1& object2 )
	{
		class1 temp(0) ;
//			temp.m_beauty_index = object1.m_beauty_index + object2.m_beauty_index ;
//		return temp ;
	}
