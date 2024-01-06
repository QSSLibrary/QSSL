# ifndef QSSL_VERSION
    /**
     * @brief Release Name of QSSL, Current Release : Nove
     * @note Nova of QSSL, Beginning of Illumination to the Computer Age Where Digital and Celestial Realms Converge
     * @note QSSL-Nova is the First Release of QSS Library that Covers these Contents :
     * @note 1. Celestial Objects
     * @note 2. Astronomical Conversions
     * @note 3. Large Numbers Operations
     * @note 4. Celestial Trigonometry
     * @note 5. Coordinate Systems
     */
    # define QSSL_RELEASE_NAME "Nova"
    /**
     * @brief Major Version of QSSL Library
     * @note Major Version Represents Significant Update of 
     * Library, It Usually Introduces Major Features, 
     * Changes or Improvements.
     */
    # define QSSL_MAJOR_VERSION 0
    /**
     * @brief Minor Version of QSSL Library
     * @note Minor Version Represents Less Extensive Updates
     * Compared to Major Version But Still Brings Notable
     * Additions, Optimizations and Bug Fixes 
     */
    # define QSSL_MINOR_VERSION 0
    /**
     * @brief Patch Version of QSSL Library
     * @note Patch Version Represents Fixed Issues or
     * Smaller Updates of Library
     */
    # define QSSL_PATCH_VERSION 1
    /**
     * @brief Helper for Converting into String
     */
    # define QSSL_CONV_TO_STRING_HELPER(_INPUT) #_INPUT
    /**
     * @brief Method to Convert into String
     */
    # define QSSL_CONV_TO_STRING(_INPUT) \
        QSSL_CONV_TO_STRING_HELPER(_INPUT)
    /**
     * @brief QSSL String Version
    */
    # define QSSL_VERSION_STR                       \
        QSSL_CONV_TO_STRING(QSSL_MAJOR_VERSION) "." \
        QSSL_CONV_TO_STRING(QSSL_MINOR_VERSION) "." \
        QSSL_CONV_TO_STRING(QSSL_PATCH_VERSION)
    /**
     * @brief QSSL Concatenated Version
     */
    # define QSSL_VERSION_CONCAT   \
        QSSL_MAJOR_VERSION ## . ## \
        QSSL_MINOR_VERSION ## . ## \
        QSSL_PATCH_VERSION
    /**
     * @file Version.hpp
     * @author Ramtin Kosari
     * @brief QSSL Open Source Astronomy and Astrophysics Versions
     * Library's Version
     * @date 2023-07-05
     */
    # define QSSL_VERSION QSSL_VERSION_STR
# endif // QSSL_VERSION

