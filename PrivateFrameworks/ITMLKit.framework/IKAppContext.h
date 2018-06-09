/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppContext : NSObject <IKAppCacheDelegate, IKJSInspectorControllerDelegate, ISURLOperationDelegate> {
    <IKApplication> * _app;
    IKAppCache * _appCache;
    <IKAppScriptFallbackHandler> * _appScriptFallbackHandler;
    double  _appScriptTimeoutInterval;
    bool  _appUsesDefaultStyleSheets;
    IKJSArrayBufferStore * _arrayBufferStore;
    bool  _canAccessPendingQueue;
    <IKAppContextDelegate> * _delegate;
    struct { 
        bool respondsToHighlightViewForOneElement; 
        bool respondsToHighlightViewsForManyElements; 
        bool respondsToCancelHighlightForAppContext; 
        bool respondsToDidInspectElementModeChanged; 
    }  _delegateFlags;
    bool  _isValid;
    JSContext * _jsContext;
    IKJSFoundation * _jsFoundation;
    struct __CFRunLoop { } * _jsThreadRunLoop;
    struct __CFRunLoopSource { } * _jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> * _lowMemoryWarningSource;
    bool  _mescalPrimeEnabledForXHRRequests;
    unsigned long long  _mode;
    NSString * _nextJSChecksum;
    NSMutableArray * _onStartQueue;
    NSMutableArray * _pendingQueue;
    NSMutableArray * _postEvaluationBlocks;
    bool  _privileged;
    id  _reloadData;
    bool  _remoteInspectionEnabled;
    NSURL * _resolvedBootURL;
    bool  _respondsToTraitCollection;
    NSError * _responseError;
    NSString * _responseScript;
    bool  _running;
    bool  _trusted;
    NSThread * _validThread;
    IKViewElementRegistry * _viewElementRegistry;
    IKJSInspectorController * _webInspectorController;
}

@property (nonatomic, readonly) <IKApplication> *app;
@property (nonatomic, readonly) IKAppCache *appCache;
@property (nonatomic, retain) <IKAppScriptFallbackHandler> *appScriptFallbackHandler;
@property (nonatomic) double appScriptTimeoutInterval;
@property (nonatomic, readonly) bool appUsesDefaultStyleSheets;
@property (nonatomic, readonly) IKJSArrayBufferStore *arrayBufferStore;
@property (nonatomic) bool canAccessPendingQueue;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <IKAppContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isValid;
@property (nonatomic, retain) JSContext *jsContext;
@property (nonatomic, retain) IKJSFoundation *jsFoundation;
@property (nonatomic) bool mescalPrimeEnabledForXHRRequests;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentage;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (nonatomic, readonly) NSNumber *metricsLoadURLSessionDuration;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, copy) NSString *nextJSChecksum;
@property (nonatomic, readonly) NSMutableArray *onStartQueue;
@property (nonatomic, retain) NSMutableArray *pendingQueue;
@property (nonatomic, retain) NSMutableArray *postEvaluationBlocks;
@property (getter=isPrivileged, nonatomic) bool privileged;
@property (nonatomic, retain) id reloadData;
@property (nonatomic) bool remoteInspectionEnabled;
@property (nonatomic, readonly, copy) NSURL *resolvedBootURL;
@property (nonatomic, retain) NSError *responseError;
@property (nonatomic, copy) NSString *responseScript;
@property (getter=isRunning) bool running;
@property (readonly) Class superclass;
@property (getter=isTrusted, nonatomic) bool trusted;
@property (nonatomic, readonly) IKViewElementRegistry *viewElementRegistry;
@property (nonatomic, retain) IKJSInspectorController *webInspectorController;

+ (id)currentAppContext;
+ (bool)isInFactoryMode;
+ (void)registerPrivateProtocols:(id)arg1 forClass:(Class)arg2;

