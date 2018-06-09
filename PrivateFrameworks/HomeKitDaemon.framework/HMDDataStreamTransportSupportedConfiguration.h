/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDataStreamTransportSupportedConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSArray * _configurations;
}

@property (nonatomic, readonly, copy) NSArray *configurations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)configurations;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurations:(id)arg1;
- (id)tlvData;

@end
