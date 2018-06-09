/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRUpdateOutputDevicesMessageProtobuf : PBCodable <NSCopying> {
    NSMutableArray * _outputDevices;
}

@property (nonatomic, retain) NSMutableArray *outputDevices;

+ (Class)outputDevicesType;

- (void).cxx_destruct;
- (void)addOutputDevices:(id)arg1;
- (void)clearOutputDevices;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)outputDevices;
- (id)outputDevicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)outputDevicesCount;
- (bool)readFrom:(id)arg1;
- (void)setOutputDevices:(id)arg1;
- (void)writeTo:(id)arg1;

@end
