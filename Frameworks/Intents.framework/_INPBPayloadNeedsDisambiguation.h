/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBPayloadNeedsDisambiguation : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBPayloadNeedsDisambiguation> {
    INCodableAttribute * _associatedCodableAttribute;
    NSArray * _disambiguationItems;
    struct { }  _has;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *disambiguationItems;
@property (nonatomic, readonly) unsigned long long disambiguationItemsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)disambiguationItemsType;

- (void).cxx_destruct;
- (void)addDisambiguationItems:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearDisambiguationItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)disambiguationItems;
- (id)disambiguationItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationItemsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setDisambiguationItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end
