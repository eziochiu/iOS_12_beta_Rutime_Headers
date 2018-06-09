/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileProviderXPCMessenger : NSObject <NSFileProviderXPCInterface> {
    <NSFileProvider> * _fileProvider;
    NSFileProviderProxy * _fileProviderProxy;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_makeProvider:(id)arg1 provideItemAtURL:(id)arg2 options:(unsigned long long)arg3 forAccessClaimWithID:(id)arg4 processIdentifier:(int)arg5 completionHandler:(id /* block */)arg6;
- (oneway void)cancelProvidingItemAtURL:(id)arg1 forClaimWithID:(id)arg2;
- (void)checkInProviderWithReply:(id /* block */)arg1;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithFileProvider:(id)arg1 queue:(id)arg2;
- (id)initWithFileProviderProxy:(id)arg1;
- (void)invalidate;
- (oneway void)observeEndOfWriteAtURL:(id)arg1 forClaimWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3;
- (oneway void)observePresentationChangeOfKind:(id)arg1 forPresenterWithID:(id)arg2 fromProcessWithIdentifier:(int)arg3 observedUbiquityAttributes:(id)arg4 url:(id)arg5 newURL:(id)arg6;
- (void)provideItemAtURL:(id)arg1 forClaimWithID:(id)arg2 madeByClientWithProcessIdentifier:(int)arg3 options:(unsigned long long)arg4 completionHandler:(id /* block */)arg5;
- (void)providePhysicalItemForURL:(id)arg1 completionHandler:(id /* block */)arg2;

@end
