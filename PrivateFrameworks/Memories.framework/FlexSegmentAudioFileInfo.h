/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FlexSegmentAudioFileInfo : NSObject {
    long long  _bars;
    long long  _bpm;
    NSArray * _customBarMarkers;
    long long  _sampleCount;
    long long  _sampleRate;
    long long  _samplesPerBar;
}

@property (nonatomic) long long bars;
@property (nonatomic) long long bpm;
@property (nonatomic, retain) NSArray *customBarMarkers;
@property (nonatomic) long long sampleCount;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long samplesPerBar;

- (void).cxx_destruct;
- (long long)bars;
- (long long)bpm;
- (id)customBarMarkers;
- (long long)sampleCount;
- (long long)sampleRate;
- (long long)samplesPerBar;
- (void)setBars:(long long)arg1;
- (void)setBpm:(long long)arg1;
- (void)setCustomBarMarkers:(id)arg1;
- (void)setSampleCount:(long long)arg1;
- (void)setSampleRate:(long long)arg1;
- (void)setSamplesPerBar:(long long)arg1;

@end
