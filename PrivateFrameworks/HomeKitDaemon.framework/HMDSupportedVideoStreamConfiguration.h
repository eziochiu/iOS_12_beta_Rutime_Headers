/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSupportedVideoStreamConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSDictionary * _codecConfigurations;
}

@property (nonatomic, readonly, copy) NSDictionary *codecConfigurations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)codecConfigurations;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCodecConfigurations:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tlvData;

@end
