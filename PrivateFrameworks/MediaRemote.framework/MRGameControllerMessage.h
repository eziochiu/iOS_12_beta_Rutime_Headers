/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRGameControllerMessage : MRProtocolMessage {
    unsigned long long  _priority;
}

@property (nonatomic, readonly) unsigned long long controllerID;
@property (nonatomic, readonly) _MRGameControllerMessageProtobuf *event;

- (unsigned long long)controllerID;
- (id)event;
- (id)initWithGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;
- (unsigned long long)priority;
- (bool)shouldLog;
- (unsigned long long)type;

@end
