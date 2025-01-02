#include "Agenda.cpp"
#include <array>

int main() {
	std::array<Day, 5> week{ Day("Lunes"), Day("Martes"), Day("Miercoles"), Day("Jueves"), Day("Viernes") };
	Agenda* agenda = new Agenda({ week });

	agenda->printAgenda();
	free(agenda);

	return 0;
}