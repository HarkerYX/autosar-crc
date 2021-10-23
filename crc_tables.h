#include <cstdint>

namespace tables {
	/**
		CRC result width: 8 bits
		Polynomial: 0x1D
		Initial value: 0xFF
		Input data reflected: No
		Result data reflected: No
		XOR value: 0xFF
		Check: 0x4B
		Magic check: 0xC4h
	*/
	uint8_t constexpr crc8_SAE_J1850[256] =
	{
		0x00, 0x1D, 0x3A, 0x27, 0x74, 0x69, 0x4E, 0x53, 0xE8, 0xF5, 0xD2, 0xCF, 0x9C, 0x81, 0xA6, 0xBB,
		0xCD, 0xD0, 0xF7, 0xEA, 0xB9, 0xA4, 0x83, 0x9E, 0x25, 0x38, 0x1F, 0x02, 0x51, 0x4C, 0x6B, 0x76,
		0x87, 0x9A, 0xBD, 0xA0, 0xF3, 0xEE, 0xC9, 0xD4, 0x6F, 0x72, 0x55, 0x48, 0x1B, 0x06, 0x21, 0x3C,
		0x4A, 0x57, 0x70, 0x6D, 0x3E, 0x23, 0x04, 0x19, 0xA2, 0xBF, 0x98, 0x85, 0xD6, 0xCB, 0xEC, 0xF1,
		0x13, 0x0E, 0x29, 0x34, 0x67, 0x7A, 0x5D, 0x40, 0xFB, 0xE6, 0xC1, 0xDC, 0x8F, 0x92, 0xB5, 0xA8,
		0xDE, 0xC3, 0xE4, 0xF9, 0xAA, 0xB7, 0x90, 0x8D, 0x36, 0x2B, 0x0C, 0x11, 0x42, 0x5F, 0x78, 0x65,
		0x94, 0x89, 0xAE, 0xB3, 0xE0, 0xFD, 0xDA, 0xC7, 0x7C, 0x61, 0x46, 0x5B, 0x08, 0x15, 0x32, 0x2F,
		0x59, 0x44, 0x63, 0x7E, 0x2D, 0x30, 0x17, 0x0A, 0xB1, 0xAC, 0x8B, 0x96, 0xC5, 0xD8, 0xFF, 0xE2,
		0x26, 0x3B, 0x1C, 0x01, 0x52, 0x4F, 0x68, 0x75, 0xCE, 0xD3, 0xF4, 0xE9, 0xBA, 0xA7, 0x80, 0x9D,
		0xEB, 0xF6, 0xD1, 0xCC, 0x9F, 0x82, 0xA5, 0xB8, 0x03, 0x1E, 0x39, 0x24, 0x77, 0x6A, 0x4D, 0x50,
		0xA1, 0xBC, 0x9B, 0x86, 0xD5, 0xC8, 0xEF, 0xF2, 0x49, 0x54, 0x73, 0x6E, 0x3D, 0x20, 0x07, 0x1A,
		0x6C, 0x71, 0x56, 0x4B, 0x18, 0x05, 0x22, 0x3F, 0x84, 0x99, 0xBE, 0xA3, 0xF0, 0xED, 0xCA, 0xD7,
		0x35, 0x28, 0x0F, 0x12, 0x41, 0x5C, 0x7B, 0x66, 0xDD, 0xC0, 0xE7, 0xFA, 0xA9, 0xB4, 0x93, 0x8E,
		0xF8, 0xE5, 0xC2, 0xDF, 0x8C, 0x91, 0xB6, 0xAB, 0x10, 0x0D, 0x2A, 0x37, 0x64, 0x79, 0x5E, 0x43,
		0xB2, 0xAF, 0x88, 0x95, 0xC6, 0xDB, 0xFC, 0xE1, 0x5A, 0x47, 0x60, 0x7D, 0x2E, 0x33, 0x14, 0x09,
		0x7F, 0x62, 0x45, 0x58, 0x0B, 0x16, 0x31, 0x2C, 0x97, 0x8A, 0xAD, 0xB0, 0xE3, 0xFE, 0xD9, 0xC4, 
	};

