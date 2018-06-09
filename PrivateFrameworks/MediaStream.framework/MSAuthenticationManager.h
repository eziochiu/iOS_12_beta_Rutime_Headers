/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAuthenticationManager : NSObject {
    ACAccountStore * _acAccountStore;
    MSAlertManager * _alertManager;
    int  _bagRefetchCount;
    bool  _isListeningToKeybagChanges;
    int  _keybagChangeNotifyToken;
    int  _state;
}

@property (nonatomic) bool isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;
@property (getter=isWaitingForAuth, nonatomic, readonly) bool waitingForAuth;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)_renewCredentialsForAccount:(id)arg1;
- (void)dealloc;
- (void)didEncounterAuthenticationFailureForPersonID:(id)arg1;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)arg1;
- (id)initWithAlertManager:(id)arg1;
- (bool)isListeningToKeybagChanges;
- (bool)isWaitingForAuth;
- (int)keybagChangeNotifyToken;
- (void)rearmAuthenticationAlert;
- (void)setIsListeningToKeybagChanges:(bool)arg1;
- (void)setKeybagChangeNotifyToken:(int)arg1;
- (void)waitForDeviceUnlock;

@end