- (void).cxx_destruct;
- (void)_addStopRecordToPendingQueueWithReload:(bool)arg1;
- (id)_appTraitCollection;
- (void)_dispatchError:(id)arg1;
- (void)_doEvaluate:(id /* block */)arg1;
- (void)_drainOnStartQueue;
- (void)_enqueueOnStartOrExecute:(id /* block */)arg1;
- (id)_errorWithMessage:(id)arg1;
- (void)_evaluate:(id /* block */)arg1;
- (void)_evaluateFoundationWithDeviceConfig:(id)arg1 addPrivateInterfaces:(bool)arg2;
- (void)_invalidateJSThread;
- (void)_jsThreadMain;
- (id)_preferredLaunchURL;
- (bool)_prepareStartWithURL:(id)arg1;
- (void)_sourceCanceledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_sourcePerform;
- (void)_sourceScheduledOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (void)_startWithScript:(id)arg1 scriptUrl:(id)arg2 wasLoadedFromFallback:(bool)arg3;
- (void)_startWithURL:(id)arg1 urlTrusted:(bool)arg2;
- (void)_stopAndReload:(bool)arg1;
- (void)addPostEvaluateBlock:(id /* block */)arg1;
- (id)app;
- (id)appCache;
- (void)appCache:(id)arg1 didUpdateWithChecksum:(id)arg2;
- (id)appScriptFallbackHandler;
- (double)appScriptTimeoutInterval;
- (void)appTraitCollectionChanged:(id)arg1;
- (bool)appUsesDefaultStyleSheets;
- (id)arrayBufferStore;
- (bool)canAccessPendingQueue;
- (bool)cancelHighlightView;
- (void)contextDidFailWithError:(id)arg1;
- (void)contextDidStartWithJS:(id)arg1 options:(id)arg2;
- (void)contextDidStopWithOptions:(id)arg1;
- (id)delegate;
- (void)evaluate:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)evaluateDelegateBlockSync:(id /* block */)arg1;
- (void)evaluateFoundationJS;
- (void)exitAppWithOptions:(id)arg1;
- (void)handleCacheUpdate;
- (void)handleReloadWithUrgencyType:(unsigned long long)arg1 minInterval:(double)arg2 data:(id)arg3;
- (bool)highlightViewForElementWithID:(long long)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (bool)highlightViewsForElementsWithIDs:(id)arg1 contentColor:(id)arg2 paddingColor:(id)arg3 borderColor:(id)arg4 marginColor:(id)arg5;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 cache:(bool)arg3 delegate:(id)arg4;
- (id)initWithApplication:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)inspectElement:(id)arg1;
- (void)inspectElementModeChanged:(bool)arg1;
- (bool)isInspectElementModeEnabled;
- (bool)isPrivileged;
- (bool)isRunning;
- (bool)isTrusted;
- (bool)isValid;
- (id)jsContext;
- (id)jsFoundation;
- (void)launchAppWithOptions:(id)arg1;
- (bool)mescalPrimeEnabledForXHRRequests;
- (unsigned long long)mode;
- (id)nextJSChecksum;
- (id)onStartQueue;
- (void)openURLWithOptions:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)pendingQueue;
- (id)postEvaluationBlocks;
- (id)registerLoaderWithIdentifier:(id)arg1;
- (void)reload;
- (id)reloadData;
- (bool)remoteInspectionEnabled;
- (id)resolvedBootURL;
- (id)responseError;
- (id)responseScript;
- (void)resumeWithOptions:(id)arg1;
- (void)setAppScriptFallbackHandler:(id)arg1;
- (void)setAppScriptTimeoutInterval:(double)arg1;
- (void)setCanAccessPendingQueue:(bool)arg1;
- (void)setException:(id)arg1 withErrorMessage:(id)arg2;
- (void)setIsValid:(bool)arg1;
- (void)setJsContext:(id)arg1;
- (void)setJsFoundation:(id)arg1;
- (void)setMescalPrimeEnabledForXHRRequests:(bool)arg1;
- (void)setNextJSChecksum:(id)arg1;
- (void)setPendingQueue:(id)arg1;
- (void)setPostEvaluationBlocks:(id)arg1;
- (void)setPrivileged:(bool)arg1;
- (void)setReloadData:(id)arg1;
- (void)setRemoteInspectionEnabled:(bool)arg1;
- (void)setResponseError:(id)arg1;
- (void)setResponseScript:(id)arg1;
- (void)setRunning:(bool)arg1;
- (void)setTrusted:(bool)arg1;
- (void)setWebInspectorController:(id)arg1;
- (void)start;
- (void)stop;
- (void)suspendWithOptions:(id)arg1;
- (void)unregisterLoaderWithIdentifier:(id)arg1;
- (bool)validateDOMDocument:(id)arg1 error:(id*)arg2;
- (id)viewElementRegistry;
- (id)webInspectorController;

@end
