/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUMutableCallDisplayContext : TUCallDisplayContext

@property (nonatomic, copy) NSString *callDirectoryExtensionIdentifier;
@property (nonatomic, copy) NSString *callDirectoryLabel;
@property (nonatomic, copy) NSString *callDirectoryLocalizedExtensionContainingAppName;
@property (nonatomic, copy) NSString *companyName;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *contactLabel;
@property (nonatomic, copy) NSString *contactName;
@property (nonatomic, copy) NSString *firstName;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) int legacyAddressBookIdentifier;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *mapName;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSPersonNameComponents *personNameComponents;
@property (nonatomic, copy) NSString *suggestedName;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)mergeValuesFromDisplayContext:(id)arg1;

@end
