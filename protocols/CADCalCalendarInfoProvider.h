/* made by EzioChiu.
 */

@protocol CADCalCalendarInfoProvider

@required

- (NSArray *)calendarRowIDsInStoreWithRowID:(int)arg1;
- (int)naturalLanguageSuggestionsCalendarRowID;
- (int)suggestionsCalendarRowID;

@end
