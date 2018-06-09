/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKMedicalRecordSearchController : NSObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HKHealthStore * _healthStore;
    HKMedicalRecordIndexController * _indexController;
    CSSearchQuery * _runningQuery;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKMedicalRecordIndexController *indexController;
@property (nonatomic, retain) CSSearchQuery *runningQuery;

+ (id)queryAttributes;

- (void).cxx_destruct;
- (id)_normalizedQueryFromQuery:(id)arg1;
- (id)clientQueue;
- (void)dealloc;
- (void)deleteAllIndexesWithCompletion:(id /* block */)arg1;
- (id)healthStore;
- (id)indexController;
- (id)initWithHealthStore:(id)arg1 healthRecordsStore:(id)arg2;
- (id)runningQuery;
- (void)searchMedicalRecordUUIDsWithQuery:(id)arg1 completion:(id /* block */)arg2;
- (void)searchMedicalRecordsWithQuery:(id)arg1 healthStore:(id)arg2 completion:(id /* block */)arg3;
- (void)setClientQueue:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setIndexController:(id)arg1;
- (void)setRunningQuery:(id)arg1;

@end
