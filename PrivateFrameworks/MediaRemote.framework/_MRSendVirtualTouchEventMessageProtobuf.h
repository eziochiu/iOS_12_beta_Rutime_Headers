/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRSendVirtualTouchEventMessageProtobuf : PBCodable <NSCopying> {
    _MRVirtualTouchEventProtobuf * _event;
    struct { 
        unsigned int virtualDeviceID : 1; 
    }  _has;
    unsigned long long  _virtualDeviceID;
}

@property (nonatomic, retain) _MRVirtualTouchEventProtobuf *event;
@property (nonatomic, readonly) bool hasEvent;
@property (nonatomic) bool hasVirtualDeviceID;
@property (nonatomic) unsigned long long virtualDeviceID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)event;
- (bool)hasEvent;
- (bool)hasVirtualDeviceID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasVirtualDeviceID:(bool)arg1;
- (void)setVirtualDeviceID:(unsigned long long)arg1;
- (unsigned long long)virtualDeviceID;
- (void)writeTo:(id)arg1;

@end
