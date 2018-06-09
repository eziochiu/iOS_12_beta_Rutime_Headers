/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNSequenceSummarizationObservation : VNObservation {
    NSNumber * _frameRate;
    NSArray * _lstmScores;
}

@property (nonatomic, retain) NSNumber *frameRate;
@property (nonatomic, readonly) NSArray *lstmScores;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)frameRate;
- (id)generateSequenceSummaryWithMinClipDuration:(id)arg1 maxClipDuration:(id)arg2 maxSequenceSummaryDuration:(id)arg3 error:(id*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithLSTMScores:(id)arg1 frameRate:(id)arg2 requestRevision:(unsigned long long)arg3;
- (id)initWithRequestRevision:(unsigned long long)arg1;
- (id)lstmScores;
- (id)observationsCacheKey;
- (void)setFrameRate:(id)arg1;
- (void)setLstmScores:(id)arg1;

@end
