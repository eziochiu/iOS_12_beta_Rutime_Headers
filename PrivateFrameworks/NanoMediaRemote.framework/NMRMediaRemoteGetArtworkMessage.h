/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteGetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetArtworkMessage * _protobuf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;

+ (id)messageWithOriginIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)initWithOriginIdentifier:(id)arg1;
- (id)initWithProtobufData:(id)arg1;
- (id)originIdentifier;
- (id)protobufData;
- (id)serializationDate;

@end
