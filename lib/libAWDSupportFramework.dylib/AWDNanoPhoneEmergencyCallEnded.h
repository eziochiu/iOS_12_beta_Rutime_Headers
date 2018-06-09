/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDNanoPhoneEmergencyCallEnded : PBCodable <NSCopying> {
    bool  _callConnected;
    unsigned long long  _callDuration;
    bool  _callFailed;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int callConnected : 1; 
        unsigned int callFailed : 1; 
        unsigned int remoteEnded : 1; 
        unsigned int userEnded : 1; 
    }  _has;
    bool  _remoteEnded;
    unsigned long long  _timestamp;
    bool  _userEnded;
}

@property (nonatomic) bool callConnected;
@property (nonatomic) unsigned long long callDuration;
@property (nonatomic) bool callFailed;
@property (nonatomic) bool hasCallConnected;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasCallFailed;
@property (nonatomic) bool hasRemoteEnded;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUserEnded;
@property (nonatomic) bool remoteEnded;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) bool userEnded;

- (bool)callConnected;
- (unsigned long long)callDuration;
- (bool)callFailed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallConnected;
- (bool)hasCallDuration;
- (bool)hasCallFailed;
- (bool)hasRemoteEnded;
- (bool)hasTimestamp;
- (bool)hasUserEnded;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)remoteEnded;
- (void)setCallConnected:(bool)arg1;
- (void)setCallDuration:(unsigned long long)arg1;
- (void)setCallFailed:(bool)arg1;
- (void)setHasCallConnected:(bool)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasCallFailed:(bool)arg1;
- (void)setHasRemoteEnded:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUserEnded:(bool)arg1;
- (void)setRemoteEnded:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUserEnded:(bool)arg1;
- (unsigned long long)timestamp;
- (bool)userEnded;
- (void)writeTo:(id)arg1;

@end
