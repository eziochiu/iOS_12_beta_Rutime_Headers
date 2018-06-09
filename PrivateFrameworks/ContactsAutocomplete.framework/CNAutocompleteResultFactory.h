/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteResultFactory : NSObject {
    NSString * _preferredDomain;
    NSString * _sendingAddress;
}

+ (id)factoryWithPriorityDomain:(id)arg1 sendingAddress:(id)arg2;

- (void).cxx_destruct;
- (void)applyLastSendingAddressBitToResult:(id)arg1;
- (void)applyPreferredDomainBitToResult:(id)arg1;
- (void)applySearchContextToResult:(id)arg1;
- (id)calendarServerResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3;
- (id)directoryServerResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3;
- (id)duetResultWithDisplayName:(id)arg1 value:(id)arg2 contactIdentifier:(id)arg3;
- (id)frequentRecentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4 group:(bool)arg5 completesChosenGroup:(bool)arg6;
- (id)infrequentRecentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 group:(bool)arg6 completesChosenGroup:(bool)arg7;
- (id)initWithPriorityDomain:(id)arg1 sendingAddress:(id)arg2;
- (id)localContactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 contactIdentifier:(id)arg4;
- (id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2;
- (id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2 membersProvider:(id /* block */)arg3;
- (id)recentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 group:(bool)arg6 completesChosenGroup:(bool)arg7;
- (id)suggestedResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3;

@end
