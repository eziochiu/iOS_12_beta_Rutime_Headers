/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDictionary : PBCodable <INCodableAttributeAssociating, NSCopying, NSSecureCoding, _INPBDictionary> {
    INCodableAttribute * _associatedCodableAttribute;
    struct { }  _has;
    NSArray * _pairs;
}

@property (nonatomic, copy) INCodableAttribute *associatedCodableAttribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *pairs;
@property (nonatomic, readonly) unsigned long long pairsCount;
@property (readonly) Class superclass;

+ (Class)pairType;

- (void).cxx_destruct;
- (void)addPair:(id)arg1;
- (id)associatedCodableAttribute;
- (void)clearPairs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)pairAtIndex:(unsigned long long)arg1;
- (id)pairs;
- (unsigned long long)pairsCount;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedCodableAttribute:(id)arg1;
- (void)setPairs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
