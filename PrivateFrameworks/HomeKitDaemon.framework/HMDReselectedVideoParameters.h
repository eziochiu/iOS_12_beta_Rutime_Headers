/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDReselectedVideoParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    HMDReselectedRTPParameters * _rtpParameters;
    HMDVideoAttributes * _videoAttributes;
}

@property (nonatomic, readonly, copy) HMDReselectedRTPParameters *rtpParameters;
@property (nonatomic, readonly, copy) HMDVideoAttributes *videoAttributes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAttribute:(id)arg1 rtpParameter:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)rtpParameters;
- (id)tlvData;
- (id)videoAttributes;

@end
