/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileReactorProxy : NSObject {
    NSXPCConnection * _client;
    unsigned int  _effectiveUserIdentifier;
    NSFileAccessNode * _itemLocation;
    id  _reactorID;
}

@property unsigned int effectiveUserIdentifier;

+ (void)_enumerateParentDirectoriesStartingAtURL:(id)arg1 usingBlock:(id /* block */)arg2;

- (id)_clientProxy;
- (bool)allowedForURL:(id)arg1;
- (id)client;
- (void)collectDebuggingInformationWithCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithIndenting:(id)arg1;
- (unsigned int)effectiveUserIdentifier;
- (void)forwardUsingProxy:(id)arg1;
- (id)initWithClient:(id)arg1 reactorID:(id)arg2;
- (void)invalidate;
- (id)itemLocation;
- (id)reactorID;
- (void)setEffectiveUserIdentifier:(unsigned int)arg1;
- (void)setItemLocation:(id)arg1;

@end
