/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLHSA2LoginNotification : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _appleID;
    NSString * _approveButtonTitle;
    NSString * _codePrompt;
    NSString * _deviceColorString;
    NSString * _deviceModel;
    NSString * _deviceType;
    NSString * _dismissButtonTitle;
    NSString * _informativeText;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSString * _pushMessageID;
    NSSet * _supportedDismissActions;
    NSString * _title;
    bool  _userAllowedSignIn;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *appleID;
@property (nonatomic, copy) NSString *approveButtonTitle;
@property (nonatomic, copy) NSString *codePrompt;
@property (nonatomic, copy) NSString *deviceColorString;
@property (nonatomic, copy) NSString *deviceModel;
@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *dismissButtonTitle;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, copy) NSNumber *latitude;
@property (nonatomic, copy) NSNumber *longitude;
@property (nonatomic, copy) NSString *pushMessageID;
@property (nonatomic, copy) NSSet *supportedDismissActions;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) bool userAllowedSignIn;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)appleID;
- (id)approveButtonTitle;
- (id)codePrompt;
- (id)deviceColorString;
- (id)deviceModel;
- (id)deviceType;
- (id)dismissButtonTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)followUpItemUserInfo;
- (id)informativeText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFollowUpItemUserInfo:(id)arg1;
- (id)latitude;
- (id)longitude;
- (id)pushMessageID;
- (void)setAltDSID:(id)arg1;
- (void)setAppleID:(id)arg1;
- (void)setApproveButtonTitle:(id)arg1;
- (void)setCodePrompt:(id)arg1;
- (void)setDeviceColorString:(id)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setDismissButtonTitle:(id)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setPushMessageID:(id)arg1;
- (void)setSupportedDismissActions:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserAllowedSignIn:(bool)arg1;
- (id)supportedDismissActions;
- (id)title;
- (bool)userAllowedSignIn;

@end
