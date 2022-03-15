/*  
	14 MARCH 2022
  Author: P. Pseftoyiannis
  Contribution to modules 'mod_pagespeed' and 'mod_cache'
*/

#include "apr.h"
#include "httpd.h"
#include "http_config.h"
#include "http_protocol.h"
#include "ap_config.h"
#include<stdio.h>
#include<stdlib.h>
#include<apr_network_io.h>
#include<apr_mmap.h>
#include<apr_allocator.h>
#include<apr_tables.h>
#include<apr_lib.h>

char* str = "NULL";
char speedUp = '00';
int vel = 0;

module AP_MODULE_DECLARE_DATA   mod_SpeedUpServer =
{
	STANDARD20_MODULE_STUFF,
	create_dir_conf,
	merge_dir_conf,
	create_svr_conf,
	directives,
	register_hooks,
	speedUp_hooks
};

static void register_hooks(apr_pool_t *pool)
{
	ap_hook_handler(SpeedUpServer_handler , NULL, NULL, APR_HOOK_LAST);
}

/*  Returns a message if the Speeding Up of A.A.D.E. Servers is
	ABLE TO BE FIXED or NOT. ACCEPTED or DECLINED is for opening the APACHE
    AADE SERVER Connections or NOT in other cases. 
*/
static int openServers_handler(request_rec *t)
{
	/* 	MESSAGE("OK"); or MESSAGE("NOT OK");
		opening the APACHE AADE SERVER Connections or NOT in other cases. 
	*/
	
	/* -------------------------------------------------------------------- 
	   OPENING SERVER CONNECTIONS
	*/
	if (!r->handler || strcmp(r->handler, "openServers-handler")) return (DECLINED);
	ap_set_content_type(r, "text/html");
	ap_rprintf("Servers are OPENED and CONNECTED.");
	
	/* set the MAX filesize on filesize SERVER */
	 = MAX;
	/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
	vel = ...();
	
	speedUp = ...();
	
	SpeedUpServer_handler(speedUp, vel);
	
	return OK;
}

/*  */
static *char SpeedUpServer_handler(char spup, int srVelocity)
{
/* MESSAGE("Servers are in speed-up state."); OR
   MESSAGE("Servers are in old speed state.");
*/
 
/* ------------------------------------------------------------- 
	CHECKING IF SERVERS speed is on UP state or NOT.
*/
	if()
	{
		
	}
	else
	{
		
	}
	
	speedUp_hooks();
	mod_= ;
	
	str = ap_rprintf("Servers are in speed-up state.");
	
	return str;
}

static .... STANDARD20_MODULE_STUFF() 
{
	
	return ;
}


static .... create_dir_conf() 
{
	
	return ;
}
	
	
static .... merge_dir_conf() 
{
	
	return ;
}
	
	
static int create_svr_conf()
{
	
	
	return HTTP_FORBIDDEN; // 403
}
	
static .... directives()
{
	
	return ;
}

/* Hooks that speed up the Servers. */
static void speedUp_hooks()
{
	/* the following modules are needed to speed up the Servers. */
	();
	();
	
	// return ;
}
