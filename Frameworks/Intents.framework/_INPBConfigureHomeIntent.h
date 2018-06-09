/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBConfigureHomeIntent : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBConfigureHomeIntent> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _entities;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *entities;
@property (nonatomic, readonly) unsigned long long entitiesCount;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;

+ (Class)entitiesType;

- (void).cxx_destruct;
- (void)addEntities:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)entities;
- (id)entitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)entitiesCount;
- (bool)hasIntentMetadata;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

@end
