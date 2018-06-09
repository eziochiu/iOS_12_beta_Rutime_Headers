/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXCallDirectoryExtensionContext : NSExtensionContext <CXCallDirectoryProviderVendorProtocol> {
    <CXCallDirectoryExtensionContextDelegate> * _delegate;
    bool  _hasQueriedIsIncremental;
    bool  _incremental;
    long long  _pendingBlockingEntryChangeType;
    CXCallDirectoryMutablePhoneNumberEntryData * _pendingBlockingEntryData;
    long long  _pendingIdentificationEntryChangeType;
    CXCallDirectoryMutableLabeledPhoneNumberEntryData * _pendingIdentificationEntryDataForAddition;
    CXCallDirectoryMutablePhoneNumberEntryData * _pendingIdentificationEntryDataForRemoval;
    id /* block */  _remoteObjectProxyGenerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CXCallDirectoryExtensionContextDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasQueriedIsIncremental;
@property (readonly) unsigned long long hash;
@property (getter=isIncremental, nonatomic, readonly) bool incremental;
@property (nonatomic) long long pendingBlockingEntryChangeType;
@property (nonatomic, retain) CXCallDirectoryMutablePhoneNumberEntryData *pendingBlockingEntryData;
@property (nonatomic) long long pendingIdentificationEntryChangeType;
@property (nonatomic, retain) CXCallDirectoryMutableLabeledPhoneNumberEntryData *pendingIdentificationEntryDataForAddition;
@property (nonatomic, retain) CXCallDirectoryMutablePhoneNumberEntryData *pendingIdentificationEntryDataForRemoval;
@property (nonatomic, copy) id /* block */ remoteObjectProxyGenerator;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)_flushPendingBlockingEntryData;
- (void)_flushPendingIdentificationEntryData;
- (void)_performBlockIfIncremental:(id /* block */)arg1 usingSelectorForExceptionMessage:(SEL)arg2;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1 synchronous:(bool)arg2;
- (void)addBlockingEntryWithNextSequentialPhoneNumber:(long long)arg1;
- (void)addIdentificationEntryWithNextSequentialPhoneNumber:(long long)arg1 label:(id)arg2;
- (void)appendBlockingEntryPhoneNumber:(long long)arg1 changeType:(long long)arg2;
- (void)appendIdentificationEntryForAdditionWithPhoneNumber:(long long)arg1 label:(id)arg2;
- (void)appendIdentificationEntryForRemovalWithPhoneNumber:(long long)arg1;
- (void)completeRequestWithCompletionHandler:(id /* block */)arg1;
- (id)delegate;
- (bool)hasQueriedIsIncremental;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (bool)isIncremental;
- (long long)pendingBlockingEntryChangeType;
- (id)pendingBlockingEntryData;
- (long long)pendingIdentificationEntryChangeType;
- (id)pendingIdentificationEntryDataForAddition;
- (id)pendingIdentificationEntryDataForRemoval;
- (id /* block */)remoteObjectProxyGenerator;
- (void)removeAllBlockingEntries;
- (void)removeAllIdentificationEntries;
- (void)removeBlockingEntryWithPhoneNumber:(long long)arg1;
- (void)removeIdentificationEntryWithPhoneNumber:(long long)arg1;
- (oneway void)requestFailedWithError:(id)arg1 reply:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setHasQueriedIsIncremental:(bool)arg1;
- (void)setPendingBlockingEntryChangeType:(long long)arg1;
- (void)setPendingBlockingEntryData:(id)arg1;
- (void)setPendingIdentificationEntryChangeType:(long long)arg1;
- (void)setPendingIdentificationEntryDataForAddition:(id)arg1;
- (void)setPendingIdentificationEntryDataForRemoval:(id)arg1;
- (void)setRemoteObjectProxyGenerator:(id /* block */)arg1;

@end
