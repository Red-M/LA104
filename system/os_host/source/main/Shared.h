//Conflicting method: BIOS::LCD::Print$5
//Conflicting method: BIOS::LCD::Print$5
// Automatically generated by exports.js

uint32_t GetProcAddress(char* symbol)
{
  uint32_t hash = 5381;
  uint8_t c;
  while ((c = *symbol++) != 0)
    hash = hash*37 + c;

  switch (hash & 0x0000ffff)
  {
    case 0x000046de: return (uint32_t)sprintf;
    case 0x00002057: return (uint32_t)vsprintf;
    case 0x00002023: return (uint32_t)static_cast<void(*)(CRect const&, unsigned long, unsigned long)>(GUI::Background); //_ZN3GUI10BackgroundERK5CRectmm
    case 0x00007eba: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(GUI::Window); //_ZN3GUI6WindowERK5CRectt
    case 0x00009955: return (uint32_t)static_cast<char*(*)()>(BIOS::OS::GetArgument); //_ZN4BIOS2OS11GetArgumentEv
    case 0x00003cf9: return (uint32_t)static_cast<bool(*)()>(BIOS::OS::HasArgument); //_ZN4BIOS2OS11HasArgumentEv
    case 0x0000daaa: return (uint32_t)static_cast<void(*)(char*)>(BIOS::OS::SetArgument); //_ZN4BIOS2OS11SetArgumentEPc
    case 0x00009001: return (uint32_t)static_cast<void(*)(unsigned long)>(BIOS::OS::EnableInterrupts); //_ZN4BIOS2OS16EnableInterruptsEm
    case 0x00008cd4: return (uint32_t)static_cast<uint32_t(*)()>(BIOS::OS::DisableInterrupts); //_ZN4BIOS2OS17DisableInterruptsEv
    case 0x000007cc: return (uint32_t)BIOS::OS::GetInterruptVector;
    case 0x00003cbf: return (uint32_t)static_cast<void(*)(BIOS::OS::EInterruptVector, void (*)())>(BIOS::OS::SetInterruptVector); //_ZN4BIOS2OS18SetInterruptVectorENS0_16EInterruptVectorEPFvvE
#if defined(DS203) || defined(DS213)
    case 0x00005afd: return (uint32_t)static_cast<int(*)()>(BIOS::ADC::GetPointer); //_ZN4BIOS3ADC10GetPointerEv
    case 0x00006f3a: return (uint32_t)static_cast<void(*)(BIOS::ADC::EInput, BIOS::ADC::ECouple, BIOS::ADC::EResolution, int)>(BIOS::ADC::ConfigureInput); //_ZN4BIOS3ADC14ConfigureInputENS0_6EInputENS0_7ECoupleENS0_11EResolutionEi
    case 0x00009bd3: return (uint32_t)static_cast<void(*)(int, int, BIOS::ADC::ETriggerType, BIOS::ADC::EInput)>(BIOS::ADC::ConfigureTrigger); //_ZN4BIOS3ADC16ConfigureTriggerEiiNS0_12ETriggerTypeENS0_6EInputE
    case 0x0000e2eb: return (uint32_t)static_cast<void(*)(float)>(BIOS::ADC::ConfigureTimebase); //_ZN4BIOS3ADC17ConfigureTimebaseEf
    case 0x0000c656: return (uint32_t)BIOS::ADC::Get;
    case 0x00004d2c: return (uint32_t)static_cast<bool(*)(bool)>(BIOS::ADC::Enable); //_ZN4BIOS3ADC6EnableEb
    case 0x000083ed: return (uint32_t)static_cast<bool(*)()>(BIOS::ADC::Enabled); //_ZN4BIOS3ADC7EnabledEv
    case 0x00009462: return (uint32_t)static_cast<void(*)(int)>(BIOS::ADC::Restart); //_ZN4BIOS3ADC7RestartEi
    case 0x00006300: return (uint32_t)BIOS::ADC::GetState;
    case 0x00004740: return (uint32_t)static_cast<int(*)()>(BIOS::DAC::GetFrequency); //_ZN4BIOS3DAC12GetFrequencyEv
    case 0x0000fdaf: return (uint32_t)static_cast<void(*)(int)>(BIOS::DAC::SetFrequency); //_ZN4BIOS3DAC12SetFrequencyEi
    case 0x0000fca4: return (uint32_t)static_cast<int(*)()>(BIOS::DAC::GetDuty); //_ZN4BIOS3DAC7GetDutyEv
    case 0x0000df23: return (uint32_t)static_cast<void(*)(int)>(BIOS::DAC::SetDuty); //_ZN4BIOS3DAC7SetDutyEi
    case 0x00000706: return (uint32_t)static_cast<void(*)(BIOS::DAC::EMode, unsigned short*, int)>(BIOS::DAC::SetMode); //_ZN4BIOS3DAC7SetModeENS0_5EModeEPti
#endif
    case 0x0000ffe4: return (uint32_t)static_cast<void(*)(char const*, ...)>(BIOS::DBG::Print); //_ZN4BIOS3DBG5PrintEPKcz
    case 0x0000758f: return (uint32_t)static_cast<ui32(*)()>(BIOS::FAT::GetFileSize); //_ZN4BIOS3FAT11GetFileSizeEv
    case 0x000008ad: return (uint32_t)static_cast<void*(*)()>(BIOS::FAT::GetSharedBuffer); //_ZN4BIOS3FAT15GetSharedBufferEv
    case 0x0000a6b5: return (uint32_t)static_cast<void(*)(void*)>(BIOS::FAT::SetSharedBuffer); //_ZN4BIOS3FAT15SetSharedBufferEPv
    case 0x00004f66: return (uint32_t)static_cast<BIOS::FAT::EResult(*)()>(BIOS::FAT::Init); //_ZN4BIOS3FAT4InitEv
    case 0x00009148: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(char const*, unsigned char)>(BIOS::FAT::Open); //_ZN4BIOS3FAT4OpenEPKch
    case 0x000044e4: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(unsigned char*)>(BIOS::FAT::Read); //_ZN4BIOS3FAT4ReadEPh
    case 0x0000b3a1: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(unsigned long)>(BIOS::FAT::Seek); //_ZN4BIOS3FAT4SeekEm
    case 0x0000f0a8: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(int)>(BIOS::FAT::Close); //_ZN4BIOS3FAT5CloseEi
    case 0x0000f0b5: return (uint32_t)static_cast<BIOS::FAT::EResult(*)()>(BIOS::FAT::Close); //_ZN4BIOS3FAT5CloseEv
    case 0x0000c6c0: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(unsigned char*)>(BIOS::FAT::Write); //_ZN4BIOS3FAT5WriteEPh
    case 0x000034ef: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(char*)>(BIOS::FAT::OpenDir); //_ZN4BIOS3FAT7OpenDirEPc
    case 0x0000deaf: return (uint32_t)static_cast<BIOS::FAT::EResult(*)(BIOS::FAT::TFindFile*)>(BIOS::FAT::FindNext); //_ZN4BIOS3FAT8FindNextEPNS0_9TFindFileE
    case 0x00000b63: return (uint32_t)static_cast<BIOS::KEY::EKey(*)()>(BIOS::KEY::GetKey); //_ZN4BIOS3KEY6GetKeyEv
    case 0x00008f74: return (uint32_t)static_cast<void(*)(unsigned short*, int)>(BIOS::LCD::BufferRead); //_ZN4BIOS3LCD10BufferReadEPti
    case 0x00000cc5: return (uint32_t)static_cast<uint16_t(*)()>(BIOS::LCD::BufferRead); //_ZN4BIOS3LCD10BufferReadEv
    case 0x00000430: return (uint32_t)static_cast<void(*)(CRect const&)>(BIOS::LCD::BufferBegin); //_ZN4BIOS3LCD11BufferBeginERK5CRect
    case 0x0000d8f4: return (uint32_t)static_cast<void(*)(unsigned short*, int)>(BIOS::LCD::BufferWrite); //_ZN4BIOS3LCD11BufferWriteEPti
    case 0x0000f243: return (uint32_t)static_cast<void(*)(unsigned short)>(BIOS::LCD::BufferWrite); //_ZN4BIOS3LCD11BufferWriteEt
    case 0x0000ff2f: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(BIOS::LCD::Bar); //_ZN4BIOS3LCD3BarERK5CRectt
    case 0x0000e34c: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned short)>(BIOS::LCD::Bar); //_ZN4BIOS3LCD3BarEiiiit
    case 0x00003e5e: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char const*)>(BIOS::LCD::Draw); //_ZN4BIOS3LCD4DrawEiittPKc
    case 0x00005994: return (uint32_t)static_cast<void(*)(unsigned short)>(BIOS::LCD::Clear); //_ZN4BIOS3LCD5ClearEt
    case 0x0000b8c2: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char const*)>(BIOS::LCD::Print); //_ZN4BIOS3LCD5PrintEiittPKc
    case 0x00009d4b: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char*)>(BIOS::LCD::Print); //_ZN4BIOS3LCD5PrintEiittPc
    case 0x000080db: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char)>(BIOS::LCD::Print); //_ZN4BIOS3LCD5PrintEiittc
    case 0x00008063: return (uint32_t)static_cast<int(*)(int, int, unsigned short, unsigned short, char const*, ...)>(BIOS::LCD::Printf); //_ZN4BIOS3LCD6PrintfEiittPKcz
    case 0x00002206: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned int)>(BIOS::LCD::Shadow); //_ZN4BIOS3LCD6ShadowEiiiij
    case 0x00000509: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned short const*, int)>(BIOS::LCD::Pattern); //_ZN4BIOS3LCD7PatternEiiiiPKti
    case 0x000085ac: return (uint32_t)static_cast<uint16_t(*)(int, int)>(BIOS::LCD::GetPixel); //_ZN4BIOS3LCD8GetPixelEii
    case 0x0000698f: return (uint32_t)static_cast<void(*)(CPoint const&, unsigned short)>(BIOS::LCD::PutPixel); //_ZN4BIOS3LCD8PutPixelERK6CPointt
    case 0x0000a105: return (uint32_t)static_cast<void(*)(int, int, unsigned short)>(BIOS::LCD::PutPixel); //_ZN4BIOS3LCD8PutPixelEiit
    case 0x00007604: return (uint32_t)static_cast<void(*)()>(BIOS::LCD::BufferEnd); //_ZN4BIOS3LCD9BufferEndEv
    case 0x0000850d: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(BIOS::LCD::Rectangle); //_ZN4BIOS3LCD9RectangleERK5CRectt
    case 0x0000f4c2: return (uint32_t)static_cast<void(*)(CRect const&, unsigned short)>(BIOS::LCD::RoundRect); //_ZN4BIOS3LCD9RoundRectERK5CRectt
    case 0x0000ba0f: return (uint32_t)static_cast<void(*)(int, int, int, int, unsigned short)>(BIOS::LCD::RoundRect); //_ZN4BIOS3LCD9RoundRectEiiiit
    case 0x000044d6: return (uint32_t)static_cast<uintptr_t(*)(BIOS::SYS::EAttribute)>(BIOS::SYS::GetAttribute); //_ZN4BIOS3SYS12GetAttributeENS0_10EAttributeE
    case 0x0000c701: return (uint32_t)static_cast<void(*)(int)>(BIOS::SYS::Beep); //_ZN4BIOS3SYS4BeepEi
    case 0x00005757: return (uint32_t)static_cast<void(*)(int)>(BIOS::SYS::DelayMs); //_ZN4BIOS3SYS7DelayMsEi
    case 0x00003867: return (uint32_t)static_cast<int(*)(unsigned long)>(BIOS::SYS::Execute); //_ZN4BIOS3SYS7ExecuteEm
    case 0x000080a4: return (uint32_t)static_cast<uint32_t(*)()>(BIOS::SYS::GetTick); //_ZN4BIOS3SYS7GetTickEv
    case 0x0000c355: return (uint32_t)static_cast<bool(*)(char*)>(BIOS::SYS::LoadFpga); //_ZN4BIOS3SYS8LoadFpgaEPc