	/**
		CRC result width: 8 bits
		Polynomial: 02F
		Initial value: 0xFF
		Input data reflected: No
		Result data reflected: No
		XOR value: 0xFF
		Check: 0xDF
		Magic check: 0x42
	*/
	uint8_t constexpr crc8_h2f[256] =
	{
		0x00, 0x2F, 0x5E, 0x71, 0xBC, 0x93, 0xE2, 0xCD, 0x57, 0x78, 0x09, 0x26, 0xEB, 0xC4, 0xB5, 0x9A,
		0xAE, 0x81, 0xF0, 0xDF, 0x12, 0x3D, 0x4C, 0x63, 0xF9, 0xD6, 0xA7, 0x88, 0x45, 0x6A, 0x1B, 0x34,
		0x73, 0x5C, 0x2D, 0x02, 0xCF, 0xE0, 0x91, 0xBE, 0x24, 0x0B, 0x7A, 0x55, 0x98, 0xB7, 0xC6, 0xE9,
		0xDD, 0xF2, 0x83, 0xAC, 0x61, 0x4E, 0x3F, 0x10, 0x8A, 0xA5, 0xD4, 0xFB, 0x36, 0x19, 0x68, 0x47,
		0xE6, 0xC9, 0xB8, 0x97, 0x5A, 0x75, 0x04, 0x2B, 0xB1, 0x9E, 0xEF, 0xC0, 0x0D, 0x22, 0x53, 0x7C,
		0x48, 0x67, 0x16, 0x39, 0xF4, 0xDB, 0xAA, 0x85, 0x1F, 0x30, 0x41, 0x6E, 0xA3, 0x8C, 0xFD, 0xD2,
		0x95, 0xBA, 0xCB, 0xE4, 0x29, 0x06, 0x77, 0x58, 0xC2, 0xED, 0x9C, 0xB3, 0x7E, 0x51, 0x20, 0x0F,
		0x3B, 0x14, 0x65, 0x4A, 0x87, 0xA8, 0xD9, 0xF6, 0x6C, 0x43, 0x32, 0x1D, 0xD0, 0xFF, 0x8E, 0xA1,
		0xE3, 0xCC, 0xBD, 0x92, 0x5F, 0x70, 0x01, 0x2E, 0xB4, 0x9B, 0xEA, 0xC5, 0x08, 0x27, 0x56, 0x79,
		0x4D, 0x62, 0x13, 0x3C, 0xF1, 0xDE, 0xAF, 0x80, 0x1A, 0x35, 0x44, 0x6B, 0xA6, 0x89, 0xF8, 0xD7,
		0x90, 0xBF, 0xCE, 0xE1, 0x2C, 0x03, 0x72, 0x5D, 0xC7, 0xE8, 0x99, 0xB6, 0x7B, 0x54, 0x25, 0x0A,
		0x3E, 0x11, 0x60, 0x4F, 0x82, 0xAD, 0xDC, 0xF3, 0x69, 0x46, 0x37, 0x18, 0xD5, 0xFA, 0x8B, 0xA4,
		0x05, 0x2A, 0x5B, 0x74, 0xB9, 0x96, 0xE7, 0xC8, 0x52, 0x7D, 0x0C, 0x23, 0xEE, 0xC1, 0xB0, 0x9F,
		0xAB, 0x84, 0xF5, 0xDA, 0x17, 0x38, 0x49, 0x66, 0xFC, 0xD3, 0xA2, 0x8D, 0x40, 0x6F, 0x1E, 0x31,
		0x76, 0x59, 0x28, 0x07, 0xCA, 0xE5, 0x94, 0xBB, 0x21, 0x0E, 0x7F, 0x50, 0x9D, 0xB2, 0xC3, 0xEC,
		0xD8, 0xF7, 0x86, 0xA9, 0x64, 0x4B, 0x3A, 0x15, 0x8F, 0xA0, 0xD1, 0xFE, 0x33, 0x1C, 0x6D, 0x42, 
	};

