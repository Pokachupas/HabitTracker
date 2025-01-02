#include <vector>
#include "Habit.cpp"

class Day {
private:
	std::string day;
	std::vector<Habit> habits;
	int freeSpaces;
	int totalSpaces;

public:

	Day(std::string day) : day(day) {
		this->freeSpaces = 16;
		this->totalSpaces = 16;
	}

	void addHabit(Habit habit) {
		std::string newHabit = habit.getDescription();
		for (Habit h : habits) {
			if (h.getDescription() == newHabit) {
				std::cout << "El habito ya existe. No se modifico la agenda." << std::endl;
				return;
			}
		}
	}

	std::string getDay() {
		return this->day;
	}

};