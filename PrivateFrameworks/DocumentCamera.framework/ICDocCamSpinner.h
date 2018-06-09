/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface ICDocCamSpinner : NSObject {
    UIActivityIndicatorView * _activityIndicator;
    double  _minimumDuration;
    NSDate * _showDate;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (nonatomic) double minimumDuration;
@property (nonatomic, retain) NSDate *showDate;

- (void).cxx_destruct;
- (id)activityIndicator;
- (void)hide;
- (id)initWithView:(id)arg1 minimumDuration:(double)arg2;
- (double)minimumDuration;
- (void)setActivityIndicator:(id)arg1;
- (void)setMinimumDuration:(double)arg1;
- (void)setShowDate:(id)arg1;
- (void)show;
- (id)showDate;

@end
