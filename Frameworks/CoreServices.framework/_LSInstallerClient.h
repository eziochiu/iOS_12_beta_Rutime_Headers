/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {
    bool  _allCallbacksDeleviered;
    NSString * _bundleID;
    NSURL * _bundleURL;
    struct _opaque_pthread_cond_t { 
        long long __sig; 
        BOOL __opaque[40]; 
    }  _callbacksCompleteCond;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _callbacksCompleteCondMutex;
    NSXPCConnection * _connection;
    unsigned long long  _operationType;
    NSString * _operationTypeString;
    NSDictionary * _options;
    id /* block */  _progressBlock;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _uninstaller;
}

@property (nonatomic) bool allCallbacksDeleviered;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long operationType;
@property (nonatomic, readonly) NSString *operationTypeString;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic, copy) id /* block */ progressBlock;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (getter=isUninstaller, nonatomic) bool uninstaller;

+ (id)installerWithBundleID:(id)arg1 bundleURL:(id)arg2 options:(id)arg3 callbackBlock:(id /* block */)arg4;
+ (id)installerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(id /* block */)arg3;
+ (id)unInstallerWithBundleID:(id)arg1 options:(id)arg2 callbackBlock:(id /* block */)arg3;

- (void)_invalidate;
- (void)_waitForAllCallbackMessagesToExecute;
- (bool)allCallbacksDeleviered;
- (id)bundleID;
- (id)bundleURL;
- (void)callbackDeliveryComplete;
- (id)connection;
- (void)dealloc;
- (id)init;
- (bool)isUninstaller;
- (unsigned long long)operationType;
- (id)operationTypeString;
- (id)options;
- (id /* block */)progressBlock;
- (id)queue;
- (void)setAllCallbacksDeleviered:(bool)arg1;
- (void)setBundleID:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setOperationType:(unsigned long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setProgressBlock:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setUninstaller:(bool)arg1;
- (void)updateCallbackWithData:(id)arg1;

@end
