/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAWDHealthKitCloudSyncEndEvent : PBCodable <NSCopying> {
    unsigned long long  _countSinceLastSuccess;
    unsigned long long  _duration;
    unsigned long long  _errorCode;
    NSString * _errorDomain;
    HDAWDHealthKitCloudSyncEvent * _event;
    struct { 
        unsigned int countSinceLastSuccess : 1; 
        unsigned int duration : 1; 
        unsigned int errorCode : 1; 
        unsigned int timeSinceLastSuccess : 1; 
        unsigned int timestamp : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int result : 1; 
    }  _has;
    int  _result;
    unsigned long long  _timeSinceLastSuccess;
    unsigned long long  _timestamp;
    unsigned long long  _underlyingErrorCode;
    NSString * _underlyingErrorDomain;
}

@property (nonatomic) unsigned long long countSinceLastSuccess;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic, retain) HDAWDHealthKitCloudSyncEvent *event;
@property (nonatomic) bool hasCountSinceLastSuccess;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic) bool hasResult;
@property (nonatomic) bool hasTimeSinceLastSuccess;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic, readonly) bool hasUnderlyingErrorDomain;
@property (nonatomic) int result;
@property (nonatomic) unsigned long long timeSinceLastSuccess;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long underlyingErrorCode;
@property (nonatomic, retain) NSString *underlyingErrorDomain;

- (void).cxx_destruct;
- (int)StringAsResult:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countSinceLastSuccess;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (unsigned long long)errorCode;
- (id)errorDomain;
- (id)event;
- (bool)hasCountSinceLastSuccess;
- (bool)hasDuration;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasEvent;
- (bool)hasResult;
- (bool)hasTimeSinceLastSuccess;
- (bool)hasTimestamp;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)result;
- (id)resultAsString:(int)arg1;
- (void)setCountSinceLastSuccess:(unsigned long long)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setErrorCode:(unsigned long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasCountSinceLastSuccess:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasResult:(bool)arg1;
- (void)setHasTimeSinceLastSuccess:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setResult:(int)arg1;
- (void)setTimeSinceLastSuccess:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingErrorCode:(unsigned long long)arg1;
- (void)setUnderlyingErrorDomain:(id)arg1;
- (unsigned long long)timeSinceLastSuccess;
- (unsigned long long)timestamp;
- (unsigned long long)underlyingErrorCode;
- (id)underlyingErrorDomain;
- (void)writeTo:(id)arg1;

@end
