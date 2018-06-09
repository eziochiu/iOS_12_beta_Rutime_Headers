/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAVOutputDeviceSourceInfo : NSObject {
    bool  _multipleBuiltInDevices;
    NSString * _routingContextUID;
}

@property (nonatomic, readonly) bool multipleBuiltInDevices;
@property (nonatomic, readonly) NSString *routingContextUID;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRoutingContextUID:(id)arg1 multipleBuiltInDevices:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)multipleBuiltInDevices;
- (id)routingContextUID;

@end
