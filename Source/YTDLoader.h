#pragma once
#include "stdafx.h"
#include <stdint.h>
namespace Mod_Hub_Base
{
	typedef uint32_t(__fastcall* fpFileReg)(uint32_t*, const char*, bool, const char*, bool);

	extern std::string StreamTextureFile, StreamTexture, TextureName, FooterName, submenubar1, selected2, backround;

	class YTDLoader
	{
		fpFileReg m_RegFile;
		uint32_t m_RetInt;
	public:

		YTDLoader();
		~YTDLoader();
		void init();
		uint32_t loadYtd(const std::string& path, const std::string& file);
	};
	inline std::unique_ptr<YTDLoader> g_YtdLoader;
}