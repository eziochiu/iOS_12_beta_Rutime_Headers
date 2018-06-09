/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineSettingsMapInteraction : PBCodable <NSCopying> {
    int  _deviceClass;
    int  _gestureType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int deviceClass : 1; 
        unsigned int gestureType : 1; 
    }  _has;
    NSString * _sessionId;
    unsigned long long  _timestamp;
}

@property (nonatomic) int deviceClass;
@property (nonatomic) int gestureType;
@property (nonatomic) bool hasDeviceClass;
@property (nonatomic) bool hasGestureType;
@property (nonatomic, readonly) bool hasSessionId;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *sessionId;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)deviceClass;
- (id)dictionaryRepresentation;
- (int)gestureType;
- (bool)hasDeviceClass;
- (bool)hasGestureType;
- (bool)hasSessionId;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionId;
- (void)setDeviceClass:(int)arg1;
- (void)setGestureType:(int)arg1;
- (void)setHasDeviceClass:(bool)arg1;
- (void)setHasGestureType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
