/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
 */

@interface RMSAudioRoute : NSObject {
    NSString * _displayName;
    unsigned long long  _macAddress;
    bool  _selected;
    bool  _supportsVideo;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic) unsigned long long macAddress;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool supportsVideo;

+ (id)audioRoutesFromProtobufs:(id)arg1;
+ (id)protobufsFromAudioRoutes:(id)arg1;

- (void).cxx_destruct;
- (id)displayName;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqualToAudioRoute:(id)arg1;
- (bool)isSelected;
- (unsigned long long)macAddress;
- (id)protobuf;
- (void)setDisplayName:(id)arg1;
- (void)setMacAddress:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSupportsVideo:(bool)arg1;
- (bool)supportsVideo;

@end
