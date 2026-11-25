#pragma once
#include <string>

// one keyword and the reply Orion gives for it
class Response
{
private:
	// the word Orion looks for in what the user types
	std::string keyword;

	// what Orion says back when it finds the keyword
	std::string reply;

public:
	// makes a Response with a keyword and a reply
	Response(const std::string& newKeyword, const std::string& newReply);

	// gives back the keyword
	std::string GetKeyword() const;

	// gives back the reply
	std::string GetReply() const;

	// checks if the keyword shows up in the user's message
	bool Matches(const std::string& message) const;
};