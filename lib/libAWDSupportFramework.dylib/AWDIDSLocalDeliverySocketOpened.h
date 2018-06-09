/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSLocalDeliverySocketOpened : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int isToDefaultPairedDevice : 1; 
        unsigned int openError : 1; 
        unsigned int priority : 1; 
        unsigned int socketError : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _isToDefaultPairedDevice;
    unsigned long long  _openError;
    unsigned long long  _priority;
    NSString * _service;
    unsigned long long  _socketError;
    NSString * _streamName;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasIsToDefaultPairedDevice;
@property (nonatomic) bool hasOpenError;
@property (nonatomic) bool hasPriority;
@property (nonatomic, readonly) bool hasService;
@property (nonatomic) bool hasSocketError;
@property (nonatomic, readonly) bool hasStreamName;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) unsigned long long openError;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) NSString *service;
@property (nonatomic) unsigned long long socketError;
@property (nonatomic, retain) NSString *streamName;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasIsToDefaultPairedDevice;
- (bool)hasOpenError;
- (bool)hasPriority;
- (bool)hasService;
- (bool)hasSocketError;
- (bool)hasStreamName;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)isToDefaultPairedDevice;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)openError;
- (unsigned long long)priority;
- (bool)readFrom:(id)arg1;
- (id)service;
- (void)setGuid:(id)arg1;
- (void)setHasIsToDefaultPairedDevice:(bool)arg1;
- (void)setHasOpenError:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (void)setHasSocketError:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIsToDefaultPairedDevice:(unsigned long long)arg1;
- (void)setOpenError:(unsigned long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setService:(id)arg1;
- (void)setSocketError:(unsigned long long)arg1;
- (void)setStreamName:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)socketError;
- (id)streamName;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
