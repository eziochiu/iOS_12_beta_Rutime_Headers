/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFMulticaster : NSObject <PFWeakHashDelegate> {
    bool  _acceptingReceivers;
    <PFMulticasterDelegate> * _delegate;
    bool  _invalidated;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _receiverLock;
    NSMutableSet * _strongReceiverLists;
    NSHashTable * _strongReceivers;
    PFWeakHash * _weakReceiverLists;
    PFWeakHash * _weakReceivers;
}

@property (readonly) bool acceptingReceivers;
@property (readonly, copy) NSString *debugDescription;
@property <PFMulticasterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool invalidated;
@property (readonly) Class superclass;

+ (id)_extractProtocolFromSelectorName:(id)arg1 prefix:(id)arg2 suffix:(id)arg3;
+ (bool)_isPlaceholderClassByDecodingClassName;
+ (Class)_multicasterClassForProtocolNamed:(id)arg1;
+ (id)_newProtocolMulticaster;
+ (id)_protocolNameByDecodingClassName;
+ (id)_subclassNameByEncodingProtocolName:(id)arg1 placeholder:(bool)arg2;
+ (void)_validateProtocol:(id)arg1;
+ (void)configureClass:(Class)arg1 asMulticasterOf:(id)arg2;
+ (bool)resolveClassMethod:(SEL)arg1;

- (void).cxx_destruct;
- (void)_enumerateReceiversWithBlock:(id /* block */)arg1;
- (bool)acceptingReceivers;
- (bool)addReceiver:(id)arg1;
- (bool)addWeakReceiver:(id)arg1;
- (id)delegate;
- (void)distributeSelector:(SEL)arg1 distributionBlock:(id /* block */)arg2;
- (void)distributeSelector:(SEL)arg1 toReceivers:(id)arg2 distributionBlock:(id /* block */)arg3;
- (void)handleMultiplyRegistered:(id)arg1;
- (id)init;
- (void)invalidate;
- (bool)invalidated;
- (void)postNoReceiversNotice;
- (void)removeReceiver:(id)arg1;
- (void)setDelegate:(id)arg1;
- (bool)stopAcceptingReceivers;
- (void)weakHashBecameEmpty:(id)arg1;

@end
