/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSearchForNotebookItemsIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBSearchForNotebookItemsIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    NSString * _content;
    int  _dateSearchType;
    _INPBDateTimeRange * _dateTime;
    struct { 
        unsigned int dateSearchType : 1; 
        unsigned int itemType : 1; 
        unsigned int locationSearchType : 1; 
        unsigned int status : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    int  _itemType;
    _INPBLocation * _location;
    int  _locationSearchType;
    NSString * _notebookItemIdentifier;
    int  _status;
    _INPBDataString * _title;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (nonatomic, copy) NSString *content;
@property (nonatomic) int dateSearchType;
@property (nonatomic, retain) _INPBDateTimeRange *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic) bool hasDateSearchType;
@property (nonatomic, readonly) bool hasDateTime;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasItemType;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic) bool hasLocationSearchType;
@property (nonatomic, readonly) bool hasNotebookItemIdentifier;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) int itemType;
@property (nonatomic, retain) _INPBLocation *location;
@property (nonatomic) int locationSearchType;
@property (nonatomic, copy) NSString *notebookItemIdentifier;
@property (nonatomic) int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *title;

- (void).cxx_destruct;
- (int)StringAsDateSearchType:(id)arg1;
- (int)StringAsItemType:(id)arg1;
- (int)StringAsLocationSearchType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)associatedCodableAttribute;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dateSearchType;
- (id)dateSearchTypeAsString:(int)arg1;
- (id)dateTime;
- (id)dictionaryRepresentation;
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
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (int)itemType;
- (id)itemTypeAsString:(int)arg1;
- (id)location;
- (int)locationSearchType;
- (id)locationSearchTypeAsString:(int)arg1;
- (id)notebookItemIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setDateSearchType:(int)arg1;
- (void)setDateTime:(id)arg1;
- (void)setHasDateSearchType:(bool)arg1;
- (void)setHasItemType:(bool)arg1;
- (void)setHasLocationSearchType:(bool)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setItemType:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationSearchType:(int)arg1;
- (void)setNotebookItemIdentifier:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
