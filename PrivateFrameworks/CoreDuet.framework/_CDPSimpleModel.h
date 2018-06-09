/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDPSimpleModel : NSObject <_CDPModel> {
    unsigned long long  _NEmail;
    unsigned long long  _NPeople;
    unsigned int ** _email;
    float * _email2LogScore;
    unsigned long long * _emailLength;
    <_CDPDataHarvester> * _harvester;
    float  _lambda;
    bool  _loaded;
    NSArray * _people;
    unsigned int ** _people2Email;
    unsigned long long * _people2EmailLength;
    bool  _requireOutgoingInteraction;
    bool  _scoresAreDirty;
    unsigned long long  _size;
    NSIndexSet * _testingIndices;
    double * _timestamp;
    bool * _userIsSender;
    bool * _userIsThreadInitiator;
    float  _w0;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_CDPDataHarvester> *harvester;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) float lambda;
@property (nonatomic, readonly) unsigned long long nEmail;
@property (nonatomic, readonly) unsigned long long nPeople;
@property (nonatomic, readonly) NSArray *people;
@property (nonatomic) bool requireOutgoingInteraction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) float w0;

+ (int)maxNumberOfEmailsSupported;

- (void).cxx_destruct;
- (unsigned int*)_newIdsForPeople:(id)arg1 length:(unsigned long long*)arg2;
- (struct _cdp_prediction_result { int x1; float x2; int x3; int x4; }*)_newPredictionResultWithSeed:(unsigned int*)arg1 seedLength:(unsigned long long)arg2 realSeedLength:(unsigned long long)arg3 maxTrainingEmailID:(unsigned int)arg4;
- (void)_printEmailWithID:(unsigned long long)arg1;
- (void)_printPrediction:(struct _cdp_prediction_result { int x1; float x2; int x3; int x4; }*)arg1;
- (void)_printUserWithID:(unsigned long long)arg1;
- (void)_printUsers:(unsigned int*)arg1 length:(unsigned long long)arg2;
- (void)_reallocModel;
- (id)_testingIndices;
- (void)dealloc;
- (void)getEmail:(unsigned int**)arg1 emailLength:(unsigned long long*)arg2 atIndex:(unsigned long long)arg3;
- (id)harvester;
- (float)lambda;
- (void)loadModel:(id /* block */)arg1;
- (void)makePredictionForGroup:(id)arg1 clientType:(long long)arg2 limit:(long long)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)nEmail;
- (unsigned long long)nPeople;
- (id)people;
- (id)peopleWithID:(unsigned int)arg1;
- (bool)requireOutgoingInteraction;
- (void)setHarvester:(id)arg1;
- (void)setLambda:(float)arg1 w0:(float)arg2;
- (void)setRequireOutgoingInteraction:(bool)arg1;
- (float)w0;

@end
