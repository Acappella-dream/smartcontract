#include <eosiolib/eosio.hpp>
#include <vector>

using namespace eosio;
using namespace std;

typedef struct _Feature{
	uint64_t id;
	uint64_t account_name;
	string hairColor;
	string eyeColor;
	string skinColor;
	string noise;
	string figure;
	uint64_t price;
	string pa_noise;
	string mo_noise;
	uint64_t state;
}Feature;

class GirlBook : public eosio::contract
{
	// @abi table data i64
	struct address {
		uint64_t id;
		uint64_t account_name;
		string hairColor;
		string eyeColor;
		string skinColor;
		string noise;
		string figure;
		uint64_t price;
		string pa_noise;
		string mo_noise;(
		uint64_t state;

		uint64_t primary_key() const { return id; }
        uint64_t get_account() const {return(account_name;}
		EOSLIB_SERIALIZE(address, (id)(account_name)(hairColor)(eyeColor)(skinColor)(noise)(figure)(price)(pa_noise)(mo_noise)(state))
	};
public:
	GirlBook(account_name self) :contract(self),total_id(0) {}
	typedef eosio::multi_index< N(address), address, indexed_by<N(account_name), const_mem_fun<address, uint64_t, &address::get_index>>> address_index;

	// @abi action
	uint64_t insert(Feature features);
	Feature findid(uint64_t _id);
	vector<Feature> findaccount(uint64_t _account_name);
};