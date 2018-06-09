/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKHandwritingWindow : UIWindow {
    bool  _eatOrientationEvents;
}

@property (nonatomic) bool eatOrientationEvents;

- (bool)_canAffectStatusBarAppearance;
- (void)_updateInterfaceOrientationFromDeviceOrientation:(bool)arg1;
- (bool)eatOrientationEvents;
- (void)setEatOrientationEvents:(bool)arg1;

@end
