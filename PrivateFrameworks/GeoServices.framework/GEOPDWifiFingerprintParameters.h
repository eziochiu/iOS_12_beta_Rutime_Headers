/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDWifiFingerprintParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int maxLabels : 1; 
    }  _has;
    unsigned int  _maxLabels;
    NSMutableArray * _measurements;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasMaxLabels;
@property (nonatomic) unsigned int maxLabels;
@property (nonatomic, retain) NSMutableArray *measurements;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)measurementType;

- (void).cxx_destruct;
- (void)addMeasurement:(id)arg1;
- (void)clearMeasurements;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxLabels;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxLabels;
- (id)measurementAtIndex:(unsigned long long)arg1;
- (id)measurements;
- (unsigned long long)measurementsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxLabels:(bool)arg1;
- (void)setMaxLabels:(unsigned int)arg1;
- (void)setMeasurements:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
