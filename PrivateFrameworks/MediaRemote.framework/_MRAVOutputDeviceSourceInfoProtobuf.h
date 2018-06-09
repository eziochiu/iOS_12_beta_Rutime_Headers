/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVOutputDeviceSourceInfoProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int multipleBuiltInDevices : 1; 
    }  _has;
    bool  _multipleBuiltInDevices;
    NSString * _routingContextUID;
}

@property (nonatomic) bool hasMultipleBuiltInDevices;
@property (nonatomic, readonly) bool hasRoutingContextUID;
@property (nonatomic) bool multipleBuiltInDevices;
@property (nonatomic, retain) NSString *routingContextUID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMultipleBuiltInDevices;
- (bool)hasRoutingContextUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)multipleBuiltInDevices;
- (bool)readFrom:(id)arg1;
- (id)routingContextUID;
- (void)setHasMultipleBuiltInDevices:(bool)arg1;
- (void)setMultipleBuiltInDevices:(bool)arg1;
- (void)setRoutingContextUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