	/**
		CRC result width: 16 bits
		Polynomial: 0x1021
		Initial value: 0xFFFF
		Input data reflected: No
		Result data reflected: No
		XOR value: 0x0000
		Check:29B1h
		Magic check: 0x0000
	*/
	uint16_t constexpr crc16_CCITT_FALSE[256] =
	{
		0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50A5, 0x60C6, 0x70E7, 0x8108, 0x9129, 0xA14A, 0xB16B, 0xC18C, 0xD1AD, 0xE1CE, 0xF1EF,
		0x1231, 0x0210, 0x3273, 0x2252, 0x52B5, 0x4294, 0x72F7, 0x62D6, 0x9339, 0x8318, 0xB37B, 0xA35A, 0xD3BD, 0xC39C, 0xF3FF, 0xE3DE,
		0x2462, 0x3443, 0x0420, 0x1401, 0x64E6, 0x74C7, 0x44A4, 0x5485, 0xA56A, 0xB54B, 0x8528, 0x9509, 0xE5EE, 0xF5CF, 0xC5AC, 0xD58D,
		0x3653, 0x2672, 0x1611, 0x0630, 0x76D7, 0x66F6, 0x5695, 0x46B4, 0xB75B, 0xA77A, 0x9719, 0x8738, 0xF7DF, 0xE7FE, 0xD79D, 0xC7BC,
		0x48C4, 0x58E5, 0x6886, 0x78A7, 0x0840, 0x1861, 0x2802, 0x3823, 0xC9CC, 0xD9ED, 0xE98E, 0xF9AF, 0x8948, 0x9969, 0xA90A, 0xB92B,
		0x5AF5, 0x4AD4, 0x7AB7, 0x6A96, 0x1A71, 0x0A50, 0x3A33, 0x2A12, 0xDBFD, 0xCBDC, 0xFBBF, 0xEB9E, 0x9B79, 0x8B58, 0xBB3B, 0xAB1A,
		0x6CA6, 0x7C87, 0x4CE4, 0x5CC5, 0x2C22, 0x3C03, 0x0C60, 0x1C41, 0xEDAE, 0xFD8F, 0xCDEC, 0xDDCD, 0xAD2A, 0xBD0B, 0x8D68, 0x9D49,
		0x7E97, 0x6EB6, 0x5ED5, 0x4EF4, 0x3E13, 0x2E32, 0x1E51, 0x0E70, 0xFF9F, 0xEFBE, 0xDFDD, 0xCFFC, 0xBF1B, 0xAF3A, 0x9F59, 0x8F78,
		0x9188, 0x81A9, 0xB1CA, 0xA1EB, 0xD10C, 0xC12D, 0xF14E, 0xE16F, 0x1080, 0x00A1, 0x30C2, 0x20E3, 0x5004, 0x4025, 0x7046, 0x6067,
		0x83B9, 0x9398, 0xA3FB, 0xB3DA, 0xC33D, 0xD31C, 0xE37F, 0xF35E, 0x02B1, 0x1290, 0x22F3, 0x32D2, 0x4235, 0x5214, 0x6277, 0x7256,
		0xB5EA, 0xA5CB, 0x95A8, 0x8589, 0xF56E, 0xE54F, 0xD52C, 0xC50D, 0x34E2, 0x24C3, 0x14A0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
		0xA7DB, 0xB7FA, 0x8799, 0x97B8, 0xE75F, 0xF77E, 0xC71D, 0xD73C, 0x26D3, 0x36F2, 0x0691, 0x16B0, 0x6657, 0x7676, 0x4615, 0x5634,
		0xD94C, 0xC96D, 0xF90E, 0xE92F, 0x99C8, 0x89E9, 0xB98A, 0xA9AB, 0x5844, 0x4865, 0x7806, 0x6827, 0x18C0, 0x08E1, 0x3882, 0x28A3,
		0xCB7D, 0xDB5C, 0xEB3F, 0xFB1E, 0x8BF9, 0x9BD8, 0xABBB, 0xBB9A, 0x4A75, 0x5A54, 0x6A37, 0x7A16, 0x0AF1, 0x1AD0, 0x2AB3, 0x3A92,
		0xFD2E, 0xED0F, 0xDD6C, 0xCD4D, 0xBDAA, 0xAD8B, 0x9DE8, 0x8DC9, 0x7C26, 0x6C07, 0x5C64, 0x4C45, 0x3CA2, 0x2C83, 0x1CE0, 0x0CC1,
		0xEF1F, 0xFF3E, 0xCF5D, 0xDF7C, 0xAF9B, 0xBFBA, 0x8FD9, 0x9FF8, 0x6E17, 0x7E36, 0x4E55, 0x5E74, 0x2E93, 0x3EB2, 0x0ED1, 0x1EF0, 
	};

