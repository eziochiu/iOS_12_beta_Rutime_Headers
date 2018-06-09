/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitImporterOptions : NSObject {
    NSURL * _assetStorageURL;
    NSPersistentStoreCoordinator * _coordinator;
    CKDatabase * _database;
    PFCloudKitStoreMonitor * _monitor;
    NSCloudKitMirroringDelegateOptions * _options;
    NSSQLCore * _store;
    NSObject<OS_dispatch_queue> * _workQueue;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly) NSURL *assetStorageURL;
@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) PFCloudKitStoreMonitor *monitor;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *options;
@property (nonatomic, readonly) NSSQLCore *store;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic, readonly) CKRecordZone *zone;

- (void).cxx_destruct;
- (id)assetStorageURL;
- (id)coordinator;
- (id)copy;
- (id)database;
- (void)dealloc;
- (id)initWithOptions:(id)arg1 store:(id)arg2 workQueue:(id)arg3 zone:(id)arg4 andDatabase:(id)arg5;
- (id)monitor;
- (id)options;
- (id)store;
- (id)workQueue;
- (id)zone;

@end
