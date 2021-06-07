#include <chrono>
#ifndef TIMECOUNTER_H
#define TIMECOUNTER_H

class TimeCount // клас TimeCount - для збірання статистики затраченого часу
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	TimeCount() : m_beg(clock_t::now())
	{

	}
	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}

};

#endif
