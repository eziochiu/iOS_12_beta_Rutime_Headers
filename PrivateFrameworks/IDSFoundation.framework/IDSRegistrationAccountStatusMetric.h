/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRegistrationAccountStatusMetric : NSObject <CUTRTCMetric> {
    int  _accountType;
    bool  _doesExist;
    bool  _isEnabled;
    bool  _isUserDisabled;
    bool  _isiCloudSignedIn;
    bool  _isiTunesSignedIn;
    long long  _registrationError;
    int  _registrationErrorReason;
    long long  _registrationStatus;
    NSString * _serviceIdentifier;
}

@property (nonatomic, readonly) int accountType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) bool doesExist;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEnabled;
@property (nonatomic, readonly) bool isUserDisabled;
@property (nonatomic, readonly) bool isiCloudSignedIn;
@property (nonatomic, readonly) bool isiTunesSignedIn;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long registrationError;
@property (nonatomic, readonly) int registrationErrorReason;
@property (nonatomic, readonly) long long registrationStatus;
@property (nonatomic, readonly) unsigned short rtcType;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)accountType;
- (id)dictionaryRepresentation;
- (bool)doesExist;
- (id)initWithAccountType:(int)arg1 serviceIdentifier:(id)arg2 doesExist:(bool)arg3 isEnabled:(bool)arg4 isUserDisabled:(bool)arg5 isiCloudSignedIn:(bool)arg6 isiTunesSignedIn:(bool)arg7 registrationStatus:(long long)arg8 registrationError:(long long)arg9 registrationErrorReason:(int)arg10;
- (bool)isEnabled;
- (bool)isUserDisabled;
- (bool)isiCloudSignedIn;
- (bool)isiTunesSignedIn;
- (id)name;
- (long long)registrationError;
- (int)registrationErrorReason;
- (long long)registrationStatus;
- (unsigned short)rtcType;
- (id)serviceIdentifier;

@end
