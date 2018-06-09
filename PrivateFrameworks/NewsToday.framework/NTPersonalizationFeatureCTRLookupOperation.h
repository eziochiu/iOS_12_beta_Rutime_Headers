/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTPersonalizationFeatureCTRLookupOperation : FCOperation {
    <FCReadonlyPersonalizationAggregateStore> * _aggregateStore;
    id /* block */  _lookupCompletion;
    NSArray * _lookupRequests;
    FCPersonalizationTreatment * _personalizationTreatment;
    NSDictionary * _result;
}

@property (nonatomic, retain) <FCReadonlyPersonalizationAggregateStore> *aggregateStore;
@property (nonatomic, copy) id /* block */ lookupCompletion;
@property (nonatomic, copy) NSArray *lookupRequests;
@property (nonatomic, copy) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, copy) NSDictionary *result;

- (void).cxx_destruct;
- (id)aggregateStore;
- (id)init;
- (id /* block */)lookupCompletion;
- (id)lookupRequests;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)personalizationTreatment;
- (id)result;
- (void)setAggregateStore:(id)arg1;
- (void)setLookupCompletion:(id /* block */)arg1;
- (void)setLookupRequests:(id)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setResult:(id)arg1;
- (bool)validateOperation;

@end
