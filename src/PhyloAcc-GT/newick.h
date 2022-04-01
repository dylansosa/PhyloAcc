#ifndef NEWICK_H_INCLUDED
#define NEWICK_H_INCLUDED

#include <map>
#include <vector>
#include <string>
#include <armadillo>

using namespace std;
using namespace arma;

struct PhyloTree
{
    int S;                              // num of living species
    vector< string > species_names;     // species names
    vector< string > nodes_names;       // all nodes names
    vector< vector<bool> > dag;         // connection matrix
    vector< double > distances;         // branch distances
    vector< double > thetas;         // 2\mu N
    // base compostion and substritution rate
    vec pi;
    mat subs_rate;
};

// load the phylogenetic tree
PhyloTree LoadPhyloTree(string params_path);
PhyloTree LoadPhyloTree_text(string params_path, map<string, int>& speciesname);
#endif // NEWICK_H_INCLUDED
