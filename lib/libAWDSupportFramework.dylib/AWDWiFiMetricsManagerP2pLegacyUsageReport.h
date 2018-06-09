/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerP2pLegacyUsageReport : PBCodable <NSCopying> {
    unsigned int  _activationsSinceLastReport;
    struct { 
        unsigned int longestActiveDurationSinceLastReport : 1; 
        unsigned int shortestActiveDurationSinceLastReport : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalActiveDurationSinceLastReport : 1; 
        unsigned int activationsSinceLastReport : 1; 
    }  _has;
    unsigned long long  _longestActiveDurationSinceLastReport;
    unsigned long long  _shortestActiveDurationSinceLastReport;
    unsigned long long  _timestamp;
    unsigned long long  _totalActiveDurationSinceLastReport;
}

@property (nonatomic) unsigned int activationsSinceLastReport;
@property (nonatomic) bool hasActivationsSinceLastReport;
@property (nonatomic) bool hasLongestActiveDurationSinceLastReport;
@property (nonatomic) bool hasShortestActiveDurationSinceLastReport;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long longestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long shortestActiveDurationSinceLastReport;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalActiveDurationSinceLastReport;

- (unsigned int)activationsSinceLastReport;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActivationsSinceLastReport;
- (bool)hasLongestActiveDurationSinceLastReport;
- (bool)hasShortestActiveDurationSinceLastReport;
- (bool)hasTimestamp;
- (bool)hasTotalActiveDurationSinceLastReport;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)longestActiveDurationSinceLastReport;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivationsSinceLastReport:(unsigned int)arg1;
- (void)setHasActivationsSinceLastReport:(bool)arg1;
- (void)setHasLongestActiveDurationSinceLastReport:(bool)arg1;
- (void)setHasShortestActiveDurationSinceLastReport:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalActiveDurationSinceLastReport:(bool)arg1;
- (void)setLongestActiveDurationSinceLastReport:(unsigned long long)arg1;
- (void)setShortestActiveDurationSinceLastReport:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalActiveDurationSinceLastReport:(unsigned long long)arg1;
- (unsigned long long)shortestActiveDurationSinceLastReport;
- (unsigned long long)timestamp;
- (unsigned long long)totalActiveDurationSinceLastReport;
- (void)writeTo:(id)arg1;

@end
