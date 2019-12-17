Action()
{

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("blazedemo.com", 
		"URL=http://blazedemo.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://d3cv4a9a9wh0bt.cloudfront.net/dynamicConfig.json", "Referer=", ENDITEM, 
		"Url=/favicon.ico", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_add_header("Origin", 
		"http://blazedemo.com");

	web_submit_form("reserve.php", 
		"Snapshot=t2.inf", 
		ITEMDATA, 
		"Name=fromPort", "Value=Boston", ENDITEM, 
		"Name=toPort", "Value=Rome", ENDITEM, 
		LAST);

	return 0;
}