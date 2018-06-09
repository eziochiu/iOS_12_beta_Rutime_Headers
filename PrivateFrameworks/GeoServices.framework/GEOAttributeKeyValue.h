/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributeKeyValue : PBCodable <NSCopying> {
    NSString * _attributeKey;
    NSString * _attributeValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *attributeKey;
@property (nonatomic, retain) NSString *attributeValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (id)attributeKey;
- (id)attributeValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributeKey:(id)arg1;
- (void)setAttributeValue:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end