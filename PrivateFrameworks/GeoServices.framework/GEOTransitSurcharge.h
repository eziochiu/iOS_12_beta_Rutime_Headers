/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSurcharge : PBCodable <NSCopying> {
    struct { 
        unsigned int numberOfLegs : 1; 
        unsigned int paymentType : 1; 
    }  _has;
    unsigned int  _numberOfLegs;
    int  _paymentType;
    NSMutableArray * _surchargeUnits;
}

@property (nonatomic) bool hasNumberOfLegs;
@property (nonatomic) bool hasPaymentType;
@property (nonatomic) unsigned int numberOfLegs;
@property (nonatomic) int paymentType;
@property (nonatomic, retain) NSMutableArray *surchargeUnits;

+ (Class)surchargeUnitType;

- (void).cxx_destruct;
- (int)StringAsPaymentType:(id)arg1;
- (void)addSurchargeUnit:(id)arg1;
- (void)clearSurchargeUnits;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfLegs;
- (bool)hasPaymentType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfLegs;
- (int)paymentType;
- (id)paymentTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfLegs:(bool)arg1;
- (void)setHasPaymentType:(bool)arg1;
- (void)setNumberOfLegs:(unsigned int)arg1;
- (void)setPaymentType:(int)arg1;
- (void)setSurchargeUnits:(id)arg1;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;
- (id)surchargeUnits;
- (unsigned long long)surchargeUnitsCount;
- (void)writeTo:(id)arg1;

@end