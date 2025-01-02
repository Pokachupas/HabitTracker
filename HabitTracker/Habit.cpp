#include <iostream>

class Habit {
private:
	std::string description;
	int frecuencyDay;
	float hours; 

public:

	Habit(std::string description, int frecuencyDay=3, float hours=2) : description(description){
		if (frecuencyDay > 7) {
			std::cout << "Los dias invertidos se contabilizan por semana, no puedes poner mas de 7 dias." << std::endl;
			std::cout << "Se asignaran 3 días por defecto" << std::endl;
			this->frecuencyDay = 3;
		}
		else {
			this->frecuencyDay = frecuencyDay;
		}
		if (hours > 8) {
			std::cout << "No es recomendable hacer algo continuo por mas de 8 horas. Se asignaran 2 horas por defecto." << std::endl;
			this->hours = 2;
		}
		else {
			this->hours = hours;
		}
		std::cout << "Se ha creado el habito." << std::endl;
	}
	
	void changeDescription(std::string description) {
		if (description.size() < 3) {
			std::cout << "La descripción del hábito debe tener al menos 3 caracteres." << std::endl;
			return;
		}
		if (this->description == description) {
			std::cout << "El habito es el mismo. No ha habido cambios.";
		}
	}

	void changeHours(float hours) {
		if (hours > 8) {
			std::cout << "No es recomendable hacer algo continuo por más de 8 horas" << "\n";
			return;
		}
		this->hours = hours;
	}

	void changeFrecuencyDay(int frecuencyDay) {
		if (frecuencyDay > 7) {
			std::cout << "Los dias invertidos se contabilizan por semana, no puedes poner mas de 7 dias." << std::endl;
		}
		else {

		}
	}

	std::string getDescription() {
		return this->description;
	}
	
	int getFrecuencyDay() {
		return this->frecuencyDay;
	}

	float getHours() {
		return this->hours;
	}

	void printHabit() {
		std::cout << "\t" << this->description << "\n";
		std::cout << "Dias: " << this->frecuencyDay << "\n";
		std::cout << "Horas: " << this->hours << "\n";
	}
};