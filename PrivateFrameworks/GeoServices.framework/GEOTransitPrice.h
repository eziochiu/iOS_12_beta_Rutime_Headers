/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitPrice : PBCodable <NSCopying> {
    int  _amountInCents;
    NSString * _currencyCode;
    struct { 
        unsigned int amountInCents : 1; 
        unsigned int subunit : 1; 
    }  _has;
    unsigned int  _subunit;
}

@property (nonatomic) int amountInCents;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic) bool hasAmountInCents;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic) bool hasSubunit;
@property (nonatomic) unsigned int subunit;

- (void).cxx_destruct;
- (int)amountInCents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmountInCents;
- (bool)hasCurrencyCode;
- (bool)hasSubunit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmountInCents:(int)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setHasAmountInCents:(bool)arg1;
- (void)setHasSubunit:(bool)arg1;
- (void)setSubunit:(unsigned int)arg1;
- (unsigned int)subunit;
- (void)writeTo:(id)arg1;

@end
