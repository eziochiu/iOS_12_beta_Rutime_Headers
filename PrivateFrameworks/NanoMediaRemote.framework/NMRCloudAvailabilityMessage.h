/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRCloudAvailabilityMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRCloudAvailabilityProtobuf * _protobuf;
}

@property (nonatomic) bool canShowCloudMusic;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasProperNetworkConditionsToPlayMedia;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canShowCloudMusic;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (id)init;
- (id)initWithProtobufData:(id)arg1;
- (id)protobufData;
- (void)setCanShowCloudMusic:(bool)arg1;
- (void)setHasProperNetworkConditionsToPlayMedia:(bool)arg1;

@end
