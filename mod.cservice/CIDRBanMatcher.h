/**
 * banMatcher.h
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307,
 * USA.
 *
 * $Id: CIDRBanMatcher.h,v 1.1 2009/06/25 19:05:23 mrbean_ Exp $
 */

#ifndef __CIDRBANMATCHER_H
#define __CIDRBANMATCHER_H "$Id: CIDRBanMatcher.h,v 1.1 2009/06/25 19:05:23 mrbean_ Exp $"

#include	<string>
#include	<ctime>
#include	"banMatcher.h"
#include	"nickUserCidr.h"
 
using std::string ;

namespace gnuworld
{ 
 
class CIDRBanMatcher : public banMatcher
{
	public:
	
		CIDRBanMatcher(const string& mask);

		virtual bool matches(iClient*) ;
	
	private:
		
		xNickUserCIDR cidr;
} ;

} 
#endif // __CIDRBANMATCHER_H
