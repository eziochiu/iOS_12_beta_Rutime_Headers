/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBGenericIntentResponse : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBGenericIntentResponse> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    _INPBIntentMetadata * _metadata;
    NSArray * _properties;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *metadata;
@property (nonatomic, copy) NSArray *properties;
@property (nonatomic, readonly) unsigned long long propertiesCount;
@property (readonly) Class superclass;

+ (Class)propertiesType;

- (void).cxx_destruct;
- (void)addProperties:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)properties;
- (id)propertiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)propertiesCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)writeTo:(id)arg1;

@end
