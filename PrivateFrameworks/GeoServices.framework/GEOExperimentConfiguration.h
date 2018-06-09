/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {
    NSDictionary * _debugClientConfig;
    NSMutableArray * _experimentObservers;
    NSLock * _experimentObserversLock;
    GEOABAssignmentResponse * _experimentsInfo;
    NSLock * _experimentsInfoLock;
    <GEOExperimentServerProxy> * _serverProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedConfiguration;
+ (void)useProxy:(Class)arg1;

- (void).cxx_destruct;
- (id)_debugClientConfig;
- (id)_debug_bucketId;
- (id)_debug_configurationDate;
- (id)_debug_customQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)_debug_datasetId;
- (id)_debug_defaultQuerySubstringForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)arg1;
- (void)_debug_forEachExperimentType:(id /* block */)arg1;
- (void)_debug_forceUpdate;
- (void)_debug_setActiveExperimentBranch:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setCustomQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)_fetchAllAvailableExperimentsResponse:(id /* block */)arg1;
- (id)_mapsAbClientMetadata;
- (id)_parsecClientMetadata;
- (id)_reportAProblemClientMetadata;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (id)_siriClientMetadata;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)addExperimentObserver:(id)arg1 queue:(id)arg2;
- (id)clientConfig;
- (id)clientConfigurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)experimentAssignmentForType:(long long)arg1 dispatcherRequestType:(int)arg2;
- (id)experimentAssignments;
- (id)experimentURLForURL:(id)arg1 type:(long long)arg2 dispatcherRequestType:(int)arg3;
- (id)experimentsInfo;
- (id)init;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)removeExperimentObserver:(id)arg1;
- (void)serverProxy:(id)arg1 didChangeExperimentsInfo:(id)arg2;
- (void)updateURLComponents:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;

@end
