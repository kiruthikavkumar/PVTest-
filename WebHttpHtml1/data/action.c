Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("__cfduid=d8f7cde6af76de0f5480554563aaf177f1521763472; DOMAIN=nzracingboard.co.nz");

	web_add_cookie("has_js=1; DOMAIN=nzracingboard.co.nz");

	web_url("nzracingboard.co.nz", 
		"URL=https://nzracingboard.co.nz/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/modules/system/system.base.css?odvpw3", ENDITEM, 
		"Url=/modules/system/system.menus.css?odvpw3", ENDITEM, 
		"Url=/modules/system/system.messages.css?odvpw3", ENDITEM, 
		"Url=/modules/system/system.theme.css?odvpw3", ENDITEM, 
		"Url=/sites/all/modules/custom/carousel/carousel.css?odvpw3", ENDITEM, 
		"Url=/modules/comment/comment.css?odvpw3", ENDITEM, 
		"Url=/sites/all/modules/custom/document_library/document_library.css?odvpw3", ENDITEM, 
		"Url=/modules/field/theme/field.css?odvpw3", ENDITEM, 
		"Url=/modules/node/node.css?odvpw3", ENDITEM, 
		"Url=/modules/search/search.css?odvpw3", ENDITEM, 
		"Url=/modules/user/user.css?odvpw3", ENDITEM, 
		"Url=/sites/all/modules/contrib/ckeditor/css/ckeditor.css?odvpw3", ENDITEM, 
		"Url=/sites/all/modules/contrib/views/css/views.css?odvpw3", ENDITEM, 
		"Url=/sites/all/modules/contrib/ctools/css/ctools.css?odvpw3", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/styles/theme.css?odvpw3", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/styles/page.css?odvpw3", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/styles/block.css?odvpw3", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/scripts/fancybox/source/jquery.fancybox.css?odvpw3", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/fonts/rotis_sans_serif/rotis_sans_serif_bold_65.eot?", ENDITEM, 
		"Url=/misc/menu-leaf.png", ENDITEM, 
		"Url=/misc/menu-collapsed.png", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/images/subnav_sep.jpg", ENDITEM, 
		"Url=/sites/all/modules/custom/carousel/ls_prev@2x.png", ENDITEM, 
		"Url=/sites/all/modules/custom/carousel/ls_next@2x.png", ENDITEM, 
		"Url=/misc/menu-expanded.png", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/images/logo-footer_13.png", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/images/arrow-more-orange.gif", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/images/twitter@2x.png", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/images/bg-title.gif", ENDITEM, 
		"Url=/sites/all/themes/NZRB_Corp/images/facebook@2x.png", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j66&a=892789403&t=pageview&_s=1&dl=https%3A%2F%2Fnzracingboard.co.nz%2F&ul=en-nz&de=utf-8&dt=Welcome%20to%20New%20Zealand%20Racing%20Board%20%7C%20New%20Zealand%20Racing%20Board&sd=24-bit&sr=1280x720&vp=768x369&je=1&fl=29.0%20r0&_u=IGBAgEQ~&jid=1647052735&gjid=1448683085&cid=1662528289.1521763473&tid=UA-4471892-2&_gid=158732387.1521763473&z=1580952037", ENDITEM, 
		"Url=https://www.catalyst-analytics.nz/piwik.js", ENDITEM, 
		"Url=https://www.catalyst-analytics.nz/piwik.php?action_name=Welcome%20to%20New%20Zealand%20Racing%20Board%20%7C%20New%20Zealand%20Racing%20Board&idsite=319&rec=1&r=973079&h=13&m=4&s=33&url=https%3A%2F%2Fnzracingboard.co.nz%2F&_id=b0164ede4e3c4e6b&_idts=1521763473&_idvc=1&_idn=0&_refts=0&_viewts=1521763473&send_image=1&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1280x720&gt_ms=166", ENDITEM, 
		"Url=https://connect.facebook.net/en_US/sdk.js", ENDITEM, 
		"Url=https://stats.g.doubleclick.net/r/collect?t=dc&aip=1&_r=3&v=1&_v=j66&tid=UA-4471892-2&cid=1662528289.1521763473&jid=1647052735&gjid=1448683085&_gid=158732387.1521763473&_u=IGBAgEQ~&z=561724834", ENDITEM, 
		"Url=https://www.facebook.com/impression.php/f17d4e74b077d75/?lid=115&payload=%7B%22source%22%3A%22jssdk%22%7D", ENDITEM, 
		"Url=https://platform.twitter.com/widgets.js", ENDITEM, 
		"Url=https://www.google-analytics.com/collect?v=1&_v=j66&a=892789403&t=event&_s=2&dl=https%3A%2F%2Fnzracingboard.co.nz%2F&ul=en-nz&de=utf-8&dt=Welcome%20to%20New%20Zealand%20Racing%20Board%20%7C%20New%20Zealand%20Racing%20Board&sd=24-bit&sr=1280x720&vp=768x369&je=1&fl=29.0%20r0&ec=Outbound%20links&ea=Click&el=https%3A%2F%2Fwww.tab.co.nz%2Fsport&_u=KGBAgEQ~&jid=&gjid=&cid=1662528289.1521763473&tid=UA-4471892-2&_gid=158732387.1521763473&z=466561167", ENDITEM, 
		"Url=https://www.catalyst-analytics.nz/piwik.php?link=https%3A%2F%2Fwww.tab.co.nz%2Fsport&idsite=319&rec=1&r=776444&h=13&m=5&s=14&url=https%3A%2F%2Fnzracingboard.co.nz%2F&_id=b0164ede4e3c4e6b&_idts=1521763473&_idvc=1&_idn=0&_refts=0&_viewts=1521763473&send_image=1&pdf=0&qt=0&realp=0&wma=0&dir=0&fla=1&java=1&gears=0&ag=0&cookie=1&res=1280x720&gt_ms=166", ENDITEM, 
		LAST);

	web_url("Ms1VZf1Vg1J.js", 
		"URL=https://staticxx.facebook.com/connect/xd_arbiter/r/Ms1VZf1Vg1J.js?version=42", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://nzracingboard.co.nz/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("widget_iframe.f47a2e0b4471326b6fa0f163bda46011.html", 
		"URL=https://platform.twitter.com/widgets/widget_iframe.f47a2e0b4471326b6fa0f163bda46011.html?origin=https%3A%2F%2Fnzracingboard.co.nz", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://nzracingboard.co.nz/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_url("like.php", 
		"URL=https://www.facebook.com/v2.5/plugins/like.php?action=like&app_id=&channel=https%3A%2F%2Fstaticxx.facebook.com%2Fconnect%2Fxd_arbiter%2Fr%2FMs1VZf1Vg1J.js%3Fversion%3D42%23cb%3Df157f8d65f449de%26domain%3Dnzracingboard.co.nz%26origin%3Dhttps%253A%252F%252Fnzracingboard.co.nz%252Ff1a8657a6524e1e%26relation%3Dparent.parent&container_width=0&href=https%3A%2F%2Fnzracingboard.co.nz%2F&layout=button_count&locale=en_US&sdk=joey&share=false&show_faces=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://nzracingboard.co.nz/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://static.xx.fbcdn.net/rsrc.php/v3ijLc4/yz/l/en_US/ZXD9WV2Kqal.js", "Referer=https://www.facebook.com/v2.5/plugins/like.php?action=like&app_id=&channel=https%3A%2F%2Fstaticxx.facebook.com%2Fconnect%2Fxd_arbiter%2Fr%2FMs1VZf1Vg1J.js%3Fversion%3D42%23cb%3Df157f8d65f449de%26domain%3Dnzracingboard.co.nz%26origin%3Dhttps%253A%252F%252Fnzracingboard.co.nz%252Ff1a8657a6524e1e%26relation%3Dparent.parent&container_width=0&href=https%3A%2F%2Fnzracingboard.co.nz%2F&layout=button_count&locale=en_US&"
		"sdk=joey&share=false&show_faces=true", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://platform.twitter.com");

	lr_think_time(4);

	web_url("settings", 
		"URL=https://syndication.twitter.com/settings", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://platform.twitter.com/widgets/widget_iframe.f47a2e0b4471326b6fa0f163bda46011.html?origin=https%3A%2F%2Fnzracingboard.co.nz", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("jot", 
		"Action=https://syndication.twitter.com/i/jot", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=dnt", "Value=0", ENDITEM, 
		"Name=tfw_redirect", "Value=https://platform.twitter.com/jot.html", ENDITEM, 
		"Name=l", "Value={\"widget_origin\":\"https://nzracingboard.co.nz/\",\"widget_frame\":null,\"duration_ms\":0.2998516149318675,\"_category_\":\"tfw_client_event\",\"triggered_on\":1521763478392,\"dnt\":false,\"client_version\":\"c419f42:1520970215484\",\"format_version\":1,\"event_namespace\":{\"client\":\"tfw\",\"action\":\"render\",\"page\":\"page\",\"component\":\"performance\"}}", ENDITEM, 
		"Name=l", "Value={\"widget_origin\":\"https://nzracingboard.co.nz/\",\"widget_frame\":null,\"duration_ms\":5750.404147828822,\"_category_\":\"tfw_client_event\",\"triggered_on\":1521763478392,\"dnt\":false,\"client_version\":\"c419f42:1520970215484\",\"format_version\":1,\"event_namespace\":{\"client\":\"tfw\",\"element\":\"all\",\"action\":\"resource\",\"page\":\"page\",\"component\":\"performance\"}}", ENDITEM, 
		"Name=l", "Value={\"widget_origin\":\"https://nzracingboard.co.nz/\",\"widget_frame\":null,\"duration_ms\":0,\"_category_\":\"tfw_client_event\",\"triggered_on\":1521763478392,\"dnt\":false,\"client_version\":\"c419f42:1520970215484\",\"format_version\":1,\"event_namespace\":{\"client\":\"tfw\",\"element\":\"image\",\"action\":\"resource\",\"page\":\"page\",\"component\":\"performance\"}}", ENDITEM, 
		"Name=l", "Value={\"widget_origin\":\"https://nzracingboard.co.nz/\",\"widget_frame\":null,\"duration_ms\":0,\"_category_\":\"tfw_client_event\",\"triggered_on\":1521763478392,\"dnt\":false,\"client_version\":\"c419f42:1520970215484\",\"format_version\":1,\"event_namespace\":{\"client\":\"tfw\",\"element\":\"settings\",\"action\":\"resource\",\"page\":\"page\",\"component\":\"performance\"}}", ENDITEM, 
		"Name=l", "Value={\"widget_origin\":\"https://nzracingboard.co.nz/\",\"widget_frame\":null,\"duration_ms\":0,\"_category_\":\"tfw_client_event\",\"triggered_on\":1521763478392,\"dnt\":false,\"client_version\":\"c419f42:1520970215484\",\"format_version\":1,\"event_namespace\":{\"client\":\"tfw\",\"element\":\"widget_iframe\",\"action\":\"resource\",\"page\":\"page\",\"component\":\"performance\"}}", ENDITEM, 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170227; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170227; DOMAIN=c.urs.microsoft.com");

	lr_think_time(5);

	web_url("versionlist.xml", 
		"URL=https://iecvlist.microsoft.com/ie11blocklist/1401746408/versionlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://c.urs.microsoft.com/l1.dat?v=3&cv=9.11.16299.0&os=10.0.16299.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20170227; DOMAIN=ieonline.microsoft.com");

	web_add_cookie("SRCHUID=V=2&GUID=5B3EEFAE944F46168D3B3EDAF55BB3C4; DOMAIN=ieonline.microsoft.com");

	lr_think_time(4);

	web_url("versionlist.xml_2", 
		"URL=https://iecvlist.microsoft.com/ie11blocklist/1401746408/versionlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://ieonline.microsoft.com/iedomainsuggestions/ie11/suggestions.en-NZ", "Referer=", ENDITEM, 
		"Url=https://ieonline.microsoft.com/ieflipahead/ie10/rules.xml?mkt=en-NZ", "Referer=", ENDITEM, 
		LAST);

	lr_start_transaction("betting");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkID=401135", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("betting",LR_AUTO);

	return 0;
}