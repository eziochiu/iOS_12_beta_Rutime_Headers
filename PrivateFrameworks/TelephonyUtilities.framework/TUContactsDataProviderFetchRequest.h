/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUContactsDataProviderFetchRequest : NSObject {
    NSArray * _auxiliaryKeysToFetch;
    bool  _blocked;
    NSString * _callerNameFromNetwork;
    NSString * _contactIdentifier;
    bool  _conversation;
    bool  _emergency;
    NSArray * _handles;
    NSString * _isoCountryCode;
    NSString * _phoneNumberPrefixHint;
    bool  _useNetworkCountryCode;
    bool  _voicemail;
}

@property (nonatomic, copy) NSArray *auxiliaryKeysToFetch;
@property (getter=isBlocked, nonatomic, readonly) bool blocked;
@property (nonatomic, readonly, copy) NSString *callerNameFromNetwork;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (getter=isConversation, nonatomic, readonly) bool conversation;
@property (getter=isEmergency, nonatomic, readonly) bool emergency;
@property (nonatomic, readonly, copy) NSArray *handles;
@property (nonatomic, readonly, copy) NSString *isoCountryCode;
@property (nonatomic, copy) NSString *phoneNumberPrefixHint;
@property (nonatomic) bool useNetworkCountryCode;
@property (getter=isVoicemail, nonatomic, readonly) bool voicemail;

- (void).cxx_destruct;
- (id)auxiliaryKeysToFetch;
- (id)callerNameFromNetwork;
- (id)contactIdentifier;
- (id)description;
- (id)handles;
- (id)init;
- (id)initWithCall:(id)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithHandles:(id)arg1;
- (bool)isBlocked;
- (bool)isConversation;
- (bool)isEmergency;
- (bool)isVoicemail;
- (id)isoCountryCode;
- (id)phoneNumberPrefixHint;
- (void)setAuxiliaryKeysToFetch:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setPhoneNumberPrefixHint:(id)arg1;
- (void)setUseNetworkCountryCode:(bool)arg1;
- (bool)useNetworkCountryCode;

@end