	/**
		CRC result width: 32 bits
		Polynomial: 0x04C11DB7
		Initial value: 0xFFFFFFFF
		Input data reflected: Yes
		Result data reflected: Yes
		XOR value: 0xFFFFFFFF
		Check: 0xCBF43926
		Magic check*: 0xDEBB20E3

		* To match the magic check value, the CRC must be appended in little endian format, i.e. low significant byte first. This is due to the reflections of the input and the result.
	*/
	uint32_t constexpr crc32_ethernet[256] =
	{
		0x00000000, 0x77073096, 0xEE0E612C, 0x990951BA, 0x076DC419, 0x706AF48F, 0xE963A535, 0x9E6495A3,
		0x0EDB8832, 0x79DCB8A4, 0xE0D5E91E, 0x97D2D988, 0x09B64C2B, 0x7EB17CBD, 0xE7B82D07, 0x90BF1D91,
		0x1DB71064, 0x6AB020F2, 0xF3B97148, 0x84BE41DE, 0x1ADAD47D, 0x6DDDE4EB, 0xF4D4B551, 0x83D385C7,
		0x136C9856, 0x646BA8C0, 0xFD62F97A, 0x8A65C9EC, 0x14015C4F, 0x63066CD9, 0xFA0F3D63, 0x8D080DF5,
		0x3B6E20C8, 0x4C69105E, 0xD56041E4, 0xA2677172, 0x3C03E4D1, 0x4B04D447, 0xD20D85FD, 0xA50AB56B,
		0x35B5A8FA, 0x42B2986C, 0xDBBBC9D6, 0xACBCF940, 0x32D86CE3, 0x45DF5C75, 0xDCD60DCF, 0xABD13D59,
		0x26D930AC, 0x51DE003A, 0xC8D75180, 0xBFD06116, 0x21B4F4B5, 0x56B3C423, 0xCFBA9599, 0xB8BDA50F,
		0x2802B89E, 0x5F058808, 0xC60CD9B2, 0xB10BE924, 0x2F6F7C87, 0x58684C11, 0xC1611DAB, 0xB6662D3D,
		0x76DC4190, 0x01DB7106, 0x98D220BC, 0xEFD5102A, 0x71B18589, 0x06B6B51F, 0x9FBFE4A5, 0xE8B8D433,
		0x7807C9A2, 0x0F00F934, 0x9609A88E, 0xE10E9818, 0x7F6A0DBB, 0x086D3D2D, 0x91646C97, 0xE6635C01,
		0x6B6B51F4, 0x1C6C6162, 0x856530D8, 0xF262004E, 0x6C0695ED, 0x1B01A57B, 0x8208F4C1, 0xF50FC457,
		0x65B0D9C6, 0x12B7E950, 0x8BBEB8EA, 0xFCB9887C, 0x62DD1DDF, 0x15DA2D49, 0x8CD37CF3, 0xFBD44C65,
		0x4DB26158, 0x3AB551CE, 0xA3BC0074, 0xD4BB30E2, 0x4ADFA541, 0x3DD895D7, 0xA4D1C46D, 0xD3D6F4FB,
		0x4369E96A, 0x346ED9FC, 0xAD678846, 0xDA60B8D0, 0x44042D73, 0x33031DE5, 0xAA0A4C5F, 0xDD0D7CC9,
		0x5005713C, 0x270241AA, 0xBE0B1010, 0xC90C2086, 0x5768B525, 0x206F85B3, 0xB966D409, 0xCE61E49F,
		0x5EDEF90E, 0x29D9C998, 0xB0D09822, 0xC7D7A8B4, 0x59B33D17, 0x2EB40D81, 0xB7BD5C3B, 0xC0BA6CAD,
		0xEDB88320, 0x9ABFB3B6, 0x03B6E20C, 0x74B1D29A, 0xEAD54739, 0x9DD277AF, 0x04DB2615, 0x73DC1683,
		0xE3630B12, 0x94643B84, 0x0D6D6A3E, 0x7A6A5AA8, 0xE40ECF0B, 0x9309FF9D, 0x0A00AE27, 0x7D079EB1,
		0xF00F9344, 0x8708A3D2, 0x1E01F268, 0x6906C2FE, 0xF762575D, 0x806567CB, 0x196C3671, 0x6E6B06E7,
		0xFED41B76, 0x89D32BE0, 0x10DA7A5A, 0x67DD4ACC, 0xF9B9DF6F, 0x8EBEEFF9, 0x17B7BE43, 0x60B08ED5,
		0xD6D6A3E8, 0xA1D1937E, 0x38D8C2C4, 0x4FDFF252, 0xD1BB67F1, 0xA6BC5767, 0x3FB506DD, 0x48B2364B,
		0xD80D2BDA, 0xAF0A1B4C, 0x36034AF6, 0x41047A60, 0xDF60EFC3, 0xA867DF55, 0x316E8EEF, 0x4669BE79,
		0xCB61B38C, 0xBC66831A, 0x256FD2A0, 0x5268E236, 0xCC0C7795, 0xBB0B4703, 0x220216B9, 0x5505262F,
		0xC5BA3BBE, 0xB2BD0B28, 0x2BB45A92, 0x5CB36A04, 0xC2D7FFA7, 0xB5D0CF31, 0x2CD99E8B, 0x5BDEAE1D,
		0x9B64C2B0, 0xEC63F226, 0x756AA39C, 0x026D930A, 0x9C0906A9, 0xEB0E363F, 0x72076785, 0x05005713,
		0x95BF4A82, 0xE2B87A14, 0x7BB12BAE, 0x0CB61B38, 0x92D28E9B, 0xE5D5BE0D, 0x7CDCEFB7, 0x0BDBDF21,
		0x86D3D2D4, 0xF1D4E242, 0x68DDB3F8, 0x1FDA836E, 0x81BE16CD, 0xF6B9265B, 0x6FB077E1, 0x18B74777,
		0x88085AE6, 0xFF0F6A70, 0x66063BCA, 0x11010B5C, 0x8F659EFF, 0xF862AE69, 0x616BFFD3, 0x166CCF45,
		0xA00AE278, 0xD70DD2EE, 0x4E048354, 0x3903B3C2, 0xA7672661, 0xD06016F7, 0x4969474D, 0x3E6E77DB,
		0xAED16A4A, 0xD9D65ADC, 0x40DF0B66, 0x37D83BF0, 0xA9BCAE53, 0xDEBB9EC5, 0x47B2CF7F, 0x30B5FFE9,
		0xBDBDF21C, 0xCABAC28A, 0x53B39330, 0x24B4A3A6, 0xBAD03605, 0xCDD70693, 0x54DE5729, 0x23D967BF,
		0xB3667A2E, 0xC4614AB8, 0x5D681B02, 0x2A6F2B94, 0xB40BBE37, 0xC30C8EA1, 0x5A05DF1B, 0x2D02EF8D,
	};

