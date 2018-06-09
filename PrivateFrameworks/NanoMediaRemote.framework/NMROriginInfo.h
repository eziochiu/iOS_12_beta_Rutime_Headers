/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMROriginInfo : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMROriginProtobuf * _protobuf;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *deviceInfoData;
@property (nonatomic, retain) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int uniqueIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)deviceInfoData;
- (id)displayName;
- (id)init;
- (id)initWithProtobuf:(id)arg1;
- (id)initWithProtobufData:(id)arg1;
- (id)protobuf;
- (id)protobufData;
- (void)setDeviceInfoData:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setUniqueIdentifier:(int)arg1;
- (int)uniqueIdentifier;

@end
