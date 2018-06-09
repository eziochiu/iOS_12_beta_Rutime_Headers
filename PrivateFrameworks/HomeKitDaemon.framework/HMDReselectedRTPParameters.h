/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDReselectedRTPParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSNumber * _maximumBitrate;
    NSNumber * _minimumBitrate;
    NSNumber * _rtcpInterval;
}

@property (nonatomic, readonly, copy) NSNumber *maximumBitrate;
@property (nonatomic, readonly, copy) NSNumber *minimumBitrate;
@property (nonatomic, readonly, copy) NSNumber *rtcpInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaximumBitrate:(id)arg1 minimumBitrate:(id)arg2 rtcpInterval:(id)arg3;
- (id)maximumBitrate;
- (id)minimumBitrate;
- (id)rtcpInterval;
- (id)tlvData;

@end
