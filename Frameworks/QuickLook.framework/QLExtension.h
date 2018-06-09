/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLExtension : NSObject {
    NSObject<OS_dispatch_queue> * _completionHandlersQueue;
    NSXPCConnection * _connection;
    NSExtensionContext * _context;
    NSExtension * _extension;
    NSMutableArray * _extensionRequestHandlers;
    QLGracePeriodTimer * _gracePeriodTimer;
    bool  _isRequestingExtension;
    NSMutableSet * _observers;
    NSObject<OS_dispatch_queue> * _queue;
    id  _requestIdentifier;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *completionHandlersQueue;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic, retain) NSExtensionContext *context;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) NSMutableArray *extensionRequestHandlers;
@property (nonatomic, retain) QLGracePeriodTimer *gracePeriodTimer;
@property (nonatomic, retain) NSMutableSet *observers;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) id requestIdentifier;

- (void).cxx_destruct;
- (void)_callExtensionRequestHandlers;
- (void)_invalidate;
- (void)_invalidateAndCancelExtensionRequest;
- (void)_setupConnectionIfNeededWithCompletionHandler:(id /* block */)arg1;
- (id)completionHandlersQueue;
- (id)connection;
- (id)context;
- (void)dealloc;
- (id)extension;
- (void)extensionContextWithCompletionHandler:(id /* block */)arg1;
- (id)extensionRequestHandlers;
- (id)gracePeriodTimer;
- (id)initWithExtension:(id)arg1;
- (void)invalidateAndCancelExtensionRequest;
- (id)observers;
- (id)queue;
- (void)registerClient:(id)arg1;
- (id)requestIdentifier;
- (void)setCompletionHandlersQueue:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequestHandlers:(id)arg1;
- (void)setGracePeriodTimer:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRequestIdentifier:(id)arg1;
- (void)unregisterClient:(id)arg1;

@end
