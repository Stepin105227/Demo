/*******************************************************************
Write a program to decode a given 32bit packet information and print the values of 
different fields. Create a structure with member elements as packet fields.
********************************************************************/
#include <stdio.h>
#include <stdint.h>
#include <iostream>
using namespace std;

/*******************************************************************
@brief show  the filed 32 bit packet
********************************************************************/
void show_packet(struct data_pack *data);

/*******************************************************************
@brief set the 32 bit packet
********************************************************************/
void set_packet(struct data_pack *data);

/* user Data */
uint32_t user_data = 0x1234ABCD;

/*******************************************************************
@brief Packet details.
********************************************************************/
struct data_pack
{
    uint8_t crc;
    uint8_t status; 
    uint16_t payload; 
    uint8_t bat;
    uint8_t sensor; 
    uint8_t longAddr; 
    uint8_t shortAddr; 
    uint8_t addrMode;
};

int main() 
{
    struct data_pack data;
    set_packet(&data);
    show_packet(&data);
    return 0;
}

void set_packet(struct data_pack *data)
{
    data->crc = (uint8_t)((user_data >>0 )& 0x3);
    data->status = (uint8_t)((user_data >>2) & 0x1);
    data->payload = (uint16_t)((user_data >>3) & 0xFFF);
    data->bat = (uint8_t)((user_data >>15) & 0x7);
    data->sensor = (uint8_t)((user_data >>18) & 0x7);
    data->longAddr = (uint8_t)((user_data >>21) & 0xFF);
    data->shortAddr = (uint8_t)((user_data >>29) & 0x3);
    data->addrMode = (uint8_t)((user_data >>31) & 0x1);
}

void show_packet(struct data_pack *data)
{
            
    cout<<"CRC : "<<static_cast<int>(data->crc)<<"\n";
    cout<<"status : "<<static_cast<int>(data->status)<<"\n";
    cout<<"payload : "<<static_cast<int>(data->payload)<<"\n";
    cout<<"bat : "<<static_cast<int>(data->bat)<<"\n";
    cout<<"sensor : "<<static_cast<int>(data->sensor)<<"\n";
    cout<<"longAddr : "<<static_cast<int>(data->longAddr)<<"\n";
    cout<<"shortAddr : "<<static_cast<int>(data->shortAddr)<<"\n";
    cout<<"addrMode : "<<static_cast<int>(data->addrMode)<<"\n";
}
