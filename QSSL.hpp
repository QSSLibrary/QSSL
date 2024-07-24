# ifndef QSSL
    /**
     * @file QSSL.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief QSSL Open Source Astronomy and Astrophysics Library
     * @copyright Copyright (c) 2023-2037, QSS Company - Section IRC (International Research Center)
     * @note Enjoy Using this Library
     * @date 2024-01-06
     */
    # define QSSL
    //-- Check if QAPB Built Library
    # ifdef QAPB
        //-- Check if QSSL License Configured
        # ifndef HAS_QSSL_MODULE_LICENSE
            # error QSSL License is Required for Celestial Objects
        # endif // HAS_QSSL_MODULE_LICENSE
        //-- Check if QSSL Version Configured
        # ifndef HAS_QSSL_MODULE_VERSION
            # error QSSL Version is Required for Celestial Objects
        # endif // HAS_QSSL_MODULE_VERSION
        //-- Check if QSSL Celestial Objects Configured
        # ifndef HAS_QSSL_MODULE_CELESTIALOBJECTS
            # error QSSL Celestial Objects is Required for QSSL
        # endif // HAS_QSSL_MODULE_CELESTIAL_OBJECTS
    # endif // QAPB
    //-- Include QSSL License
    # ifndef QSSL_LICENSE
        # include "License.hpp"
    # endif // QSSL_LICENSE
    //-- Include QSSL Version
    # ifndef QSSL_VERSION
        # include "Version.hpp"
    # endif // QSSL_VERSION
    //-- Include QSSL Celestial Objects
    # ifndef QSSL_CELESTIAL_OBJECTS
        # include "CelestialObjects.hpp"
    # endif // QSSL_CELESTIAL_OBJECTS
# endif // QSSL