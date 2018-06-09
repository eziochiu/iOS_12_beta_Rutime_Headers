/* made by EzioChiu.
 */

@protocol GEOExperimentServerProxy <NSObject>

@required

- (void)_debug_fetchAllAvailableExperiments:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOABAssignmentResponse *, NSError *, struct NSDictionary { Class x1; }*, void*
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(NSDictionary *)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(NSDictionary *)arg1;
- (void)_debug_setQuerySubstring:(NSString *)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)abAssignUUIDWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSDate *, NSError *, void*
- (<GEOExperimentServerProxyDelegate> *)delegate;
- (GEOABAssignmentResponse *)experimentsInfo;
- (void)forceUpdate;
- (id)initWithDelegate:(id <GEOExperimentServerProxyDelegate>)arg1;
- (void)refreshDatasetABStatus:(GEOPDDatasetABStatus *)arg1;
- (void)setDelegate:(id <GEOExperimentServerProxyDelegate>)arg1;

@end
