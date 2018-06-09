/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction

@property (nonatomic, readonly) TRDeviceSetupLegacySetupActionAuthInfo *authInfo;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) bool diagnosticsEnabled;
@property (nonatomic, readonly) NSString *homeSharingAppleID;
@property (nonatomic, readonly) NSString *homeSharingGroupID;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *networkPassword;
@property (nonatomic, readonly) NSString *networkSSID;
@property (nonatomic, readonly) bool rememberPassword;

- (id)authInfo;
- (id)countryCode;
- (bool)diagnosticsEnabled;
- (id)homeSharingAppleID;
- (id)homeSharingGroupID;
- (id)initWithAuthInfo:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 diagnosticsEnabled:(bool)arg4 language:(id)arg5 countryCode:(id)arg6 homeSharingAppleID:(id)arg7 homeSharingGroupID:(id)arg8 rememberPassword:(bool)arg9;
- (id)language;
- (id)networkPassword;
- (id)networkSSID;
- (bool)rememberPassword;

@end
