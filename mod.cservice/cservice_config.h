/**
 * cservice_config.h
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
 * $Id: cservice_config.h,v 1.14 2012/06/02 22:23:12 Seven Exp $
 */

#ifndef __CSERVICE_CONFIG_H
#define __CSERVICE_CONFIG_H "$Id: cservice_config.h,v 1.14 2012/06/02 22:23:12 Seven Exp $"

/**
 * Define this if you wish for all SQL queries to be sent
 * the standard logging stream (elog).
 */
#define LOG_SQL

/**
 * Define this if you wish to log all cache hits.
 */
#define LOG_CACHE_HITS

/**
 * Define this if you wish for general debugging information
 * be logged.
 */
#define LOG_DEBUG

/**
 * The maximum number of results to return to the user on
 * an LBANLIST query.
 */
#define MAX_LBAN_RESULTS 10

/**
 * The maximum number of results to return to the user on
 * an ACCESS query.
 */
#define MAX_ACCESS_RESULTS 15

/**
 * The maximum number of search results to return to the user.
 */
#define MAX_SEARCH_RESULTS 10

/**
 * Do you want NEWPASS command or not?
 */

#define USE_NEWPASS

/**
 * Do you want to use the Noteserv functionality?
 */

#define USE_NOTICES

/**
 * Do you want to use the Notices about any modification state?
 */

#define USE_NOTES

/**
 * Do you want normal users to use the Noteserv functionality?
 */

#define USE_USERS_NOTES

/**
 * Normal users can send notes to admins?
 */

#define USERS_NOTE_ADMINS

/**
 * Do you want users and admins to get notification about their modification status?
 */

#define USE_MODINFO_NOTES

/**
 * Users are able to set their URL(DESC,MOTTO)?
 */

#define USE_USERS_URL

/**
 * Do you want silly oper-type people to mess around with channels?
 */

#define USE_OPERPARTJOIN

/**
 * Do you want users to have the ability to set their own MAXLOGINS setting?
 */

#define USE_SETMAXLOGINS

/**
 * Define this if you want to enable the HELLO command.
 */
#define ALLOW_HELLO

/**
 * Define this if you want users to use HELLO command.
 */
#define ALLOW_USERS_HELLO

/**
 * Define this if you want the IP restriction to default to REJECT when no
 * entries are in the SQL table.  Default setting allows login from any IP
 * if there are no entries for the username in the SQL table.
 */
#undef IPR_DEFAULT_REJECT

/**
 * Define this if you want to enable the 'cs.log' file (log of all commands
 * including login) - Default is to NOT enable the log as it poses a security
 * risk (it contains passwords)
 */
#undef USE_COMMAND_LOG

/**
 * Define this if you want TOTP authentication, note you must have liboath
 * installed, and configure --with-liboath for totp to work
 */
#undef TOTP_AUTH_ENABLED

/**
 * The first user with Id 1, is it able to suspend/remuser a * 1000?
 */
#define USERID1_REM_SUSP_1000_ADMIN

/*
 * Do you want X to show and log OPMODES?
 */
#define CATCH_OPMODES

/**
 * Enable ANTITAKE channel flag and function?
 * Protection against msg X ban #chan *!*@*
 * Measures against the offender: suspend, remuser, kickban, etc.
 */
#define USE_NOTAKE


#endif // __CSERVICE_CONFIG_H