/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKRecordingElapsedTimeView : UIView {
    NSDateComponentsFormatter * __durationFormatter;
    UIView * __recordingDotView;
    NSDate * __startTime;
    UILabel * __timeLabel;
    NSTimer * __updateTimer;
}

@property (nonatomic, readonly) NSDateComponentsFormatter *_durationFormatter;
@property (nonatomic, readonly) UIView *_recordingDotView;
@property (nonatomic, readonly) NSDate *_startTime;
@property (nonatomic, readonly) UILabel *_timeLabel;
@property (nonatomic, readonly) NSTimer *_updateTimer;

- (void).cxx_destruct;
- (void)_beginRecordingAnimation;
- (void)_commonCAMElapsedTimeViewInitialization;
- (id)_durationFormatter;
- (void)_endRecordingAnimation;
- (id)_recordingDotView;
- (id)_startTime;
- (id)_timeLabel;
- (void)_update:(id)arg1;
- (id)_updateTimer;
- (void)dealloc;
- (void)endTimer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)resetTimer;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startTimer;

@end
