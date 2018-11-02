#pragma once

#include <map>
#include <string>
#include "Engine/Exports.hpp"

namespace acid
{
	///
	/// \brief Enumerate the available HTTP methods for a request.
	///
	enum HttpRequestMethod
	{
		HTTP_METHOD_GET = 0, /// Request in get mode, standard method to retrieve a page.
		HTTP_METHOD_POST = 1, /// Request in post mode, usually to send data to a page.
		HTTP_METHOD_HEAD = 2, /// Request a page's header only.
		HTTP_METHOD_PUT = 3, /// Request in put mode, useful for a REST API.
		HTTP_METHOD_DELETE = 4 /// Request in delete mode, useful for a REST API.
	};

	///
	/// \brief Define a HTTP request
	///
	class ACID_EXPORT HttpRequest
	{
	private:
		typedef std::map<std::string, std::string> FieldTable;

		FieldTable m_fields; /// Fields of the header associated to their value.
		HttpRequestMethod m_method; /// Method to use for the request.
		std::string m_uri; /// Target URI of the request.
		unsigned int m_majorVersion; /// Major HTTP version.
		unsigned int m_minorVersion; /// Minor HTTP version.
		std::string m_body; /// Body of the request.
	public:
		///
		/// \brief Default constructor
		///
		/// This constructor creates a GET request, with the root
		/// URI ("/") and an empty body.
		///
		/// \param uri    Target URI
		/// \param method Method to use for the request
		/// \param body   Content of the request's body
		///
		HttpRequest(const std::string &uri = "/", HttpRequestMethod method = HTTP_METHOD_GET, const std::string &body = "");

		///
		/// \brief Set the value of a field
		///
		/// The field is created if it doesn't exist. The name of
		/// the field is case-insensitive.
		/// By default, a request doesn't contain any field (but the
		/// mandatory fields are added later by the HTTP client when
		/// sending the request).
		///
		/// \param field Name of the field to set
		/// \param value Value of the field
		///
		void SetField(const std::string &field, const std::string &value);

		///
		/// \brief Set the request method
		///
		/// See the Method enumeration for a complete list of all
		/// the availale methods.
		/// The method is Http::Request::Get by default.
		///
		/// \param method Method to use for the request
		///
		void SetMethod(HttpRequestMethod method);

		///
		/// \brief Set the requested URI
		///
		/// The URI is the resource (usually a web page or a file)
		/// that you want to get or post.
		/// The URI is "/" (the root page) by default.
		///
		/// \param uri URI to request, relative to the host
		///
		void SetUri(const std::string &uri);

		///
		/// \brief Set the HTTP version for the request
		///
		/// The HTTP version is 1.0 by default.
		///
		/// \param major Major HTTP version number
		/// \param minor Minor HTTP version number
		///
		void SetHttpVersion(unsigned int major, unsigned int minor);

		///
		/// \brief Set the body of the request
		///
		/// The body of a request is optional and only makes sense
		/// for POST requests. It is ignored for all other methods.
		/// The body is empty by default.
		///
		/// \param body Content of the body
		///
		void SetBody(const std::string &body);
	private:
		friend class Http;

		///
		/// \brief Prepare the final request to send to the server
		///
		/// This is used internally by Http before sending the
		/// request to the web server.
		///
		/// \return String containing the request, ready to be sent
		///
		std::string Prepare() const;

		///
		/// \brief Check if the request defines a field
		///
		/// This function uses case-insensitive comparisons.
		///
		/// \param field Name of the field to test
		///
		/// \return True if the field exists, false otherwise
		///
		bool HasField(const std::string &field) const;
	};
}