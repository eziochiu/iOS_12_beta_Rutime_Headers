/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMoveFileIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBMoveFileIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    _INPBString * _destinationName;
    NSArray * _entityNames;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _entityTypes;
    struct { 
        unsigned int overwrite : 1; 
        unsigned int success : 1; 
    }  _has;
    bool  _overwrite;
    _INPBString * _sourceName;
    bool  _success;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *destinationName;
@property (nonatomic, copy) NSArray *entityNames;
@property (nonatomic, readonly) unsigned long long entityNamesCount;
@property (nonatomic, readonly) int*entityTypes;
@property (nonatomic, readonly) unsigned long long entityTypesCount;
@property (nonatomic, readonly) bool hasDestinationName;
@property (nonatomic) bool hasOverwrite;
@property (nonatomic, readonly) bool hasSourceName;
@property (nonatomic) bool hasSuccess;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool overwrite;
@property (nonatomic, retain) _INPBString *sourceName;
@property (nonatomic) bool success;
@property (readonly) Class superclass;

+ (Class)entityNameType;

- (void).cxx_destruct;
- (int)StringAsEntityTypes:(id)arg1;
- (void)addEntityName:(id)arg1;
- (void)addEntityType:(int)arg1;
- (id)associatedCodableAttribute;
- (void)clearEntityNames;
- (void)clearEntityTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (id)entityNameAtIndex:(unsigned long long)arg1;
- (id)entityNames;
- (unsigned long long)entityNamesCount;
- (int)entityTypeAtIndex:(unsigned long long)arg1;
- (int*)entityTypes;
- (id)entityTypesAsString:(int)arg1;
- (unsigned long long)entityTypesCount;
- (bool)hasDestinationName;
- (bool)hasOverwrite;
- (bool)hasSourceName;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)overwrite;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setEntityNames:(id)arg1;
- (void)setEntityTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasOverwrite:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setOverwrite:(bool)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (id)sourceName;
- (bool)success;
- (void)writeTo:(id)arg1;

@end
