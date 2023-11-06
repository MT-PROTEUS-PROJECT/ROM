#pragma once

#include <model.hpp>
#include <array>

class ROM final : public vsm::model
{
public:
	static constexpr DWORD MODEL_KEY = 0x00001000;

private:

	using sel_pins = std::array<vsm::pin, 4>;
	using ws_pins = std::array<vsm::pin, 2>;
	using value_type = uint8_t;

private:

	sel_pins _pins_A;
	ws_pins _pins_S;
	ws_pins _pins_R;
	vsm::pin OE;
	vsm::pin F0;

public:
	ROM();

	VOID setup(IINSTANCE* inst, IDSIMCKT* dsim);
	VOID simulate(ABSTIME time, DSIMMODES mode);

	~ROM() = default;


};
