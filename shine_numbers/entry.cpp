#include <string>

void doSomeMagic( std::string str )
{
	int first{};
	int second{};

	for( std::size_t i = 0; i < 6; i++ )
	{
		if( str[i ] >= '0' && str[i ] <= '9' )
		{
			first += str[ i ] - '0';
		}else if( str[i ] >= 'A' && str[i ] <= 'C' )
		{
			first += 10 + ( str[ i ] - 'A' );
		}
	}

	reverse( str.begin( ), str.end( ) );

	for( std::size_t j = 0; j < 6; j++ )
	{
		if( str[ j ] >= '0' && str[ j ] <= '9' )
		{
			second += str[ j ] - '0';
		}
		else if( str[ j ] >= 'A' && str[ j ] <= 'C' )
		{
			second += 10 + ( str[ j ] - 'A' );
		}
	}

	if( first == second )
		printf( "shine number (.^^) \n" );
	else
		printf( "there is no shine number (T.T) \n" );

}

int main( )
{
	doSomeMagic( "0055237050A00" );
	doSomeMagic( "ABA98859978C0" );
	doSomeMagic( "6789110551234" );
	doSomeMagic( "0000007000000" );

	return 0;
}