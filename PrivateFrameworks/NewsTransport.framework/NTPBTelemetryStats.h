/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTelemetryStats : PBCodable <NSCopying> {
    long long  _count;
    struct { 
        unsigned int count : 1; 
        unsigned int max : 1; 
        unsigned int mean : 1; 
        unsigned int median : 1; 
        unsigned int min : 1; 
        unsigned int percentile95 : 1; 
    }  _has;
    long long  _max;
    long long  _mean;
    long long  _median;
    long long  _min;
    long long  _percentile95;
}

@property (nonatomic) long long count;
@property (nonatomic) bool hasCount;
@property (nonatomic) bool hasMax;
@property (nonatomic) bool hasMean;
@property (nonatomic) bool hasMedian;
@property (nonatomic) bool hasMin;
@property (nonatomic) bool hasPercentile95;
@property (nonatomic) long long max;
@property (nonatomic) long long mean;
@property (nonatomic) long long median;
@property (nonatomic) long long min;
@property (nonatomic) long long percentile95;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasMax;
- (bool)hasMean;
- (bool)hasMedian;
- (bool)hasMin;
- (bool)hasPercentile95;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)max;
- (long long)mean;
- (long long)median;
- (void)mergeFrom:(id)arg1;
- (long long)min;
- (long long)percentile95;
- (bool)readFrom:(id)arg1;
- (void)setCount:(long long)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setHasMax:(bool)arg1;
- (void)setHasMean:(bool)arg1;
- (void)setHasMedian:(bool)arg1;
- (void)setHasMin:(bool)arg1;
- (void)setHasPercentile95:(bool)arg1;
- (void)setMax:(long long)arg1;
- (void)setMean:(long long)arg1;
- (void)setMedian:(long long)arg1;
- (void)setMin:(long long)arg1;
- (void)setPercentile95:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
