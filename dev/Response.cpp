#include "Response.h"

// stores the keyword and reply when a new Response is made
Response::Response(const std::string& newKeyword, const std::string& newReply)
// copy the values passed in into the class variables
	: keyword(newKeyword), reply(newReply)
{
}

// gives back the keyword
std::string Response::GetKeyword() const
{
	// send the stored keyword back
	return keyword;
}

// gives back the reply
std::string Response::GetReply() const
{
	// send the stored reply back
	return reply;
}

// checks if the keyword shows up in the user's message
bool Response::Matches(const std::string& message) const
{
	// find gives npos when the keyword isn't in the message, so anything else means a match
	return message.find(keyword) != std::string::npos;
}