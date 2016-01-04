class arith
{
	private :
		int m_value ;
	protected :

	public :
		arith(int value);	
		friend bool operator==(const arith& other1, const arith& other2)
		{
			return (other1.m_value == other2.m_value);
		}
		friend bool operator!=(const arith& other1, const arith& other2)
		{
			return (other1.m_value != other2.m_value);
		}
		friend bool operator>(const arith& other1, const arith& other2)
		{
			return (other1.m_value > other2.m_value);
		}
		friend bool operator<(const arith& other1, const arith& other2)
		{
			return (other1.m_value < other2.m_value);
		}
		friend bool operator>=(const arith& other1, const arith& other2)
		{
			return (other1.m_value >= other2.m_value);
		}
		friend bool operator<=(const arith& other1, const arith& other2)
		{
			return (other1.m_value <= other2.m_value);
		}
};
