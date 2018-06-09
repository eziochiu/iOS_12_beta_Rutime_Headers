/* made by EzioChiu
   Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXXPCCallSource : CXCallSource {
    NSString * _applicationIdentifier;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSSet * _capabilities;
    NSXPCConnection * _connection;
    bool  _hasVoIPBackgroundMode;
}

@property (nonatomic, copy) NSString *applicationIdentifier;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSURL *bundleURL;
@property (nonatomic, copy) NSSet *capabilities;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (nonatomic) bool hasVoIPBackgroundMode;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)capabilities;
- (id)connection;
- (void)dealloc;
- (bool)hasVoIPBackgroundMode;
- (id)identifier;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (bool)isConnected;
- (bool)isPermittedToUsePrivateAPI;
- (bool)isPermittedToUsePublicAPI;
- (int)processIdentifier;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setHasVoIPBackgroundMode:(bool)arg1;
- (id)vendorProtocolDelegate;

@end
