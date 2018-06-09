/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPMicroLocationRTLOITypeEntry : PBCodable <NSCopying> {
    double  _confidence;
    struct { 
        unsigned int confidence : 1; 
        unsigned int uncertaintyInMeters : 1; 
        unsigned int rtLOIType : 1; 
        unsigned int typeSource : 1; 
        unsigned int rtVisitTimesAreQuantized : 1; 
    }  _has;
    int  _rtLOIType;
    NSString * _rtLOIUUID;
    bool  _rtVisitTimesAreQuantized;
    int  _typeSource;
    double  _uncertaintyInMeters;
    NSMutableArray * _visits;
}

@property (nonatomic) double confidence;
@property (nonatomic) bool hasConfidence;
@property (nonatomic) bool hasRtLOIType;
@property (nonatomic, readonly) bool hasRtLOIUUID;
@property (nonatomic) bool hasRtVisitTimesAreQuantized;
@property (nonatomic) bool hasTypeSource;
@property (nonatomic) bool hasUncertaintyInMeters;
@property (nonatomic) int rtLOIType;
@property (nonatomic, retain) NSString *rtLOIUUID;
@property (nonatomic) bool rtVisitTimesAreQuantized;
@property (nonatomic) int typeSource;
@property (nonatomic) double uncertaintyInMeters;
@property (nonatomic, retain) NSMutableArray *visits;

+ (Class)visitsType;

- (void).cxx_destruct;
- (int)StringAsRtLOIType:(id)arg1;
- (int)StringAsTypeSource:(id)arg1;
- (void)addVisits:(id)arg1;
- (void)clearVisits;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfidence;
- (bool)hasRtLOIType;
- (bool)hasRtLOIUUID;
- (bool)hasRtVisitTimesAreQuantized;
- (bool)hasTypeSource;
- (bool)hasUncertaintyInMeters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)rtLOIType;
- (id)rtLOITypeAsString:(int)arg1;
- (id)rtLOIUUID;
- (bool)rtVisitTimesAreQuantized;
- (void)setConfidence:(double)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasRtLOIType:(bool)arg1;
- (void)setHasRtVisitTimesAreQuantized:(bool)arg1;
- (void)setHasTypeSource:(bool)arg1;
- (void)setHasUncertaintyInMeters:(bool)arg1;
- (void)setRtLOIType:(int)arg1;
- (void)setRtLOIUUID:(id)arg1;
- (void)setRtVisitTimesAreQuantized:(bool)arg1;
- (void)setTypeSource:(int)arg1;
- (void)setUncertaintyInMeters:(double)arg1;
- (void)setVisits:(id)arg1;
- (int)typeSource;
- (id)typeSourceAsString:(int)arg1;
- (double)uncertaintyInMeters;
- (id)visits;
- (id)visitsAtIndex:(unsigned long long)arg1;
- (unsigned long long)visitsCount;
- (void)writeTo:(id)arg1;

@end
