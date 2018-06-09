/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOABConfigValue : PBCodable <NSCopying> {
    bool  _boolValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int intValue : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    long long  _intValue;
    NSString * _stringValue;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasIntValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) long long intValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (bool)boolValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBoolValue;
- (bool)hasDoubleValue;
- (bool)hasIntValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (long long)intValue;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasIntValue:(bool)arg1;
- (void)setIntValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
