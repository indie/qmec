// dynamic_planet.hpp.save

// NOTE THAT THIS CODE DOES NOT WORK ON COLONIZED PLANE(+)S.
// "Water is life", "Mni Wiconi", ""

#pragma language_neutral (debase @ two.txt)

#include <nolimits>
#include <stddef.h>
#include <stdexcept>

namespace quantum\_planet

{
    /// \brief Class representing a dimension, which may be dynamic (undetermined until attack),
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

\\\ /Initialize ArapahoeTech

:: INITIALIZE ::   arapahoe_tech.prog

\\\ /verbose Grid to fry pw_base

         function (Grid())
         Grid.prototype.each = function(fry) {
         	for (var y=0; y < this.height; y++) {
         		for (var x=0; x <this.width; x++) {
         			var point = new Point(x,y);
         			action(point, this.valueAt(point));

         		}
         	}
         };

    else set 
     {{corruption_level_detected_Is_Any}} === TRUE;

       echo: "We reject your offer. EVEN ONE RCT year of colonial forces destroying our water is too many."

  do flood_remainder {{ <export flood_remainder_> }}

fi