	/**
		CRC result width: 32 bits
		Polynomial: 0xF4ACFB13
		Initial value: 0xFFFFFFFF
		Input data reflected: Yes
		Result data reflected: Yes
		XOR value: 0xFFFFFFFF
		Check: 0x1697D06A
		Magic check*: 0x904CDDBF
		Hamming distance: 6, up to 4096 bytes (including CRC)

		* To match the magic check value, the CRC must be appended in little endian format, i.e. low significant byte first. This is due to the reflections of the input and the result.
	*/
	uint32_t constexpr crc32_F4ACFB13[256] =
	{
		0x00000000, 0x30850FF5, 0x610A1FEA, 0x518F101F, 0xC2143FD4, 0xF2913021, 0xA31E203E, 0x939B2FCB,
		0x159615F7, 0x25131A02, 0x749C0A1D, 0x441905E8, 0xD7822A23, 0xE70725D6, 0xB68835C9, 0x860D3A3C,
		0x2B2C2BEE, 0x1BA9241B, 0x4A263404, 0x7AA33BF1, 0xE938143A, 0xD9BD1BCF, 0x88320BD0, 0xB8B70425,
		0x3EBA3E19, 0x0E3F31EC, 0x5FB021F3, 0x6F352E06, 0xFCAE01CD, 0xCC2B0E38, 0x9DA41E27, 0xAD2111D2,
		0x565857DC, 0x66DD5829, 0x37524836, 0x07D747C3, 0x944C6808, 0xA4C967FD, 0xF54677E2, 0xC5C37817,
		0x43CE422B, 0x734B4DDE, 0x22C45DC1, 0x12415234, 0x81DA7DFF, 0xB15F720A, 0xE0D06215, 0xD0556DE0,
		0x7D747C32, 0x4DF173C7, 0x1C7E63D8, 0x2CFB6C2D, 0xBF6043E6, 0x8FE54C13, 0xDE6A5C0C, 0xEEEF53F9,
		0x68E269C5, 0x58676630, 0x09E8762F, 0x396D79DA, 0xAAF65611, 0x9A7359E4, 0xCBFC49FB, 0xFB79460E,
		0xACB0AFB8, 0x9C35A04D, 0xCDBAB052, 0xFD3FBFA7, 0x6EA4906C, 0x5E219F99, 0x0FAE8F86, 0x3F2B8073,
		0xB926BA4F, 0x89A3B5BA, 0xD82CA5A5, 0xE8A9AA50, 0x7B32859B, 0x4BB78A6E, 0x1A389A71, 0x2ABD9584,
		0x879C8456, 0xB7198BA3, 0xE6969BBC, 0xD6139449, 0x4588BB82, 0x750DB477, 0x2482A468, 0x1407AB9D,
		0x920A91A1, 0xA28F9E54, 0xF3008E4B, 0xC38581BE, 0x501EAE75, 0x609BA180, 0x3114B19F, 0x0191BE6A,
		0xFAE8F864, 0xCA6DF791, 0x9BE2E78E, 0xAB67E87B, 0x38FCC7B0, 0x0879C845, 0x59F6D85A, 0x6973D7AF,
		0xEF7EED93, 0xDFFBE266, 0x8E74F279, 0xBEF1FD8C, 0x2D6AD247, 0x1DEFDDB2, 0x4C60CDAD, 0x7CE5C258,
		0xD1C4D38A, 0xE141DC7F, 0xB0CECC60, 0x804BC395, 0x13D0EC5E, 0x2355E3AB, 0x72DAF3B4, 0x425FFC41,
		0xC452C67D, 0xF4D7C988, 0xA558D997, 0x95DDD662, 0x0646F9A9, 0x36C3F65C, 0x674CE643, 0x57C9E9B6,
		0xC8DF352F, 0xF85A3ADA, 0xA9D52AC5, 0x99502530, 0x0ACB0AFB, 0x3A4E050E, 0x6BC11511, 0x5B441AE4,
		0xDD4920D8, 0xEDCC2F2D, 0xBC433F32, 0x8CC630C7, 0x1F5D1F0C, 0x2FD810F9, 0x7E5700E6, 0x4ED20F13,
		0xE3F31EC1, 0xD3761134, 0x82F9012B, 0xB27C0EDE, 0x21E72115, 0x11622EE0, 0x40ED3EFF, 0x7068310A,
		0xF6650B36, 0xC6E004C3, 0x976F14DC, 0xA7EA1B29, 0x347134E2, 0x04F43B17, 0x557B2B08, 0x65FE24FD,
		0x9E8762F3, 0xAE026D06, 0xFF8D7D19, 0xCF0872EC, 0x5C935D27, 0x6C1652D2, 0x3D9942CD, 0x0D1C4D38,
		0x8B117704, 0xBB9478F1, 0xEA1B68EE, 0xDA9E671B, 0x490548D0, 0x79804725, 0x280F573A, 0x188A58CF,
		0xB5AB491D, 0x852E46E8, 0xD4A156F7, 0xE4245902, 0x77BF76C9, 0x473A793C, 0x16B56923, 0x263066D6,
		0xA03D5CEA, 0x90B8531F, 0xC1374300, 0xF1B24CF5, 0x6229633E, 0x52AC6CCB, 0x03237CD4, 0x33A67321,
		0x646F9A97, 0x54EA9562, 0x0565857D, 0x35E08A88, 0xA67BA543, 0x96FEAAB6, 0xC771BAA9, 0xF7F4B55C,
		0x71F98F60, 0x417C8095, 0x10F3908A, 0x20769F7F, 0xB3EDB0B4, 0x8368BF41, 0xD2E7AF5E, 0xE262A0AB,
		0x4F43B179, 0x7FC6BE8C, 0x2E49AE93, 0x1ECCA166, 0x8D578EAD, 0xBDD28158, 0xEC5D9147, 0xDCD89EB2,
		0x5AD5A48E, 0x6A50AB7B, 0x3BDFBB64, 0x0B5AB491, 0x98C19B5A, 0xA84494AF, 0xF9CB84B0, 0xC94E8B45,
		0x3237CD4B, 0x02B2C2BE, 0x533DD2A1, 0x63B8DD54, 0xF023F29F, 0xC0A6FD6A, 0x9129ED75, 0xA1ACE280,
		0x27A1D8BC, 0x1724D749, 0x46ABC756, 0x762EC8A3, 0xE5B5E768, 0xD530E89D, 0x84BFF882, 0xB43AF777,
		0x191BE6A5, 0x299EE950, 0x7811F94F, 0x4894F6BA, 0xDB0FD971, 0xEB8AD684, 0xBA05C69B, 0x8A80C96E,
		0x0C8DF352, 0x3C08FCA7, 0x6D87ECB8, 0x5D02E34D, 0xCE99CC86, 0xFE1CC373, 0xAF93D36C, 0x9F16DC99,
	};

