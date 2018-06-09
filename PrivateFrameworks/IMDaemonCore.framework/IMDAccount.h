/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDAccount : NSObject <IMSystemMonitorListener> {
    NSString * _account;
    NSMutableDictionary * _accountDefaults;
    int  _disconnectReason;
    bool  _isLoading;
    bool  _isManaged;
    NSDictionary * _lastPostedStatus;
    unsigned int  _loginStatus;
    NSString * _loginStatusMessage;
    NSMutableDictionary * _myStatus;
    IMDService * _service;
    IMDServiceSession * _session;
}

@property (nonatomic, readonly, retain) NSDictionary *accountDefaults;
@property (nonatomic, readonly, retain) NSString *accountID;
@property (nonatomic, readonly, retain) NSDictionary *accountInfoToPost;
@property (nonatomic, readonly) bool canMakeDowngradeRoutingChecks;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) bool isDisabled;
@property (nonatomic) bool isLoading;
@property (nonatomic) bool isManaged;
@property (nonatomic, readonly, retain) NSString *loginID;
@property (nonatomic, readonly, retain) NSDictionary *registrationAlertInfo;
@property (nonatomic, readonly) int registrationError;
@property (nonatomic, readonly) int registrationStatus;
@property (nonatomic, readonly, retain) IMDService *service;
@property (nonatomic, readonly) int serviceDisconnectReason;
@property (nonatomic, readonly) unsigned int serviceLoginStatus;
@property (nonatomic, readonly, retain) NSString *serviceLoginStatusMessage;
@property (nonatomic, retain) IMDServiceSession *session;
@property (nonatomic, readonly) bool shouldPublishNowPlaying;
@property (nonatomic, readonly, retain) NSDictionary *status;
@property (nonatomic, readonly, retain) NSDictionary *statusToPost;
@property (nonatomic, readonly, retain) NSDictionary *statusToSave;
@property (nonatomic) bool wasDisabledAutomatically;

- (void)_forceSetLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (id)_registrationInfo;
- (void)_updateIdle;
- (id)accountDefaults;
- (id)accountID;
- (id)accountInfoToPost;
- (bool)canMakeDowngradeRoutingChecks;
- (void)changeStatus:(id)arg1;
- (void)createSessionIfNecessary;
- (void)dealloc;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3;
- (bool)isActive;
- (bool)isDisabled;
- (bool)isLoading;
- (bool)isManaged;
- (id)loginID;
- (void)postAccountCapabilities;
- (void)postAccountCapabilitiesToListener:(id)arg1;
- (id)registrationAlertInfo;
- (int)registrationError;
- (int)registrationStatus;
- (void)releaseSession;
- (id)service;
- (int)serviceDisconnectReason;
- (unsigned int)serviceLoginStatus;
- (id)serviceLoginStatusMessage;
- (id)session;
- (void)setIsLoading:(bool)arg1;
- (void)setIsManaged:(bool)arg1;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setLoginStatus:(unsigned int)arg1 message:(id)arg2 reason:(int)arg3 properties:(id)arg4;
- (void)setRegistrationStatus:(int)arg1 error:(int)arg2 alertInfo:(id)arg3;
- (void)setSession:(id)arg1;
- (void)setWasDisabledAutomatically:(bool)arg1;
- (bool)shouldPublishNowPlaying;
- (id)status;
- (id)statusToPost;
- (id)statusToSave;
- (void)systemDidBecomeIdle;
- (void)systemDidBecomeUnidle;
- (void)tunesController:(id)arg1 playerInfoChanged:(id)arg2;
- (bool)wasDisabledAutomatically;
- (void)writeAccountDefaults:(id)arg1;

@end
