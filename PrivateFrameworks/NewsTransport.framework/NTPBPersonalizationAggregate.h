/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationAggregate : PBCodable <FCMutablePersonalizationAggregate, FCPersonalizationAggregate, NSCopying> {
    double  _clicks;
    unsigned long long  _eventCount;
    NSString * _featureKey;
    struct { 
        unsigned int clicks : 1; 
        unsigned int eventCount : 1; 
        unsigned int impressions : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    double  _impressions;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) double clicks;
@property (nonatomic) double clicks;
@property (nonatomic, readonly) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long eventCount;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic, retain) NSString *featureKey;
@property (nonatomic, readonly) NSString *featureKey;
@property (nonatomic) bool hasClicks;
@property (nonatomic) bool hasEventCount;
@property (nonatomic, readonly) bool hasFeatureKey;
@property (nonatomic) bool hasImpressions;
@property (nonatomic) bool hasTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double impressions;
@property (nonatomic) double impressions;
@property (nonatomic, readonly) NSDate *lastModified;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) unsigned long long timestamp;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (double)clicks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)eventCount;
- (id)featureKey;
- (bool)hasClicks;
- (bool)hasEventCount;
- (bool)hasFeatureKey;
- (bool)hasImpressions;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (double)impressions;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClicks:(double)arg1;
- (void)setEventCount:(unsigned long long)arg1;
- (void)setFeatureKey:(id)arg1;
- (void)setHasClicks:(bool)arg1;
- (void)setHasEventCount:(bool)arg1;
- (void)setHasImpressions:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setImpressions:(double)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (double)confidence;
- (id)lastModified;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2;
- (double)personalizationValueWithBaseline:(id)arg1 decayRate:(double)arg2 baselineClicksMultiplier:(double)arg3;
- (double)powerWithDecayFactor:(double)arg1;
- (double)relativePersonalizationValueWithBaselineAggregate:(id)arg1 decayFactor:(double)arg2 baselineClicksMultiplier:(double)arg3;

@end