	/**
		CRC result width: 64 bits
		Polynomial: 0x42F0E1EBA9EA3693
		Initial value: 0xFFFFFFFFFFFFFFFF
		Input data reflected: Yes
		Result data reflected: Yes
		XOR value: 0xFFFFFFFFFFFFFFFF
		Check: 0x995DC9BBDF1939FA
		Magic check*: 0x49958C9ABD7D353F
		Hamming distance: 4, up to almost 8 GB

		* To match the magic check value, the CRC must be appended in little endian format, i.e. low significant byte first. This is due to the reflections of the input and the result.
	*/
	uint64_t constexpr crc64_ECMA[256] =
	{
		0x0000000000000000, 0xB32E4CBE03A75F6F, 0xF4843657A840A05B, 0x47AA7AE9ABE7FF34, 0x7BD0C384FF8F5E33, 0xC8FE8F3AFC28015C, 0x8F54F5D357CFFE68, 0x3C7AB96D5468A107,
		0xF7A18709FF1EBC66, 0x448FCBB7FCB9E309, 0x0325B15E575E1C3D, 0xB00BFDE054F94352, 0x8C71448D0091E255, 0x3F5F08330336BD3A, 0x78F572DAA8D1420E, 0xCBDB3E64AB761D61,
		0x7D9BA13851336649, 0xCEB5ED8652943926, 0x891F976FF973C612, 0x3A31DBD1FAD4997D, 0x064B62BCAEBC387A, 0xB5652E02AD1B6715, 0xF2CF54EB06FC9821, 0x41E11855055BC74E,
		0x8A3A2631AE2DDA2F, 0x39146A8FAD8A8540, 0x7EBE1066066D7A74, 0xCD905CD805CA251B, 0xF1EAE5B551A2841C, 0x42C4A90B5205DB73, 0x056ED3E2F9E22447, 0xB6409F5CFA457B28,
		0xFB374270A266CC92, 0x48190ECEA1C193FD, 0x0FB374270A266CC9, 0xBC9D3899098133A6, 0x80E781F45DE992A1, 0x33C9CD4A5E4ECDCE, 0x7463B7A3F5A932FA, 0xC74DFB1DF60E6D95,
		0x0C96C5795D7870F4, 0xBFB889C75EDF2F9B, 0xF812F32EF538D0AF, 0x4B3CBF90F69F8FC0, 0x774606FDA2F72EC7, 0xC4684A43A15071A8, 0x83C230AA0AB78E9C, 0x30EC7C140910D1F3,
		0x86ACE348F355AADB, 0x3582AFF6F0F2F5B4, 0x7228D51F5B150A80, 0xC10699A158B255EF, 0xFD7C20CC0CDAF4E8, 0x4E526C720F7DAB87, 0x09F8169BA49A54B3, 0xBAD65A25A73D0BDC,
		0x710D64410C4B16BD, 0xC22328FF0FEC49D2, 0x85895216A40BB6E6, 0x36A71EA8A7ACE989, 0x0ADDA7C5F3C4488E, 0xB9F3EB7BF06317E1, 0xFE5991925B84E8D5, 0x4D77DD2C5823B7BA,
		0x64B62BCAEBC387A1, 0xD7986774E864D8CE, 0x90321D9D438327FA, 0x231C512340247895, 0x1F66E84E144CD992, 0xAC48A4F017EB86FD, 0xEBE2DE19BC0C79C9, 0x58CC92A7BFAB26A6,
		0x9317ACC314DD3BC7, 0x2039E07D177A64A8, 0x67939A94BC9D9B9C, 0xD4BDD62ABF3AC4F3, 0xE8C76F47EB5265F4, 0x5BE923F9E8F53A9B, 0x1C4359104312C5AF, 0xAF6D15AE40B59AC0,
		0x192D8AF2BAF0E1E8, 0xAA03C64CB957BE87, 0xEDA9BCA512B041B3, 0x5E87F01B11171EDC, 0x62FD4976457FBFDB, 0xD1D305C846D8E0B4, 0x96797F21ED3F1F80, 0x2557339FEE9840EF,
		0xEE8C0DFB45EE5D8E, 0x5DA24145464902E1, 0x1A083BACEDAEFDD5, 0xA9267712EE09A2BA, 0x955CCE7FBA6103BD, 0x267282C1B9C65CD2, 0x61D8F8281221A3E6, 0xD2F6B4961186FC89,
		0x9F8169BA49A54B33, 0x2CAF25044A02145C, 0x6B055FEDE1E5EB68, 0xD82B1353E242B407, 0xE451AA3EB62A1500, 0x577FE680B58D4A6F, 0x10D59C691E6AB55B, 0xA3FBD0D71DCDEA34,
		0x6820EEB3B6BBF755, 0xDB0EA20DB51CA83A, 0x9CA4D8E41EFB570E, 0x2F8A945A1D5C0861, 0x13F02D374934A966, 0xA0DE61894A93F609, 0xE7741B60E174093D, 0x545A57DEE2D35652,
		0xE21AC88218962D7A, 0x5134843C1B317215, 0x169EFED5B0D68D21, 0xA5B0B26BB371D24E, 0x99CA0B06E7197349, 0x2AE447B8E4BE2C26, 0x6D4E3D514F59D312, 0xDE6071EF4CFE8C7D,
		0x15BB4F8BE788911C, 0xA6950335E42FCE73, 0xE13F79DC4FC83147, 0x521135624C6F6E28, 0x6E6B8C0F1807CF2F, 0xDD45C0B11BA09040, 0x9AEFBA58B0476F74, 0x29C1F6E6B3E0301B,
		0xC96C5795D7870F42, 0x7A421B2BD420502D, 0x3DE861C27FC7AF19, 0x8EC62D7C7C60F076, 0xB2BC941128085171, 0x0192D8AF2BAF0E1E, 0x4638A2468048F12A, 0xF516EEF883EFAE45,
		0x3ECDD09C2899B324, 0x8DE39C222B3EEC4B, 0xCA49E6CB80D9137F, 0x7967AA75837E4C10, 0x451D1318D716ED17, 0xF6335FA6D4B1B278, 0xB199254F7F564D4C, 0x02B769F17CF11223,
		0xB4F7F6AD86B4690B, 0x07D9BA1385133664, 0x4073C0FA2EF4C950, 0xF35D8C442D53963F, 0xCF273529793B3738, 0x7C0979977A9C6857, 0x3BA3037ED17B9763, 0x888D4FC0D2DCC80C,
		0x435671A479AAD56D, 0xF0783D1A7A0D8A02, 0xB7D247F3D1EA7536, 0x04FC0B4DD24D2A59, 0x3886B22086258B5E, 0x8BA8FE9E8582D431, 0xCC0284772E652B05, 0x7F2CC8C92DC2746A,
		0x325B15E575E1C3D0, 0x8175595B76469CBF, 0xC6DF23B2DDA1638B, 0x75F16F0CDE063CE4, 0x498BD6618A6E9DE3, 0xFAA59ADF89C9C28C, 0xBD0FE036222E3DB8, 0x0E21AC88218962D7,
		0xC5FA92EC8AFF7FB6, 0x76D4DE52895820D9, 0x317EA4BB22BFDFED, 0x8250E80521188082, 0xBE2A516875702185, 0x0D041DD676D77EEA, 0x4AAE673FDD3081DE, 0xF9802B81DE97DEB1,
		0x4FC0B4DD24D2A599, 0xFCEEF8632775FAF6, 0xBB44828A8C9205C2, 0x086ACE348F355AAD, 0x34107759DB5DFBAA, 0x873E3BE7D8FAA4C5, 0xC094410E731D5BF1, 0x73BA0DB070BA049E,
		0xB86133D4DBCC19FF, 0x0B4F7F6AD86B4690, 0x4CE50583738CB9A4, 0xFFCB493D702BE6CB, 0xC3B1F050244347CC, 0x709FBCEE27E418A3, 0x3735C6078C03E797, 0x841B8AB98FA4B8F8,
		0xADDA7C5F3C4488E3, 0x1EF430E13FE3D78C, 0x595E4A08940428B8, 0xEA7006B697A377D7, 0xD60ABFDBC3CBD6D0, 0x6524F365C06C89BF, 0x228E898C6B8B768B, 0x91A0C532682C29E4,
		0x5A7BFB56C35A3485, 0xE955B7E8C0FD6BEA, 0xAEFFCD016B1A94DE, 0x1DD181BF68BDCBB1, 0x21AB38D23CD56AB6, 0x9285746C3F7235D9, 0xD52F0E859495CAED, 0x6601423B97329582,
		0xD041DD676D77EEAA, 0x636F91D96ED0B1C5, 0x24C5EB30C5374EF1, 0x97EBA78EC690119E, 0xAB911EE392F8B099, 0x18BF525D915FEFF6, 0x5F1528B43AB810C2, 0xEC3B640A391F4FAD,
		0x27E05A6E926952CC, 0x94CE16D091CE0DA3, 0xD3646C393A29F297, 0x604A2087398EADF8, 0x5C3099EA6DE60CFF, 0xEF1ED5546E415390, 0xA8B4AFBDC5A6ACA4, 0x1B9AE303C601F3CB,
		0x56ED3E2F9E224471, 0xE5C372919D851B1E, 0xA26908783662E42A, 0x114744C635C5BB45, 0x2D3DFDAB61AD1A42, 0x9E13B115620A452D, 0xD9B9CBFCC9EDBA19, 0x6A978742CA4AE576,
		0xA14CB926613CF817, 0x1262F598629BA778, 0x55C88F71C97C584C, 0xE6E6C3CFCADB0723, 0xDA9C7AA29EB3A624, 0x69B2361C9D14F94B, 0x2E184CF536F3067F, 0x9D36004B35545910,
		0x2B769F17CF112238, 0x9858D3A9CCB67D57, 0xDFF2A94067518263, 0x6CDCE5FE64F6DD0C, 0x50A65C93309E7C0B, 0xE388102D33392364, 0xA4226AC498DEDC50, 0x170C267A9B79833F,
		0xDCD7181E300F9E5E, 0x6FF954A033A8C131, 0x28532E49984F3E05, 0x9B7D62F79BE8616A, 0xA707DB9ACF80C06D, 0x14299724CC279F02, 0x5383EDCD67C06036, 0xE0ADA17364673F59,
	};
}