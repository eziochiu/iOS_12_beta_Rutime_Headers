/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
 */

@interface CPMLModel : NSObject {
    NSObject<OS_dispatch_queue> * _dispatch_queue;
    void * _mData;
    NSString * _modelPath;
    double * _realBase;
    NSString * _savedPlistPath;
    unsigned long long  _totalBytesIntSection;
    unsigned long long  _totalBytesRealSection;
    CPMLModelEvaluate * cpModelEvaluate;
}

@property (retain) CPMLModelEvaluate *cpModelEvaluate;

+ (id)initCPModelPath:(id)arg1 withConfiguration:(id)arg2;

- (void).cxx_destruct;
- (void)boundResult:(id)arg1;
- (id)cpModelEvaluate;
- (id)evalArray:(id)arg1;
- (id)evalDict:(id)arg1;
- (id)evalNSObjectV:(id)arg1;
- (id)evalString:(id)arg1;
- (id)getPropertyList;
- (id)initWithModelPath:(id)arg1 withConfiguration:(id)arg2;
- (id)initWithModelPath:(id)arg1 withPropertyListPath:(id)arg2;
- (void)initializeModel:(id)arg1 withConfiguration:(id)arg2;
- (bool)reset;
- (void)setCPMLAlgorithm:(id)arg1;
- (void)setCPMLAlgorithmEngine:(id)arg1;
- (void)setCpModelEvaluate:(id)arg1;
- (void)setDispatchQueue:(id)arg1;
- (bool)updateModelWithCPDB:(id)arg1;
- (bool)updateModelWithDB:(id)arg1;

@end
