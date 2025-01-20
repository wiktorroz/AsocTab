#include <iostream>
#include <vector>

using namespace std;

template<typename Key, typename Value>
class Map{
    private:
        vector<Key> keys;
        vector<Value> values;
    public:
        ~Map(){
            keys.clear();
            values.clear();
        };

        void add(Key key, Value value){
            keys.push_back(key);
            values.push_back(value);
        };

        Value * find(Key key){
            for(unsigned int i = 0;i < keys.size();i++){
                if(key == keys[i]){
                    return &values[i];
                }
            }
            return NULL;
        }

        friend ostream& operator<<(ostream& s,const Map& map){
            for(unsigned int i = 0;i < map.keys.size();i++){
                s << "Key: " << map.keys[i] << "; Value: " << map.values[i] << ";\n";
            }
            return s;
        }
};
