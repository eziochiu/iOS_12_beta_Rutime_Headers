/* made by EzioChiu
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWAWDNWActivityEpilogue : PBCodable <NSCopying> {
    NWAWDNWActivity * _activity;
    int  _completionReason;
    unsigned long long  _durationMsecs;
    unsigned long long  _fragmentsQuenched;
    struct { 
        unsigned int durationMsecs : 1; 
        unsigned int fragmentsQuenched : 1; 
        unsigned int timestamp : 1; 
        unsigned int completionReason : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NWAWDNWActivity *activity;
@property (nonatomic) int completionReason;
@property (nonatomic) unsigned long long durationMsecs;
@property (nonatomic) unsigned long long fragmentsQuenched;
@property (nonatomic, readonly) bool hasActivity;
@property (nonatomic) bool hasCompletionReason;
@property (nonatomic) bool hasDurationMsecs;
@property (nonatomic) bool hasFragmentsQuenched;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)StringAsCompletionReason:(id)arg1;
- (id)activity;
- (int)completionReason;
- (id)completionReasonAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)durationMsecs;
- (unsigned long long)fragmentsQuenched;
- (bool)hasActivity;
- (bool)hasCompletionReason;
- (bool)hasDurationMsecs;
- (bool)hasFragmentsQuenched;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setCompletionReason:(int)arg1;
- (void)setDurationMsecs:(unsigned long long)arg1;
- (void)setFragmentsQuenched:(unsigned long long)arg1;
- (void)setHasCompletionReason:(bool)arg1;
- (void)setHasDurationMsecs:(bool)arg1;
- (void)setHasFragmentsQuenched:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
