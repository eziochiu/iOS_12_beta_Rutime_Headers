/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFormattedStringClientCapabilities : PBCodable <NSCopying> {
    bool  _concatenatingFormatStringsSupported;
    struct { 
        unsigned int concatenatingFormatStringsSupported : 1; 
        unsigned int timestampFormatPatternSupported : 1; 
    }  _has;
    bool  _timestampFormatPatternSupported;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool concatenatingFormatStringsSupported;
@property (nonatomic) bool hasConcatenatingFormatStringsSupported;
@property (nonatomic) bool hasTimestampFormatPatternSupported;
@property (nonatomic) bool timestampFormatPatternSupported;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (bool)concatenatingFormatStringsSupported;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConcatenatingFormatStringsSupported;
- (bool)hasTimestampFormatPatternSupported;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConcatenatingFormatStringsSupported:(bool)arg1;
- (void)setHasConcatenatingFormatStringsSupported:(bool)arg1;
- (void)setHasTimestampFormatPatternSupported:(bool)arg1;
- (void)setTimestampFormatPatternSupported:(bool)arg1;
- (bool)timestampFormatPatternSupported;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
