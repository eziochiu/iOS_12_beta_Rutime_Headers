/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiSoftAP : PBCodable <NSCopying> {
    unsigned int  _appleDeviceConnectCount;
    unsigned int  _appleDeviceDisconnectCount;
    unsigned int  _bringUpMethod;
    struct { 
        unsigned int misToSoftAPActiveTimeInMilliseconds : 1; 
        unsigned int sessionDuration : 1; 
        unsigned int timestamp : 1; 
        unsigned int appleDeviceConnectCount : 1; 
        unsigned int appleDeviceDisconnectCount : 1; 
        unsigned int bringUpMethod : 1; 
        unsigned int otherDeviceConnectCount : 1; 
        unsigned int otherDeviceDisconnectCount : 1; 
        unsigned int reasonCode : 1; 
        unsigned int teardownReason : 1; 
    }  _has;
    unsigned long long  _misToSoftAPActiveTimeInMilliseconds;
    unsigned int  _otherDeviceConnectCount;
    unsigned int  _otherDeviceDisconnectCount;
    unsigned int  _reasonCode;
    unsigned long long  _sessionDuration;
    unsigned int  _teardownReason;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int appleDeviceConnectCount;
@property (nonatomic) unsigned int appleDeviceDisconnectCount;
@property (nonatomic) unsigned int bringUpMethod;
@property (nonatomic) bool hasAppleDeviceConnectCount;
@property (nonatomic) bool hasAppleDeviceDisconnectCount;
@property (nonatomic) bool hasBringUpMethod;
@property (nonatomic) bool hasMisToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) bool hasOtherDeviceConnectCount;
@property (nonatomic) bool hasOtherDeviceDisconnectCount;
@property (nonatomic) bool hasReasonCode;
@property (nonatomic) bool hasSessionDuration;
@property (nonatomic) bool hasTeardownReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long misToSoftAPActiveTimeInMilliseconds;
@property (nonatomic) unsigned int otherDeviceConnectCount;
@property (nonatomic) unsigned int otherDeviceDisconnectCount;
@property (nonatomic) unsigned int reasonCode;
@property (nonatomic) unsigned long long sessionDuration;
@property (nonatomic) unsigned int teardownReason;
@property (nonatomic) unsigned long long timestamp;

- (unsigned int)appleDeviceConnectCount;
- (unsigned int)appleDeviceDisconnectCount;
- (unsigned int)bringUpMethod;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppleDeviceConnectCount;
- (bool)hasAppleDeviceDisconnectCount;
- (bool)hasBringUpMethod;
- (bool)hasMisToSoftAPActiveTimeInMilliseconds;
- (bool)hasOtherDeviceConnectCount;
- (bool)hasOtherDeviceDisconnectCount;
- (bool)hasReasonCode;
- (bool)hasSessionDuration;
- (bool)hasTeardownReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)misToSoftAPActiveTimeInMilliseconds;
- (unsigned int)otherDeviceConnectCount;
- (unsigned int)otherDeviceDisconnectCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)reasonCode;
- (unsigned long long)sessionDuration;
- (void)setAppleDeviceConnectCount:(unsigned int)arg1;
- (void)setAppleDeviceDisconnectCount:(unsigned int)arg1;
- (void)setBringUpMethod:(unsigned int)arg1;
- (void)setHasAppleDeviceConnectCount:(bool)arg1;
- (void)setHasAppleDeviceDisconnectCount:(bool)arg1;
- (void)setHasBringUpMethod:(bool)arg1;
- (void)setHasMisToSoftAPActiveTimeInMilliseconds:(bool)arg1;
- (void)setHasOtherDeviceConnectCount:(bool)arg1;
- (void)setHasOtherDeviceDisconnectCount:(bool)arg1;
- (void)setHasReasonCode:(bool)arg1;
- (void)setHasSessionDuration:(bool)arg1;
- (void)setHasTeardownReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMisToSoftAPActiveTimeInMilliseconds:(unsigned long long)arg1;
- (void)setOtherDeviceConnectCount:(unsigned int)arg1;
- (void)setOtherDeviceDisconnectCount:(unsigned int)arg1;
- (void)setReasonCode:(unsigned int)arg1;
- (void)setSessionDuration:(unsigned long long)arg1;
- (void)setTeardownReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)teardownReason;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
