/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamTransportConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    HMDDataStreamTransportProtocol * _protocol;
}

@property (nonatomic, readonly, copy) HMDDataStreamTransportProtocol *protocol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)protocol;
- (id)tlvData;

@end
