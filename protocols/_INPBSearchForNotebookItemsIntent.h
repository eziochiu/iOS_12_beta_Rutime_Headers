/* made by EzioChiu.
 */

@protocol _INPBSearchForNotebookItemsIntent <NSObject>

@required

- (int)StringAsDateSearchType:(NSString *)arg1;
- (int)StringAsItemType:(NSString *)arg1;
- (int)StringAsLocationSearchType:(NSString *)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)content;
- (int)dateSearchType;
- (NSString *)dateSearchTypeAsString:(int)arg1;
- (_INPBDateTimeRange *)dateTime;
- (bool)hasContent;
- (bool)hasDateSearchType;
- (bool)hasDateTime;
- (bool)hasIntentMetadata;
- (bool)hasItemType;
- (bool)hasLocation;
- (bool)hasLocationSearchType;
- (bool)hasNotebookItemIdentifier;
- (bool)hasStatus;
- (bool)hasTitle;
- (_INPBIntentMetadata *)intentMetadata;
- (int)itemType;
- (NSString *)itemTypeAsString:(int)arg1;
- (_INPBLocation *)location;
- (int)locationSearchType;
- (NSString *)locationSearchTypeAsString:(int)arg1;
- (NSString *)notebookItemIdentifier;
- (void)setContent:(NSString *)arg1;
- (void)setDateSearchType:(int)arg1;
- (void)setDateTime:(_INPBDateTimeRange *)arg1;
- (void)setHasDateSearchType:(bool)arg1;
- (void)setHasItemType:(bool)arg1;
- (void)setHasLocationSearchType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(_INPBIntentMetadata *)arg1;
- (void)setItemType:(int)arg1;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setLocationSearchType:(int)arg1;
- (void)setNotebookItemIdentifier:(NSString *)arg1;
- (void)setStatus:(int)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (int)status;
- (NSString *)statusAsString:(int)arg1;
- (_INPBDataString *)title;

@end
