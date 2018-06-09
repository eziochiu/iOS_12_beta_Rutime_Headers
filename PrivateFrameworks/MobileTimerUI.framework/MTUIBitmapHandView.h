/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
 */

@interface MTUIBitmapHandView : UIView {
    NSArray * _partViews;
    NSArray * _partViewsMaintainingOrientation;
}

+ (id)partInfoWithName:(id)arg1;
+ (id)partInfoWithName:(id)arg1 offset:(struct CGPoint { double x1; double x2; })arg2 maintainsOrientation:(bool)arg3;

- (void).cxx_destruct;
- (id)initWithBundle:(id)arg1 resourcePath:(id)arg2 partInfoList:(id)arg3 rotationalCenter:(struct CGPoint { double x1; double x2; })arg4;
- (id)initWithImage:(id)arg1 rotationalCenter:(struct CGPoint { double x1; double x2; })arg2;

@end
