/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDCKEvent : PBCodable <NSCopying> {
    bool  _allDay;
    bool  _cancelled;
    unsigned long long  _categoryType;
    NSString * _content;
    double  _creationTimestamp;
    NSString * _domain;
    NSString * _extraKey;
    NSString * _groupId;
    struct { 
        unsigned int creationTimestamp : 1; 
        unsigned int lastModifiedTimestamp : 1; 
        unsigned int categoryType : 1; 
        unsigned int allDay : 1; 
        unsigned int cancelled : 1; 
    }  _has;
    double  _lastModifiedTimestamp;
    NSMutableArray * _locations;
    NSData * _schemaOrg;
    NSString * _sourceKey;
    NSString * _templateName;
    NSString * _title;
    SGDCKTimeRange * _when;
}

@property (nonatomic) bool allDay;
@property (nonatomic) bool cancelled;
@property (nonatomic) unsigned long long categoryType;
@property (nonatomic, retain) NSString *content;
@property (nonatomic) double creationTimestamp;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, retain) NSString *extraKey;
@property (nonatomic, retain) NSString *groupId;
@property (nonatomic) bool hasAllDay;
@property (nonatomic) bool hasCancelled;
@property (nonatomic) bool hasCategoryType;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic) bool hasCreationTimestamp;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, readonly) bool hasExtraKey;
@property (nonatomic, readonly) bool hasGroupId;
@property (nonatomic) bool hasLastModifiedTimestamp;
@property (nonatomic, readonly) bool hasSchemaOrg;
@property (nonatomic, readonly) bool hasSourceKey;
@property (nonatomic, readonly) bool hasTemplateName;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, readonly) bool hasWhen;
@property (nonatomic) double lastModifiedTimestamp;
@property (nonatomic, retain) NSMutableArray *locations;
@property (nonatomic, retain) NSData *schemaOrg;
@property (nonatomic, retain) NSString *sourceKey;
@property (nonatomic, retain) NSString *templateName;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) SGDCKTimeRange *when;

+ (Class)locationsType;

- (void).cxx_destruct;
- (unsigned long long)StringAsCategoryType:(id)arg1;
- (void)addLocations:(id)arg1;
- (bool)allDay;
- (bool)cancelled;
- (unsigned long long)categoryType;
- (id)categoryTypeAsString:(unsigned long long)arg1;
- (void)clearLocations;
- (id)content;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationTimestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (id)extraKey;
- (id)groupId;
- (bool)hasAllDay;
- (bool)hasCancelled;
- (bool)hasCategoryType;
- (bool)hasContent;
- (bool)hasCreationTimestamp;
- (bool)hasDomain;
- (bool)hasExtraKey;
- (bool)hasGroupId;
- (bool)hasLastModifiedTimestamp;
- (bool)hasSchemaOrg;
- (bool)hasSourceKey;
- (bool)hasTemplateName;
- (bool)hasTitle;
- (bool)hasWhen;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastModifiedTimestamp;
- (id)locations;
- (id)locationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)schemaOrg;
- (void)setAllDay:(bool)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCategoryType:(unsigned long long)arg1;
- (void)setContent:(id)arg1;
- (void)setCreationTimestamp:(double)arg1;
- (void)setDomain:(id)arg1;
- (void)setExtraKey:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setHasAllDay:(bool)arg1;
- (void)setHasCancelled:(bool)arg1;
- (void)setHasCategoryType:(bool)arg1;
- (void)setHasCreationTimestamp:(bool)arg1;
- (void)setHasLastModifiedTimestamp:(bool)arg1;
- (void)setLastModifiedTimestamp:(double)arg1;
- (void)setLocations:(id)arg1;
- (void)setSchemaOrg:(id)arg1;
- (void)setSourceKey:(id)arg1;
- (void)setTemplateName:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWhen:(id)arg1;
- (id)sourceKey;
- (id)templateName;
- (id)title;
- (id)when;
- (void)writeTo:(id)arg1;

@end
