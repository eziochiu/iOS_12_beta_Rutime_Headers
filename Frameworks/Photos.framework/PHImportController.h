/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImportController : NSObject <ICDeviceBrowserDelegate> {
    NSXPCConnection * _connection;
    <PHImportDelegate> * _delegate;
    ICDeviceBrowser * _deviceBrowser;
    NSMutableDictionary * _importSourcesByDevice;
    NSObject<OS_os_log> * _log;
    PFDispatchQueue * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourceListLock;
}

@property (retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PHImportDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICDeviceBrowser *deviceBrowser;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *importSourcesByDevice;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (readonly) PFDispatchQueue *queue;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } sourceListLock;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accessSourceList:(id /* block */)arg1;
- (id)connection;
- (id)delegate;
- (id)deviceBrowser;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(bool)arg3;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(bool)arg3;
- (id)filterDuplicates:(id)arg1 onSource:(id)arg2 options:(id)arg3 library:(id)arg4;
- (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 atEnd:(id /* block */)arg6;
- (id)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 delegate:(id)arg5 performanceDelegate:(id)arg6 atEnd:(id /* block */)arg7;
- (id)importSourceForUrls:(id)arg1;
- (id)importSourcesByDevice;
- (id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 atEnd:(id /* block */)arg5;
- (id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 performanceDelegate:(id)arg5 atEnd:(id /* block */)arg6;
- (id)init;
- (id)log;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeviceBrowser:(id)arg1;
- (void)setImportSourcesByDevice:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setSourceListLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (bool)sourceIsConnected:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })sourceListLock;

@end
