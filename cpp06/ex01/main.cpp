#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sys/time.h>

long			get_time()
{
		struct timeval time;

		gettimeofday(&time, NULL);
		return (time.tv_usec / 1000);
}

typedef	struct d {
	std::string *s1,*s2;
	int			*value;
	char		*inRaw;
}				Data;

std::string		getRndStr() {
	int length = rand() % 111;
	std::string ret("");

	for (int i = 0; i < length; i++) {
		ret += static_cast<char>(rand() % 26 + 97);
	}
	return ret;
}

void			* serialize() {
	char * raw = new char[sizeof(std::string) * 2 + sizeof(int)];

	new (raw) std::string(getRndStr());
	new (raw + sizeof(std::string)) int(rand() % 100000);
	new (raw + sizeof(std::string) + sizeof(int)) std::string(getRndStr());
	std::cout << "Serialize" << std::endl;
	std::cout << *reinterpret_cast<std::string *>(raw) << " | "
	<< *reinterpret_cast<int*>(raw + sizeof(std::string)) << " | "
	<< *reinterpret_cast<std::string *>(raw + sizeof(std::string) + sizeof(int)) << std::endl;

	return reinterpret_cast<void *>(raw);
}

Data			* deserialize(void * raw) {
	Data * ret = new Data;
	char * inRaw;

	inRaw = reinterpret_cast<char *>(raw);
	ret->s1 = reinterpret_cast<std::string * >(raw);
	ret->value = reinterpret_cast<int*>(inRaw + sizeof(std::string));
	ret->s2 = reinterpret_cast<std::string *>(inRaw + sizeof(std::string) + sizeof(int));

	ret->inRaw = inRaw;
	return ret;
}

int				main()
{
	Data * data;
	srand(get_time());
	data = deserialize(serialize());

	std::cout << "_______________" << std::endl;
	std::cout << "Deserialization" << std::endl;
	std::cout << *data->s1 << " | " << *data->value << " | " << *data->s2 << std::endl;

	data->s1->~basic_string();
	data->s2->~basic_string();
	delete [] data->inRaw;
	delete data;
	return 0;
}
