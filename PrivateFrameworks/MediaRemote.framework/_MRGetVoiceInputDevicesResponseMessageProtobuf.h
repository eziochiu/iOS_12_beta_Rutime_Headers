/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _deviceIDs;
    unsigned int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
    }  _has;
}

@property (nonatomic, readonly) unsigned int*deviceIDs;
@property (nonatomic, readonly) unsigned long long deviceIDsCount;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) bool hasErrorCode;

- (void)addDeviceIDs:(unsigned int)arg1;
- (void)clearDeviceIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int*)deviceIDs;
- (unsigned int)deviceIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceIDsCount;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceIDs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
