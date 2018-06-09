/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNFavoritesEntrySnapshot : NSObject {
    NSString * _abDatabaseUUID;
    int  _abIdentifier;
    int  _abUid;
    NSString * _label;
    NSString * _labeledValueIdentifier;
    NSString * _name;
    CNFavoritesEntry * _originalEntry;
    NSString * _propertyKey;
    NSString * _value;
}

@property (nonatomic, copy) NSString *abDatabaseUUID;
@property (nonatomic) int abIdentifier;
@property (nonatomic) int abUid;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labeledValueIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CNFavoritesEntry *originalEntry;
@property (nonatomic, copy) NSString *propertyKey;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)abDatabaseUUID;
- (int)abIdentifier;
- (int)abUid;
- (id)initWithOriginalEntry:(id)arg1;
- (id)label;
- (id)labeledValueIdentifier;
- (id)name;
- (id)originalEntry;
- (id)propertyKey;
- (void)setAbDatabaseUUID:(id)arg1;
- (void)setAbIdentifier:(int)arg1;
- (void)setAbUid:(int)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabeledValueIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyKey:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
