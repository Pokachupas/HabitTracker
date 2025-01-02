#include <array>
#include <chrono>
#include <algorithm>
#include "Day.cpp"
#include "habits_db.cpp"

class Agenda {
private:
	const std::string route{"data.db"};
	std::array<Day, 5> workDays;
	DBManagement manager;
	
public:
	Agenda(std::array<Day, 5> workDays) : workDays(workDays), manager(DBManagement(this->route)){
		this->manager.openDB();
		std::cout << "Se ha creado una Agenda." << std::endl;
	}

	void addDay() {

	}

	void printAgenda() {
		for (auto day : this->workDays) {
			std::cout << day.getDay() << std::endl;
		}
	}
};