#if !defined(DISABLE_USB)
    case 0x00004de1: return (uint32_t)static_cast<void(*)(void*, void*, void*, void*, void (**)(), void (**)(), void (**)(), void (*)())>(BIOS::USB::Initialize); //_ZN4BIOS3USB10InitializeEPvS1_S1_S1_PPFvvES4_S4_S3_
    case 0x0000148c: return (uint32_t)static_cast<void(*)()>(BIOS::USB::InitializeMass); //_ZN4BIOS3USB14InitializeMassEv
    case 0x00005b72: return (uint32_t)static_cast<void(*)(int)>(BIOS::USB::InitializeFinish); //_ZN4BIOS3USB16InitializeFinishEi
    case 0x0000c9d6: return (uint32_t)static_cast<void(*)()>(BIOS::USB::Enable); //_ZN4BIOS3USB6EnableEv
    case 0x000029c0: return (uint32_t)static_cast<void(*)()>(BIOS::USB::Disable); //_ZN4BIOS3USB7DisableEv
#endif
#if defined(LA104)
    case 0x000005e5: return (uint32_t)static_cast<int(*)(BIOS::GPIO::EPin)>(BIOS::GPIO::AnalogRead); //_ZN4BIOS4GPIO10AnalogReadENS0_4EPinE
    case 0x00006d86: return (uint32_t)static_cast<void(*)(BIOS::GPIO::EPin, int)>(BIOS::GPIO::AnalogWrite); //_ZN4BIOS4GPIO11AnalogWriteENS0_4EPinEi
    case 0x00005476: return (uint32_t)static_cast<bool(*)(BIOS::GPIO::EPin)>(BIOS::GPIO::DigitalRead); //_ZN4BIOS4GPIO11DigitalReadENS0_4EPinE
    case 0x00007bbc: return (uint32_t)static_cast<void(*)(BIOS::GPIO::EPin, bool)>(BIOS::GPIO::DigitalWrite); //_ZN4BIOS4GPIO12DigitalWriteENS0_4EPinEb
    case 0x0000916d: return (uint32_t)static_cast<bool(*)(unsigned char, unsigned char)>(BIOS::GPIO::I2C::RequestFrom); //_ZN4BIOS4GPIO3I2C11RequestFromEhh
    case 0x00000887: return (uint32_t)static_cast<bool(*)(bool)>(BIOS::GPIO::I2C::EndTransmission); //_ZN4BIOS4GPIO3I2C15EndTransmissionEb
    case 0x0000e295: return (uint32_t)static_cast<bool(*)(unsigned char)>(BIOS::GPIO::I2C::BeginTransmission); //_ZN4BIOS4GPIO3I2C17BeginTransmissionEh
    case 0x0000f648: return (uint32_t)static_cast<uint8_t(*)()>(BIOS::GPIO::I2C::Read); //_ZN4BIOS4GPIO3I2C4ReadEv
    case 0x00009ffe: return (uint32_t)static_cast<bool(*)(unsigned char)>(BIOS::GPIO::I2C::Write); //_ZN4BIOS4GPIO3I2C5WriteEh
    case 0x00008ee3: return (uint32_t)static_cast<uint8_t(*)()>(BIOS::GPIO::UART::Read); //_ZN4BIOS4GPIO4UART4ReadEv
    case 0x0000ee78: return (uint32_t)static_cast<void(*)(int, BIOS::GPIO::UART::EConfig)>(BIOS::GPIO::UART::Setup); //_ZN4BIOS4GPIO4UART5SetupEiNS1_7EConfigE
    case 0x0000ae65: return (uint32_t)static_cast<void(*)(unsigned char)>(BIOS::GPIO::UART::Write); //_ZN4BIOS4GPIO4UART5WriteEh
    case 0x0000e98d: return (uint32_t)static_cast<bool(*)()>(BIOS::GPIO::UART::Available); //_ZN4BIOS4GPIO4UART9AvailableEv
    case 0x0000ddad: return (uint32_t)static_cast<void(*)(BIOS::GPIO::EPin, BIOS::GPIO::EMode)>(BIOS::GPIO::PinMode); //_ZN4BIOS4GPIO7PinModeENS0_4EPinENS0_5EModeE
#endif
#if defined(USE_FLASHING_SUPPORT)
    case 0x00000b9e: return (uint32_t)static_cast<void(*)()>(BIOS::MEMORY::LinearStart); //_ZN4BIOS6MEMORY11LinearStartEv
    case 0x0000493a: return (uint32_t)static_cast<bool(*)()>(BIOS::MEMORY::LinearFinish); //_ZN4BIOS6MEMORY12LinearFinishEv
    case 0x0000cbce: return (uint32_t)static_cast<bool(*)(unsigned long, unsigned char*, int)>(BIOS::MEMORY::LinearProgram); //_ZN4BIOS6MEMORY13LinearProgramEmPhi
    case 0x0000807e: return (uint32_t)static_cast<void*(*)()>(BIOS::MEMORY::GetSharedBuffer); //_ZN4BIOS6MEMORY15GetSharedBufferEv
    case 0x0000f7ea: return (uint32_t)static_cast<void(*)(void*)>(BIOS::MEMORY::SetSharedBuffer); //_ZN4BIOS6MEMORY15SetSharedBufferEPv
#endif
    default: return 0;
  }
}

