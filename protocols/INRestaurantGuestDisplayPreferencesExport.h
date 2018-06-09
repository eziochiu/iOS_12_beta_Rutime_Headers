/* made by EzioChiu.
 */

@protocol INRestaurantGuestDisplayPreferencesExport <NSObject, JSExport>

@required

- (bool)emailAddressEditable;
- (bool)emailAddressFieldShouldBeDisplayed;
- (id)init;
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
