/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitExporter : NSObject {
    NSObject<PFCloudKitExporterDelegate> * _delegate;
    PFCloudKitExportContext * _exportContext;
    PFCloudKitStoreMonitor * _monitor;
    PFCloudKitExporterOptions * _options;
    NSCloudKitMirroringRequest * _request;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) NSObject<PFCloudKitExporterDelegate> *delegate;
@property (nonatomic, readonly) PFCloudKitExportContext *exportContext;
@property (nonatomic, readonly, copy) PFCloudKitExporterOptions *options;
@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)executeOperationsInContext:(id)arg1 completion:(id /* block */)arg2;
- (id)exportContext;
- (void)exportIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)exportOperationFinished:(id)arg1 withSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithOptions:(id)arg1 request:(id)arg2 store:(id)arg3 workQueue:(id)arg4;
- (id)options;
- (id)request;
- (void)setDelegate:(id)arg1;
- (void)updateSystemFieldsForExportedRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)workQueue;

@end
