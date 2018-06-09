/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentPassAction : NSObject <NSSecureCoding> {
    NSString * _actionDescription;
    NSDate * _availableFrom;
    NSDate * _availableUntil;
    NSString * _confirmationTitle;
    PKEnteredValueActionItem * _enteredValueItem;
    bool  _featured;
    NSString * _footerText;
    bool  _hasRemoteContent;
    NSString * _headerText;
    NSString * _identifier;
    NSDictionary * _localizations;
    NSDictionary * _rawDictionary;
    NSString * _relevantPropertyIdentifier;
    NSArray * _selectedActionItems;
    unsigned long long  _serviceProviderCapabilities;
    NSString * _serviceProviderCountryCode;
    NSString * _serviceProviderIdentifier;
    NSArray * _serviceProviderSupportedNetworks;
    NSString * _title;
    unsigned long long  _type;
    NSString * _unavailableAfterReason;
    NSString * _unavailableBeforeReason;
}

@property (nonatomic, readonly, copy) NSString *actionDescription;
@property (nonatomic, readonly, copy) NSDate *availableFrom;
@property (nonatomic, readonly, copy) NSDate *availableUntil;
@property (nonatomic, readonly, copy) NSString *confirmationTitle;
@property (nonatomic, readonly) PKEnteredValueActionItem *enteredValueItem;
@property (nonatomic, readonly) bool featured;
@property (nonatomic, readonly, copy) NSString *footerText;
@property (nonatomic, readonly) bool hasRemoteContent;
@property (nonatomic, readonly, copy) NSString *headerText;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *relevantPropertyIdentifier;
@property (nonatomic, readonly, copy) NSArray *selectedActionItems;
@property (nonatomic, readonly) unsigned long long serviceProviderCapabilities;
@property (nonatomic, readonly, copy) NSString *serviceProviderCountryCode;
@property (nonatomic, readonly, copy) NSString *serviceProviderIdentifier;
@property (nonatomic, readonly, copy) NSArray *serviceProviderSupportedNetworks;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly, copy) NSString *unavailableAfterReason;
@property (nonatomic, readonly, copy) NSString *unavailableBeforeReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localizableKeys;
- (void)_processLocalizableStrings:(id /* block */)arg1;
- (id)actionDescription;
- (id)actionUpdatedWithDictionary:(id)arg1;
- (id)availableFrom;
- (id)availableUntil;
- (id)confirmationTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)enteredValueItem;
- (bool)featured;
- (id)footerText;
- (bool)hasRemoteContent;
- (id)headerText;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)relevantPropertyIdentifier;
- (id)selectedActionItems;
- (unsigned long long)serviceProviderCapabilities;
- (id)serviceProviderCountryCode;
- (id)serviceProviderIdentifier;
- (id)serviceProviderSupportedNetworks;
- (id)title;
- (unsigned long long)type;
- (id)unavailableAfterReason;
- (id)unavailableBeforeReason;

@end
