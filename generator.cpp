#include<string>
#include<fstream>

using namespace std;

int main() {
	string name = "generated.html";
	ofstream fs;
	fs.open(name.c_str());
	fs << "<html><title>My Web Page</title>" << endl;
	fs << "<body><h1>CPE 422 Web Page</h1>" << endl;
	fs << "My first HTML web page." << endl;
	fs << "<h2>Testing BeagleBone using CGI scripts</h2>" << endl;
	fs << "<ol>" << endl;
	fs << "<li>Linux</li>" << endl;
	fs << "<li>Web Servers</li>" << endl;
	fs << "</ol>" << endl;
	fs << "</body></html>" << endl;
	fs.close();
	return 0;
}
