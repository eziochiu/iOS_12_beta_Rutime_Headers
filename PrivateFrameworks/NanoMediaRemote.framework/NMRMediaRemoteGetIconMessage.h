/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
 */

@interface NMRMediaRemoteGetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetIconMessage * _protobuf;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *height;
@property (nonatomic, readonly) NSNumber *originIdentifier;
@property (nonatomic, readonly) NSDate *serializationDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *width;

+ (id)messageWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4;

- (void).cxx_destruct;
- (id)_initWithIconWidth:(double)arg1 height:(double)arg2 bundleID:(id)arg3 originIdentifier:(id)arg4;
- (id)bundleID;
- (id)height;
- (id)initWithProtobufData:(id)arg1;
- (id)originIdentifier;
- (id)protobufData;
- (id)serializationDate;
- (id)width;

@end
