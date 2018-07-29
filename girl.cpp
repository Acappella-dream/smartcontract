#include <eosiolib/eosio.hpp>
#include <eosiolib/print.hpp>

using namespace eosio;
using namespace std;

uint64_t insert(Feature feature);

Feature GirlBook::findbyId(uint64_t _id){
    address_index addresses(_self, _self); // code, scope
    Feature feature = {};
    auto itr = addresses.find(N(_id));
    if(itr != addresses.end()){
        feature.id = _id;
        feature.account_name = itr->account_name;
        feature.hairColor = itr->hairColor;
        feature.eyeColor = itr->eyeColor;
        feature.skinColor = itr->skinColor;
        feature.noise = itr->noise;
        feature.figure = itr->figure;
        feature.price = itr->price;
        feature.pa_noise = itr->pa_noise;
        feature.mo_noise = itr->mo_noise;
        feature.state = itr->state;
    }
    return feature;
}

vector<Feature> GIrl::findbyAccount(uint64_t _account_name){
    address_index addresses(_self, _self); // code, scope
    Feature feature = {};
    vector<Feature> vec;
    
    auto itr = addresses.find(N(_id));
    if(itr != addresses.end()){
        feature.id = _id;
        feature.account_name = itr->account_name;
        feature.hairColor = itr->hairColor;
        feature.eyeColor = itr->eyeColor;
        feature.skinColor = itr->skinColor;
        feature.noise = itr->noise;
        feature.figure = itr->figure;
        feature.price = itr->price;
        feature.pa_noise = itr->pa_noise;
        feature.mo_noise = itr->mo_noise;
        feature.state = itr->state;
    }
    return feature;

EOSIO_ABI(GirlBook, (insert)(findId)(findAccount))