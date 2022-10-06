struct values {
    vector<int> ts;
    vector<string> s;
    int size = 0;
    values() {}
    values(int timestamp, string value) { add(timestamp, value); }
    void add(int timestamp, string value) {
        ts.push_back(timestamp);
        s.push_back(value);
        size++;
    }
    string find(int timestamp) {
        if (size == 0)
            return "";
        else {
            int index =
                lower_bound(ts.begin(), ts.end(), timestamp) - ts.begin();
            if (index >= size) index = size - 1;

            while (index > 0 && ts[index] > timestamp) index--;

            if (ts[index] <= timestamp)
                return s[index];
            else
                return "";
        }
    }
};
class TimeMap {
   public:
    map<string, values> mp;
    TimeMap() {}
    void set(string key, string value, int timestamp) {
        mp[key].add(timestamp, value);
    }
    string get(string key, int timestamp) { 
        return mp[key].find(timestamp); 
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */