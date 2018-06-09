/* made by EzioChiu.
 */

@protocol INSearchForNotebookItemsIntentExport <NSObject, JSExport>

@required

- (NSString *)content;
- (long long)dateSearchType;
- (INDateComponentsRange *)dateTime;
- (id)init;
- (long long)itemType;
- (CLPlacemark *)location;
- (long long)locationSearchType;
- (NSString *)notebookItemIdentifier;
- (void)setContent:(NSString *)arg1;
- (void)setDateSearchType:(long long)arg1;
- (void)setDateTime:(INDateComponentsRange *)arg1;
- (void)setItemType:(long long)arg1;
- (void)setLocation:(CLPlacemark *)arg1;
- (void)setLocationSearchType:(long long)arg1;
- (void)setNotebookItemIdentifier:(NSString *)arg1;
- (void)setStatus:(long long)arg1;
- (void)setTitle:(INSpeakableString *)arg1;
- (long long)status;
- (INSpeakableString *)title;

@end
