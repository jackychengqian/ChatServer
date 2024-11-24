#pragma once
#include "Singleton.h"
#include "const.h"
#include <map>
#include <functional>

class HttpConnection;
using HttpHandler = std::function<void(std::shared_ptr<HttpConnection>)> ;
class LogicSystem : public Singleton<LogicSystem>
{
	friend class Singleton<LogicSystem>;
public:	
	~LogicSystem() = default;
	bool HandleGet(std::string, std::shared_ptr<HttpConnection>);
	bool HandlePost(std::string, std::shared_ptr<HttpConnection>);
	void RegGet(std::string url, HttpHandler handler);
	void RegPost(std::string url, HttpHandler handler);
private:
	LogicSystem();
	std::map<std::string, HttpHandler> _post_handlers;
	std::map<std::string, HttpHandler> _get_handlers;
};

