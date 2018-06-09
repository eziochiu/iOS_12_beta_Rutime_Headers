/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateUserSession : PBCodable <NSCopying> {
    GEOLocalTime * _eventTime;
    struct { 
        unsigned int navSessionId : 1; 
        unsigned int sessionId : 1; 
        unsigned int navSessionRelativeTimestamp : 1; 
        unsigned int relativeTimestamp : 1; 
        unsigned int sequenceNumber : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _navSessionId;
    double  _navSessionRelativeTimestamp;
    double  _relativeTimestamp;
    unsigned int  _sequenceNumber;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
}

@property (nonatomic, retain) GEOLocalTime *eventTime;
@property (nonatomic, readonly) bool hasEventTime;
@property (nonatomic) bool hasNavSessionId;
@property (nonatomic) bool hasNavSessionRelativeTimestamp;
@property (nonatomic) bool hasRelativeTimestamp;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic) bool hasSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } navSessionId;
@property (nonatomic) double navSessionRelativeTimestamp;
@property (nonatomic) double relativeTimestamp;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventTime;
- (bool)hasEventTime;
- (bool)hasNavSessionId;
- (bool)hasNavSessionRelativeTimestamp;
- (bool)hasRelativeTimestamp;
- (bool)hasSequenceNumber;
- (bool)hasSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })navSessionId;
- (double)navSessionRelativeTimestamp;
- (bool)readFrom:(id)arg1;
- (double)relativeTimestamp;
- (unsigned int)sequenceNumber;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setEventTime:(id)arg1;
- (void)setHasNavSessionId:(bool)arg1;
- (void)setHasNavSessionRelativeTimestamp:(bool)arg1;
- (void)setHasRelativeTimestamp:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionId:(bool)arg1;
- (void)setNavSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNavSessionRelativeTimestamp:(double)arg1;
- (void)setRelativeTimestamp:(double)arg1;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)writeTo:(id)arg1;

@end
