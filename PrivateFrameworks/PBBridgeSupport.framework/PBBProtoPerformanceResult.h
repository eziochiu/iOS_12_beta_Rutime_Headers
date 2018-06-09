/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoPerformanceResult : PBCodable <NSCopying> {
    NSString * _activityType;
    struct { 
        unsigned int timeDelta : 1; 
        unsigned int timeEnded : 1; 
        unsigned int timeStarted : 1; 
    }  _has;
    NSString * _identifier;
    double  _timeDelta;
    double  _timeEnded;
    double  _timeStarted;
}

@property (nonatomic, retain) NSString *activityType;
@property (nonatomic, readonly) bool hasActivityType;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasTimeDelta;
@property (nonatomic) bool hasTimeEnded;
@property (nonatomic) bool hasTimeStarted;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) double timeDelta;
@property (nonatomic) double timeEnded;
@property (nonatomic) double timeStarted;

+ (void)initialize;

- (void).cxx_destruct;
- (id)activityType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailedDescription;
- (id)dictionaryRepresentation;
- (bool)hasActivityType;
- (bool)hasIdentifier;
- (bool)hasTimeDelta;
- (bool)hasTimeEnded;
- (bool)hasTimeStarted;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setHasTimeDelta:(bool)arg1;
- (void)setHasTimeEnded:(bool)arg1;
- (void)setHasTimeStarted:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTimeDelta:(double)arg1;
- (void)setTimeEnded:(double)arg1;
- (void)setTimeStarted:(double)arg1;
- (double)timeDelta;
- (double)timeEnded;
- (double)timeStarted;
- (void)writeTo:(id)arg1;

@end
