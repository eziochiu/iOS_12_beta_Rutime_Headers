/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteSetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetStateMessageProfobuf * _protobuf;
}

@property (nonatomic, readonly) NSData *applicationInfoData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *nowPlayingInfoData;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSData *playbackQueueData;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *supportedCommandsData;

+ (id)messageWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3 playbackQueue:(id)arg4 originIdentifier:(id)arg5;

- (void).cxx_destruct;
- (id)_initWithNowPlayingInfo:(id)arg1 applicationInfo:(id)arg2 supportedCommands:(id)arg3 playbackQueue:(id)arg4 originIdentifier:(id)arg5;
- (id)applicationInfoData;
- (id)initWithProtobufData:(id)arg1;
- (id)nowPlayingInfoData;
- (id)originIdentifier;
- (id)playbackQueueData;
- (id)protobufData;
- (id)serializationDate;
- (id)supportedCommandsData;

@end
