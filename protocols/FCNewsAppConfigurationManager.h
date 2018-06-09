/* made by EzioChiu.
 */

@protocol FCNewsAppConfigurationManager <NSObject>

@required

- (void)addAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;
- (<FCNewsAppConfiguration> *)appConfiguration;
- (void)fetchAppConfigurationIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSError *, void*
- (void)fetchAppConfigurationIfNeededWithCompletionQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSError *, void*
- (void)fetchTrendingSearchesIfNeededWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)refreshAppConfigurationIfNeededWithCompletionQueue:(void *)arg1 refreshCompletion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <FCNewsAppConfiguration> *, NSError *, void*
- (void)removeAppConfigObserver:(id <FCNewsAppConfigurationObserving>)arg1;

@optional

- (NSArray *)additionalSegmentSetIDs;
- (NSArray *)availableExperiments;
- (NSNumber *)currentModdedBucketID;
- (NSString *)feldsparID;
- (void)overrideConfigWithTreatment:(NSNumber *)arg1;
- (bool)overrideDisableABTesting;
- (NSArray *)overrideSegmentSetIDs;
- (NSArray *)segmentSetIDs;
- (void)setAdditionalSegmentSetIDs:(NSArray *)arg1;
- (void)setOverrideDisableABTesting:(bool)arg1;
- (void)setOverrideSegmentSetIDs:(NSArray *)arg1;
- (NSArray *)treatmentIDs;

@end
