/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSupportedRTPConfiguration : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSArray * _srtpCryptoSuites;
}

@property (nonatomic, readonly, copy) NSArray *srtpCryptoSuites;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCryptoSuites:(id)arg1;
- (id)srtpCryptoSuites;
- (id)tlvData;

@end
