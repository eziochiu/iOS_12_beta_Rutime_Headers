/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteGetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetStateMessageProfobuf * _protobuf;
}

@property (nonatomic, readonly) NSData *applicationInfoDigest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *nowPlayingInfoDigest;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSData *playbackQueueDigest;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *supportedCommandsDigest;

+ (id)messageWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5;

- (void).cxx_destruct;
- (id)_initWithNowPlayingInfoDigest:(id)arg1 applicationInfoDigest:(id)arg2 supportedCommandsDigest:(id)arg3 playbackQueueDigest:(id)arg4 originIdentifier:(id)arg5;
- (id)applicationInfoDigest;
- (id)initWithProtobufData:(id)arg1;
- (id)nowPlayingInfoDigest;
- (id)originIdentifier;
- (id)playbackQueueDigest;
- (id)protobufData;
- (id)serializationDate;
- (id)supportedCommandsDigest;

@end
