/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INRestaurantGuestDisplayPreferences : NSObject <INRestaurantGuestDisplayPreferencesExport, NSCopying, NSSecureCoding> {
    bool  _emailAddressEditable;
    bool  _emailAddressFieldShouldBeDisplayed;
    bool  _nameEditable;
    bool  _nameFieldFirstNameOptional;
    bool  _nameFieldLastNameOptional;
    bool  _nameFieldShouldBeDisplayed;
    bool  _phoneNumberEditable;
    bool  _phoneNumberFieldShouldBeDisplayed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool emailAddressEditable;
@property (nonatomic) bool emailAddressFieldShouldBeDisplayed;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool nameEditable;
@property (nonatomic) bool nameFieldFirstNameOptional;
@property (nonatomic) bool nameFieldLastNameOptional;
@property (nonatomic) bool nameFieldShouldBeDisplayed;
@property (nonatomic) bool phoneNumberEditable;
@property (nonatomic) bool phoneNumberFieldShouldBeDisplayed;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (bool)emailAddressEditable;
- (bool)emailAddressFieldShouldBeDisplayed;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)nameEditable;
- (bool)nameFieldFirstNameOptional;
- (bool)nameFieldLastNameOptional;
- (bool)nameFieldShouldBeDisplayed;
- (bool)phoneNumberEditable;
- (bool)phoneNumberFieldShouldBeDisplayed;
- (void)setEmailAddressEditable:(bool)arg1;
- (void)setEmailAddressFieldShouldBeDisplayed:(bool)arg1;
- (void)setNameEditable:(bool)arg1;
- (void)setNameFieldFirstNameOptional:(bool)arg1;
- (void)setNameFieldLastNameOptional:(bool)arg1;
- (void)setNameFieldShouldBeDisplayed:(bool)arg1;
- (void)setPhoneNumberEditable:(bool)arg1;
- (void)setPhoneNumberFieldShouldBeDisplayed:(bool)arg1;

@end
