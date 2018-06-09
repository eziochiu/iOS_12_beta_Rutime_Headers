/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface WLKUIUIStackView : UIStackView {
    bool  _alignmentFollowsDeviceOrientation;
    bool  _axisFollowsDeviceOrientation;
    long long  _lastOrientation;
}

@property (nonatomic) bool alignmentFollowsDeviceOrientation;
@property (nonatomic) bool axisFollowsDeviceOrientation;
@property (nonatomic) long long lastOrientation;

- (bool)alignmentFollowsDeviceOrientation;
- (bool)axisFollowsDeviceOrientation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)lastOrientation;
- (void)setAlignmentFollowsDeviceOrientation:(bool)arg1;
- (void)setAxisFollowsDeviceOrientation:(bool)arg1;
- (void)setLastOrientation:(long long)arg1;

@end
