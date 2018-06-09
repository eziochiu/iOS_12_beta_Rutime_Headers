/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteRecentResult : CNAutocompleteResult {
    bool  _completesChosenGroup;
    NSDate * _date;
    bool  _matchesSendingAddress;
}

@property bool completesChosenGroup;
@property (readonly) NSDate *date;
@property bool matchesSendingAddress;

+ (id)comparators;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4;
+ (id)groupResultWithDisplayName:(id)arg1 date:(id)arg2;

- (void).cxx_destruct;
- (bool)completesChosenGroup;
- (id)date;
- (bool)matchesSendingAddress;
- (void)setCompletesChosenGroup:(bool)arg1;
- (void)setMatchesSendingAddress:(bool)arg1;

@end
