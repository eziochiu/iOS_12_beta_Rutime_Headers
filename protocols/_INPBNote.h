/* made by EzioChiu.
 */

@protocol _INPBNote <NSObject>

@required

+ (Class)contentType;

- (void)addContent:(_INPBNoteContent *)arg1;
- (void)clearContents;
- (_INPBNoteContent *)contentAtIndex:(unsigned long long)arg1;
- (NSArray *)contents;
- (unsigned long long)contentsCount;
- (_INPBDateTime *)createdDateTime;
- (_INPBDataString *)groupName;
- (bool)hasCreatedDateTime;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasTitle;
- (NSString *)identifier;
- (_INPBDateTime *)modifiedDateTime;
- (void)setContents:(NSArray *)arg1;
- (void)setCreatedDateTime:(_INPBDateTime *)arg1;
- (void)setGroupName:(_INPBDataString *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setModifiedDateTime:(_INPBDateTime *)arg1;
- (void)setTitle:(_INPBDataString *)arg1;
- (_INPBDataString *)title;

@end
