#include "json.hpp"

struct Posting {
    std::string docId;
    // add more attributes or methods as required
};

class InvertedIndex {
    public:
        InvertedIndex(const std::string& folderPath); // constructs an Inverted Index according to the given specifications
        int getSize(); // returns the number of unique terms
        void saveToJSON(); // saves the entire Index as a JSON file called <fileName>.json
        std::vector<Posting> retrieve (const std::string& query); // takes a query string and returns a vector of postings matching the query sorted by score, from highest score to lowest score.
};
