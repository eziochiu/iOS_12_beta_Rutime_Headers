/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDataCollectionAssertion : HDAssertion {
    double  _collectionInterval;
    HDDataCollectionManager * _dataCollectionManager;
    HDDataCollectionObserverState * _observerState;
    NSSet * _sampleTypes;
}

@property (nonatomic, readonly) double collectionInterval;
@property (nonatomic, readonly) HDDataCollectionManager *dataCollectionManager;
@property (nonatomic, copy) HDDataCollectionObserverState *observerState;
@property (nonatomic, readonly) NSSet *sampleTypes;

- (void).cxx_destruct;
- (double)collectionInterval;
- (id)dataCollectionManager;
- (id)initWithOwnerIdentifier:(id)arg1 sampleTypes:(id)arg2 observerState:(id)arg3 dataCollectionManager:(id)arg4;
- (id)observerState;
- (id)sampleTypes;
- (void)setObserverState:(id)arg1;

@end
