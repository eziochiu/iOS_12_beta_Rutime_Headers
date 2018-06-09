/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentContactResolver : NSObject {
    NSObject<OS_dispatch_queue> * _contactLookupQueue;
    CNContactStore * _contactStore;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSHashTable * _delegates;
    NSCache * _handleToContactCache;
    NSArray * _keysToFetch;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) NSHashTable *delegates;
@property (nonatomic, retain) NSCache *handleToContactCache;
@property (nonatomic, readonly) NSArray *keysToFetch;

- (void).cxx_destruct;
- (void)_handleContactStoreDidChangeNotification:(id)arg1;
- (id)_predicateForHandle:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)contactForHandle:(id)arg1;
- (void)contactForHandle:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)contactStore;
- (id)delegates;
- (id)handleToContactCache;
- (bool)haveCachedResultForHandle:(id)arg1;
- (id)initWithContactStore:(id)arg1 keysToFetch:(id)arg2;
- (void)invalidateCache;
- (id)keysToFetch;
- (void)removeDelegate:(id)arg1;
- (void)setContactStore:(id)arg1;
- (void)setDelegates:(id)arg1;
- (void)setHandleToContactCache:(id)arg1;

@end
