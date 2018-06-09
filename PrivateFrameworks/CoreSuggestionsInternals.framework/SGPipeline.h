/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPipeline : SGPipelineDissector {
    NSDictionary * _dissectorsAndDependencies;
}

+ (id)customPipeline:(id)arg1;
+ (id)dependencyClassesForDissectorClass:(Class)arg1;
+ (id)emptyPipeline;
+ (id)fullPipeline;
+ (id)parallelPipeline:(id)arg1;
+ (id)quotedRegionPipeline;
+ (id)quotedRegionPipelineForIpsosTesting;
+ (id)retrainingPipeline;
+ (id)sharedBackgroundProcessingQueue;
+ (id)sharedBackgroundStorageQueue;

- (void).cxx_destruct;
- (void)_dissectEntity:(id)arg1 inContext:(id)arg2 andThen:(id /* block */)arg3;
- (void)dissect:(id)arg1;
- (void)dissect:(id)arg1 andStore:(id)arg2;
- (void)dissect:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStore:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2;
- (void)dissectAndStoreEntity:(id)arg1 inContext:(id)arg2 destinationStore:(id)arg3;
- (void)dissectAndStoreSpotlightEntity:(id)arg1 bundleIdentifier:(id)arg2 uniqueIdentifier:(id)arg3 domainIdentifier:(id)arg4 inContext:(id)arg5;
- (void)dissectEntity:(id)arg1 andStore:(id)arg2;
- (id)dissectOperations:(id)arg1;
- (id)dissectOperations:(id)arg1 inContext:(id)arg2;
- (id)geocodeOperation:(id)arg1 withDependencies:(id)arg2;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6;
- (id)storeOperation:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 withStore:(id)arg5 dependencies:(id)arg6 originalEnrichmentCount:(unsigned long long)arg7;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3;
- (id)storeOperation:(id)arg1 withStore:(id)arg2 dependencies:(id)arg3 originalEnrichmentCount:(unsigned long long)arg4;

@end
