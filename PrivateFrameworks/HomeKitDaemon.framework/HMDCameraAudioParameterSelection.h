/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraAudioParameterSelection : HMDCameraParameterSelectionBase {
    NSArray * _audioCodecsPreference;
    NSArray * _bitrateSettingsPreference;
    NSNumber * _comfortNoiseSupported;
    HMDSupportedRTPConfiguration * _rtpConfiguration;
    NSArray * _sampleRatesPreference;
    NSNumber * _selectedAudioChannelCount;
    HMDCameraAudioParameterCombination * _selectedAudioParameterCombination;
    HMDSelectedAudioParameters * _selectedAudioParameters;
    HMDBitRateSetting * _selectedBitRateSetting;
    HMDAudioCodecGroup * _selectedCodecGroupType;
    HMDAudioSampleRate * _selectedSampleRate;
    HMDStreamingCapabilities * _streamingCapabilities;
    HMDSupportedAudioStreamConfiguration * _supportedAudioStreamConfiguration;
    NSArray * _validAudioParameterCombinations;
}

@property (nonatomic, readonly) NSArray *audioCodecsPreference;
@property (nonatomic, readonly) NSArray *bitrateSettingsPreference;
@property (nonatomic, retain) NSNumber *comfortNoiseSupported;
@property (nonatomic, readonly) HMDSupportedRTPConfiguration *rtpConfiguration;
@property (nonatomic, readonly) NSArray *sampleRatesPreference;
@property (nonatomic, retain) NSNumber *selectedAudioChannelCount;
@property (nonatomic, retain) HMDCameraAudioParameterCombination *selectedAudioParameterCombination;
@property (nonatomic, retain) HMDSelectedAudioParameters *selectedAudioParameters;
@property (nonatomic, retain) HMDBitRateSetting *selectedBitRateSetting;
@property (nonatomic, retain) HMDAudioCodecGroup *selectedCodecGroupType;
@property (nonatomic, retain) HMDAudioSampleRate *selectedSampleRate;
@property (nonatomic, readonly) HMDStreamingCapabilities *streamingCapabilities;
@property (nonatomic, readonly) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (nonatomic, readonly) NSArray *validAudioParameterCombinations;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_generateAllCombinations:(id)arg1;
- (bool)_selectParametersFromCodec:(id)arg1 bitRateSettings:(id)arg2 sampleRates:(id)arg3 audioChannelCount:(id)arg4;
- (id)audioCodecsPreference;
- (id)bitrateSettingsPreference;
- (id)comfortNoiseSupported;
- (id)createSRTPParamters;
- (id)createSelectedAudioParameters;
- (id)initWithSessionID:(id)arg1 supportedAudioConfiguration:(id)arg2 supportedRTPConfiguration:(id)arg3 streamingCapabilities:(id)arg4;
- (id)logIdentifier;
- (id)rtpConfiguration;
- (id)sampleRatesPreference;
- (bool)selectAudioParameters;
- (id)selectedAudioChannelCount;
- (id)selectedAudioParameterCombination;
- (id)selectedAudioParameters;
- (id)selectedBitRateSetting;
- (id)selectedCodecGroupType;
- (id)selectedSampleRate;
- (void)setComfortNoiseSupported:(id)arg1;
- (void)setSelectedAudioChannelCount:(id)arg1;
- (void)setSelectedAudioParameterCombination:(id)arg1;
- (void)setSelectedAudioParameters:(id)arg1;
- (void)setSelectedBitRateSetting:(id)arg1;
- (void)setSelectedCodecGroupType:(id)arg1;
- (void)setSelectedSampleRate:(id)arg1;
- (id)streamingCapabilities;
- (id)supportedAudioStreamConfiguration;
- (id)validAudioParameterCombinations;

@end
