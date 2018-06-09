/* made by EzioChiu.
 */

@protocol VCSessionDownlinkBandwidthAllocatorClient

@required

- (unsigned short)activeDownlinkAudioStreamID;
- (unsigned short)activeDownlinkVideoStreamID;
- (unsigned int)actualNetworkBitrateAudio;
- (unsigned int)actualNetworkBitrateVideo;
- (bool)isVideoSuspended;
- (bool)isVisible;
- (NSArray *)mediaEntries;
- (NSNumber *)optedInAudioStreamID;
- (unsigned int)optedInNetworkBitrateAudio;
- (unsigned int)optedInNetworkBitrateVideo;
- (NSNumber *)optedInVideoStreamID;
- (void)setVideoSuspended:(bool)arg1;
- (NSString *)uuid;
- (unsigned char)videoQuality;
- (unsigned int)visibilityIndex;

@end
