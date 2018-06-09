/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMParentalControls : NSObject {
    bool  _active;
    bool  _disableAV;
    bool  _forceChatLogging;
    NSMutableDictionary * _parentalControls;
    bool  _shouldPostNotifications;
}

@property (nonatomic, readonly) bool _disableAV;
@property (nonatomic, readonly) bool _forceChatLogging;
@property (nonatomic, readonly) NSMutableDictionary *_parentalControls;
@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) bool disableAV;
@property (nonatomic, readonly) bool forceChatLogging;
@property (nonatomic) bool shouldPostNotifications;

+ (id)objectForKey:(id)arg1;
+ (id)standardControls;

- (void).cxx_destruct;
- (bool)_disableAV;
- (bool)_forceChatLogging;
- (void)_managedPrefsNotification:(id)arg1;
- (id)_parentalControls;
- (id)_serviceWithName:(id)arg1;
- (void)_updateParentalSettings;
- (bool)accountHasWhitelist:(id)arg1;
- (bool)accountIsEnabled:(id)arg1;
- (bool)active;
- (void)dealloc;
- (bool)disableAV;
- (bool)disableAccount:(id)arg1;
- (bool)disableService:(id)arg1;
- (bool)forceChatLogging;
- (bool)forceWhitelistForAccount:(id)arg1;
- (bool)forceWhitelistForService:(id)arg1;
- (id)init;
- (bool)okToConnectAccount:(id)arg1;
- (void)setShouldPostNotifications:(bool)arg1;
- (bool)shouldPostNotifications;
- (id)whitelistForAccount:(id)arg1;
- (id)whitelistForService:(id)arg1;

@end
