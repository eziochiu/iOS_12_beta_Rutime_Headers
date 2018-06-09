/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCLayoutMetrics : NSObject <NSCopying> {
    double  _hPresentedRecordMemoHeight;
    NSString * _label;
    struct { 
        float scale; 
        double vDeltaWaveformToTimeBaseline; 
        double vDeltaTimeBaselineToTitleBaseline; 
        double vDeltaTitleBaselineToDateBaseline; 
        double vDeltaDateBaselineToControlsTop; 
        double vDeltaControlsBottomToBottom; 
        double vDeltaControlsTopToNavigationBottom; 
        bool hIsWaveformFlushToEdges; 
        double hDeltaAdditionalInsetFromWaveformEdge; 
        double hDeltaControlButtonsSpacing; 
        double hDeltaTrimProgressInset; 
        double hTrimModeInset; 
        double hDetailNavigationBarInset; 
        double hPresentedRecordMemoHeight; 
        double vDeltaLockAbsoluteTopToWaveformTop; 
    }  _metricInfo;
}

@property (nonatomic, readonly) double hDeltaAdditionalInsetFromWaveformEdge;
@property (nonatomic, readonly) double hDeltaControlButtonsSpacing;
@property (nonatomic, readonly) double hDeltaTrimProgressInset;
@property (nonatomic, readonly) double hDetailNavigationBarInset;
@property (nonatomic, readonly) bool hIsWaveformFlushToEdges;
@property (nonatomic) double hPresentedRecordMemoHeight;
@property (nonatomic, readonly) double hTrimModeInset;
@property (nonatomic, readonly) double vDeltaControlsBottomToBottom;
@property (nonatomic, readonly) double vDeltaControlsTopToNavigationBottom;
@property (nonatomic, readonly) double vDeltaDateBaselineToControlsTop;
@property (nonatomic, readonly) double vDeltaLockAbsoluteTopToWaveformTop;
@property (nonatomic, readonly) double vDeltaTimeBaselineToTitleBaseline;
@property (nonatomic, readonly) double vDeltaTitleBaselineToDateBaseline;
@property (nonatomic, readonly) double vDeltaWaveformToTimeBaseline;

+ (id)defaultMetrics;
+ (id)largeHorizontalMetrics;
+ (id)largeVerticalMetrics;
+ (id)normalVerticalMetrics;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)hDeltaAdditionalInsetFromWaveformEdge;
- (double)hDeltaControlButtonsSpacing;
- (double)hDeltaTrimProgressInset;
- (double)hDetailNavigationBarInset;
- (bool)hIsWaveformFlushToEdges;
- (double)hPresentedRecordMemoHeight;
- (double)hTrimModeInset;
- (id)initWithLabel:(id)arg1;
- (void)setHPresentedRecordMemoHeight:(double)arg1;
- (void)setMetricInfo:(struct { float x1; double x2; double x3; double x4; double x5; double x6; double x7; bool x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })arg1;
- (double)vDeltaControlsBottomToBottom;
- (double)vDeltaControlsTopToNavigationBottom;
- (double)vDeltaDateBaselineToControlsTop;
- (double)vDeltaLockAbsoluteTopToWaveformTop;
- (double)vDeltaTimeBaselineToTitleBaseline;
- (double)vDeltaTitleBaselineToDateBaseline;
- (double)vDeltaWaveformToTimeBaseline;

@end
