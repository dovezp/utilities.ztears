/**
 * \brief ZBADTEARS encryption and decryption
 * \author dovezp (github.com/dovezp)
 * \version 26/APR/2025
 * \license Apache License 2.0
 */

#pragma once

#include <random>

namespace utilities
{
    template <class T>
    class zbadtears
    {
    public:

        /**
         * \brief default constructor creates a random checksum for the value
         */
        zbadtears() : zbadtears(this->random()) { }

        /**
         * \brief default constructor uses a predefined checksum for the value
         * \param checksum the new checksum
         */
        zbadtears(signed __int32 checksum)
        {
            set_checksum(checksum);
        }

        /**
         * \brief sets the new checksum
         * \param checksum the new checksum value
         */
        void set_checksum(signed int checksum)
        {
            checksum_ = checksum;
        }

        /**
         * \brief obtains the checksum for external storage
         * \return the checksum value
         */
        signed __int32 get_checksum()
        {
            return checksum_;
        }

        /**
         * \brief encodes the value with the checksum
         * \param value the value to encrypt
         * \return the encoded value
         */
        T encrypt(T value)
        {
            return _rotr(value ^ checksum_, 5) + _rotr(checksum_ ^ 0xBAADF00D, 5);
        }

        /**
         * \brief decodes the encoded value with the checksum
         * \param encoded the encoded value
         * \return the decoded value
         */
        T decrypt(T encoded)
        {
            return ((_rotl(encoded - _rotr(checksum_ ^ 0xBAADF00D, 5), 5)) ^ checksum_);
        }

    private:

        signed __int32 checksum_;

        signed __int32 random()
        {
            std::random_device random_d;
            std::mt19937 generate{ random_d() };
            std::uniform_int_distribution<__int32> get_random;
            return get_random(generate);
        }
    };
}