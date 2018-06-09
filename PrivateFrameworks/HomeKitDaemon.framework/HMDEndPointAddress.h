/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDEndPointAddress : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSNumber * _audioRTPPort;
    NSString * _ipAddress;
    bool  _isIPv6Address;
    NSNumber * _videoRTPPort;
}

@property (nonatomic, readonly, copy) NSNumber *audioRTPPort;
@property (nonatomic, readonly, copy) NSString *ipAddress;
@property (nonatomic, readonly) bool isIPv6Address;
@property (nonatomic, readonly, copy) NSNumber *videoRTPPort;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioRTPPort;
- (bool)compatibleWithRemoteEndPoint:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIPAddress:(id)arg1 isIPv6Address:(bool)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4;
- (id)ipAddress;
- (bool)isIPv6Address;
- (id)tlvData;
- (id)videoRTPPort;

@end
