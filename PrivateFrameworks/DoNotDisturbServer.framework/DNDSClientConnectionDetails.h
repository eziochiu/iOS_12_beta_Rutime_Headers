/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
 */

@interface DNDSClientConnectionDetails : NSObject {
    NSXPCConnection * _connection;
    NSString * _identifier;
    bool  _wantsAssertionUpdates;
    bool  _wantsSettingsUpdates;
    bool  _wantsStateUpdates;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) bool wantsAssertionUpdates;
@property (nonatomic) bool wantsSettingsUpdates;
@property (nonatomic) bool wantsStateUpdates;

- (void).cxx_destruct;
- (id)connection;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 connection:(id)arg2;
- (void)setWantsAssertionUpdates:(bool)arg1;
- (void)setWantsSettingsUpdates:(bool)arg1;
- (void)setWantsStateUpdates:(bool)arg1;
- (bool)wantsAssertionUpdates;
- (bool)wantsSettingsUpdates;
- (bool)wantsStateUpdates;

@end