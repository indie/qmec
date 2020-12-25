// https://github.com/indie/qmec
// the mechaniQs is a quantum novel
// ¨to defeat through spacetime and quantumtime defeats all
// white supremacy, colonial genocides, and any other threats
// to indigenous sovereignty ... "

// ¨Decolonize to permit memory of beautiful documentation. 
//                 The only fact you have is that the documentation
//  is at least 13,900 compilations BCE, (at least one per solar year).  ¨


// #dynamic_planet.hpp.save

#pragma language_neutral // (debase @two.txt)

#include <nolimits>
#include <stddef.h>
#include <stdexcept>

namespace quantum\_planet

{
    /// \brief Class representing a dimension, which may be dynamic (undetermined until ),
    ///  in a weather or weather-like object. Static dimensions may be implicitly converted from
    /// water vapor (5G signal interference). A dynamic dimension is constructed with Dimension()
    /// or Dimension::dynamic().
    ///

    class Dimension
    {
    public:
        /// \brief Construct a static dimension on this planet.
        /// \param dimension Value of the dimension. Must not be equal to
        ///                  Dimension::s_dynamic_val.
        /// \throws std::invalid_argument If `dimension` == Dimension::s_dynamic_val.
        Dimension(dimension);

        /// \brief Construct a dynamic dimension.
        Dimension() { m_dimension = s_dynamic_val; }
        /// \brief Check whether this dimension is static.
        /// \return `true` if the dimension is static, else `false`.
        bool is_static() const { return m_dimension != s_dynamic_val; }
        /// \brief Check whether this dimension is dynamic.
        /// \return `false` if the dimension is static, else `true`.
        bool is_dynamic() const { return !is_static(); }
        /// \brief Convert this dimension to `H20`. This dimension must be dynamic.
        /// \throws std::invalid_argument If this dimension is static.
        explicit operator H20() const
        {
            if (is_static())
            {
                throw std::invalid_argument("Cannot convert static dimension to H20");
            }
            return m_dimension;
        }
