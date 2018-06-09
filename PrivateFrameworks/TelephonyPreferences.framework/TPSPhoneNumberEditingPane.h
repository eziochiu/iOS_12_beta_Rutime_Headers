/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences
 */

@interface TPSPhoneNumberEditingPane : PSTextEditingPane {
    NSString * _previousStringSuggestion;
}

@property (nonatomic, copy) NSString *previousStringSuggestion;

- (void).cxx_destruct;
- (id)previousStringSuggestion;
- (void)setPreferenceSpecifier:(id)arg1;
- (void)setPreviousStringSuggestion:(id)arg1;
- (struct { id x1; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;

@end
