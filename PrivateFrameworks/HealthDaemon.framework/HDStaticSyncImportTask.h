/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStaticSyncImportTask : HDStaticSyncTask {
    NSURL * _importDirectoryURL;
}

+ (bool)_applySyncChanges:(id)arg1 store:(id)arg2 profile:(id)arg3 progress:(id)arg4 error:(id*)arg5;
+ (bool)_extractChangeArchive:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 progress:(id)arg4 error:(id*)arg5;
+ (id)_extractChangesFromExtractor:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_queue_importStaticSyncChangesFromDirectory:(id)arg1 syncStore:(id)arg2 progress:(id)arg3 completion:(id /* block */)arg4;
- (id)initWithProfile:(id)arg1 options:(unsigned long long)arg2 storeIdentifier:(id)arg3 URL:(id)arg4;
- (id)runWithCompletion:(id /* block */)arg1;

@end
