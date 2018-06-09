/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLTrainer : NSObject {
    struct CPMLDelegate { void *x1; void *x2; } * _cpmlDelegate;
    CPMLStorageManager * _storageManager;
    <CPMLAlgorithmProtocol> * _theDelegate;
    struct CPMLCDB { struct CPMLStatistics {} *x1; struct sqlite3 {} *x2; struct sqlite3 {} *x3; struct CPMLIterator {} *x4; struct CPMLRemapper {} *x5; struct CPMLTunableData {} *x6; } * cpCDB;
    struct CPMLAlgorithm { int (**x1)(); BOOL x2[32]; void *x3; struct CPMLCDB {} *x4; struct CPMLDelegate {} *x5; struct CPMLDelegateEngine {} *x6; struct CPMLTunableData {} *x7; struct CPMLIterator {} *x8; struct CPMLSerialization {} *x9; } * cpMLAlgo;
    struct CPMLRemapper { bool x1; bool x2; bool x3; struct sqlite3 {} *x4; struct CPMLStatistics {} *x5; struct vector<int, std::__1::allocator<int> > {} *x6; struct vector<int, std::__1::allocator<int> > {} *x7; } * cpRemapper;
    struct CPMLTunableData { int x1; void *x2; void *x3; } * cpTuneableData;
    CPMLDB * cpmlDB;
    CPMLSchema * cpmlSchema;
    int  mapFunction;
    struct sqlite3 { } * modelDB;
    NSDictionary * modelPlist;
    bool  shouldFail;
    struct CPMLSerialization { int (**x1)(); bool x2; int x3; int x4; void *x5; struct sqlite3 {} *x6; } * trainerCPSerializer;
    struct CPMLStatistics { struct vector<int, std::__1::allocator<int> > { int *x_1_1_1; int *x_1_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_1_1_3; } x1; struct vector<double, std::__1::allocator<double> > { double *x_2_1_1; double *x_2_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_2_1_3; } x2; struct vector<int, std::__1::allocator<int> > { int *x_3_1_1; int *x_3_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_3_1_3; } x3; struct vector<int, std::__1::allocator<int> > { int *x_4_1_1; int *x_4_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_4_1_3; } x4; struct vector<int, std::__1::allocator<int> > { int *x_5_1_1; int *x_5_1_2; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x_3_2_1; } x_5_1_3; } x5; int x6; int x7; int x8; int x9; bool x10; struct vector<double, std::__1::allocator<double> > { double *x_11_1_1; double *x_11_1_2; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x_3_2_1; } x_11_1_3; } x11; } * trainerCPStatistics;
}

- (void).cxx_destruct;
- (void)buildTrainingMachineLearningAlgorithm:(id)arg1;
- (void)dealloc;
- (id)fileProtectionClassRequest:(id)arg1;
- (id)getSolution;
- (id)init:(id)arg1 withModelDBPath:(id)arg2 withPropertyList:(id)arg3;
- (void)train:(bool)arg1;

@end
