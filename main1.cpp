//#include <sqlite3.h>
//#include <iostream>
//
//static int callback(void* NotUsed, int argc, char** argv, char** azColName)
//{
//	int i;
//	for (i = 0; i < argc; i++)
//	{
//		printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
//	}
//	printf("\n");
//	return 0;
//}
//
//int main(int argc, char** argv)
//{
//	auto a = sqlite3_libversion();
//
//	std::cout << a << std::endl;
//
//	sqlite3* DB;
//	std::string sql = "CREATE TABLE PERSON("
//		"ID INT PRIMARY KEY     NOT NULL, "
//		"NAME           TEXT    NOT NULL, "
//		"SURNAME          TEXT     NOT NULL, "
//		"AGE            INT     NOT NULL, "
//		"ADDRESS        CHAR(50), "
//		"SALARY         REAL );";
//
//	int exit = 0;
//	exit = sqlite3_open("example.db", &DB);
//
//	char* messaggeError;
//	exit = sqlite3_exec(DB, sql.c_str(), NULL, 0, &messaggeError);
//
//	if (exit != SQLITE_OK)
//	{
//		std::cerr << "Error Create Table" << std::endl;
//		sqlite3_free(messaggeError);
//	}
//	else
//		std::cout << "Table created Successfully" << std::endl;
//	sqlite3_close(DB);
//
//	return (0);
//}
