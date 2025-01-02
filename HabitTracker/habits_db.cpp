#include "include/sqlite3.h"
#include <iostream>

class DBManagement {
private:
	std::string nameDB;
	sqlite3 *DBManager;

public:
	DBManagement(std::string name) : nameDB(name) {
		this->DBManager = nullptr;
	}

	void openDB() {
		int status = 0;
		status = sqlite3_open_v2(this->nameDB.c_str(), &(this->DBManager),);
		if (status == SQLITE_OK) {
			std::cout << "Conexion con la base de datos establecida correctamente." << std::endl;
		}
		else {
			std::cout << "Ocurrio un error al intentar establecer la conexion con la base de datos." << std::endl;
		}
	}

	int getData() {
		int status = 0;
		std::string statement{ "" };

		status = sqlite3_exec(DBManager, statement.c_str(),,);
	}
};