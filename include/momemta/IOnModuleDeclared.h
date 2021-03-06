/*
 *  MoMEMta: a modular implementation of the Matrix Element Method
 *  Copyright (C) 2016  Universite catholique de Louvain (UCL), Belgium
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#pragma once

#include <string>

/**
 * \brief Notification callback fired when a module is declared.
 *
 * This callback is used from the lua interface when the user declare a new module in the
 * configuration file.
 */
class IOnModuleDeclared {
    public:
        virtual ~IOnModuleDeclared() {};

        /** \brief A module is declared in the configuration file
         *
         * This function is called as soon as a new module is declared in the configuration
         * file.
         *
         * A lua code like
         *
         * ```
         * MatrixElement.module_name = {}
         * ```
         *
         * will result in a call to this function with \p type equals to `MatrixElement` and
         * \p name equals to `module_name`.
         */
        virtual void onModuleDeclared(const std::string& type, const std::string& name) = 0;
};
