/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPreorderManager : NSObject {
    SSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _itemKinds;
    SSXPCConnection * _observerConnection;
    NSObject<OS_dispatch_queue> * _observerQueue;
    struct __CFArray { } * _observers;
    NSArray * _preorders;
}

@property (readonly) NSArray *itemKinds;
@property (readonly) NSArray *preorders;

+ (id)bookStoreItemKinds;
+ (id)musicStoreItemKinds;

- (void)_connectAsObserver;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_registerAsObserver;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)addObserver:(id)arg1;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithItemKinds:(id)arg1;
- (id)itemKinds;
- (id)preorders;
- (void)reloadFromServer;
- (void)removeObserver:(id)arg1;

@end
