/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitBrand : PBCodable <NSCopying> {
    unsigned int  _brandIndex;
    struct { 
        unsigned int muid : 1; 
        unsigned int brandIndex : 1; 
    }  _has;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    GEOStyleAttributes * _styleAttributes;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) unsigned int brandIndex;
@property (nonatomic) bool hasBrandIndex;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (unsigned int)brandIndex;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBrandIndex;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasStyleAttributes;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (bool)readFrom:(id)arg1;
- (void)setBrandIndex:(unsigned int)arg1;
- (void)setHasBrandIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
