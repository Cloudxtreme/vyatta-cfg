/*
 * Copyright (C) 2010 Vyatta, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _CPARSE_HPP_
#define _CPARSE_HPP_

#include <cstore/cstore.hpp>
#include <cnode/cnode.hpp>

namespace cparse {

int parse_file(FILE *fin, Cstore& cs);

} // namespace cparse

#endif /* _CPARSE_HPP_ */

