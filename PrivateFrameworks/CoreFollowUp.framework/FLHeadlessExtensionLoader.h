/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLHeadlessExtensionLoader : NSObject {
    <FLExtensionHostContextInterface> * _delegate;
    NSExtension * _extension;
    FLExtensionContext * _extensionContext;
    FLExtensionHostContext * _hostContext;
    NSString * _identifier;
    id /* block */  _requestInterruptionBlock;
    NSUUID * _sessionID;
}

@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) id /* block */ requestInterruptionBlock;
@property (nonatomic, retain) NSUUID *sessionID;

+ (id)sharedExtensionQueue;

- (void).cxx_destruct;
- (id)_hostContextForExtension:(id)arg1;
- (bool)_loadExtension:(id*)arg1;
- (id)_loadExtensionForIdentifier:(id)arg1 error:(id*)arg2;
- (bool)_setupSessionIfNeeded:(id*)arg1;
- (id)extension;
- (id)identifier;
- (id)initWithFollowUp:(id)arg1 andDelegate:(id)arg2;
- (id)initWithIdentifier:(id)arg1;
- (id)remoteInterface;
- (id /* block */)requestInterruptionBlock;
- (id)sessionID;
- (void)setRequestInterruptionBlock:(id /* block */)arg1;
- (void)setSessionID:(id)arg1;

@end
