/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAudioCodecParameters : HMDTLVBase <HMDTLVCreateParse, NSSecureCoding> {
    NSNumber * _audioChannelCount;
    NSArray * _audioSampleRates;
    NSArray * _bitRateSettings;
    NSNumber * _rtpPtime;
}

@property (nonatomic, readonly, copy) NSNumber *audioChannelCount;
@property (nonatomic, readonly, copy) NSArray *audioSampleRates;
@property (nonatomic, readonly, copy) NSArray *bitRateSettings;
@property (nonatomic, readonly, copy) NSNumber *rtpPtime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_parseFromTLVData;
- (id)audioChannelCount;
- (id)audioSampleRates;
- (id)bitRateSettings;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithChannelCount:(id)arg1 bitRateSetting:(id)arg2 audioSampleRate:(id)arg3 rtpPtime:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)rtpPtime;
- (id)tlvData;

@end
