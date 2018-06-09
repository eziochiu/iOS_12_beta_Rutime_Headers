/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTSectionPresencePersonalizationOperation : FCOperation {
    NSArray * _absoluteRequests;
    <FCReadonlyPersonalizationAggregateStore> * _aggregateStore;
    id /* block */  _personalizationCompletion;
    FCPersonalizationTreatment * _personalizationTreatment;
    NSArray * _relativeRequests;
    NSDictionary * _result;
}

@property (nonatomic, copy) NSArray *absoluteRequests;
@property (nonatomic, retain) <FCReadonlyPersonalizationAggregateStore> *aggregateStore;
@property (nonatomic, copy) id /* block */ personalizationCompletion;
@property (nonatomic, copy) FCPersonalizationTreatment *personalizationTreatment;
@property (nonatomic, copy) NSArray *relativeRequests;
@property (nonatomic, copy) NSDictionary *result;

- (void).cxx_destruct;
- (id)absoluteRequests;
- (id)aggregateStore;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)personalizationCompletion;
- (id)personalizationTreatment;
- (id)relativeRequests;
- (id)result;
- (void)setAbsoluteRequests:(id)arg1;
- (void)setAggregateStore:(id)arg1;
- (void)setPersonalizationCompletion:(id /* block */)arg1;
- (void)setPersonalizationTreatment:(id)arg1;
- (void)setRelativeRequests:(id)arg1;
- (void)setResult:(id)arg1;
- (bool)validateOperation;

@end
