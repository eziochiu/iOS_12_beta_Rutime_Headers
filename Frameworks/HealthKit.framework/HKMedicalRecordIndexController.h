/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalRecordIndexController : NSObject {
    NSMutableDictionary * _activeAnchoredQueries;
    NSObject<OS_dispatch_source> * _anchorCommitTimer;
    NSObject<OS_dispatch_queue> * _clientQueue;
    HKHealthRecordsStore * _healthRecordsStore;
    HKHealthStore * _healthStore;
    bool  _indexStarted;
    NSMutableDictionary * _lastIndexedAnchor;
    id /* block */  _observerBlock;
    CSPrivateSearchableIndex * _spotlightIndex;
}

@property (nonatomic, retain) NSMutableDictionary *activeAnchoredQueries;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *anchorCommitTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HKHealthRecordsStore *healthRecordsStore;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic) bool indexStarted;
@property (nonatomic, retain) NSMutableDictionary *lastIndexedAnchor;
@property (nonatomic, copy) id /* block */ observerBlock;
@property (nonatomic, retain) CSPrivateSearchableIndex *spotlightIndex;

+ (id)indexedSampleTypes;

- (void).cxx_destruct;
- (void)_deleteIndexForObjects:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (void)_queue_commitAnchorUpdates;
- (void)_queue_readLastIndexedAnchorWithCompletion:(id /* block */)arg1;
- (id)_searchableItemAttributeSetWithRecord:(id)arg1 concept:(id)arg2;
- (void)_startIndexingMedicalRecordSamples;
- (void)_updateAnchor:(id)arg1 forType:(id)arg2;
- (void)_updateOrInsertIndexForSamples:(id)arg1 type:(id)arg2 anchor:(id)arg3;
- (id)activeAnchoredQueries;
- (id)anchorCommitTimer;
- (id)clientQueue;
- (void)deleteAllIndexesWithCompletion:(id /* block */)arg1;
- (id)healthRecordsStore;
- (id)healthStore;
- (bool)indexStarted;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2;
- (id)lastIndexedAnchor;
- (id /* block */)observerBlock;
- (void)setActiveAnchoredQueries:(id)arg1;
- (void)setAnchorCommitTimer:(id)arg1;
- (void)setClientQueue:(id)arg1;
- (void)setHealthRecordsStore:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setIndexStarted:(bool)arg1;
- (void)setLastIndexedAnchor:(id)arg1;
- (void)setObserverBlock:(id /* block */)arg1;
- (void)setSpotlightIndex:(id)arg1;
- (id)spotlightIndex;
- (void)startIndexing;
- (void)stopIndexing;

@end
