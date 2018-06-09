/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVView : UIView {
    bool  _ignoresTouches;
}

@property (nonatomic) bool ignoresTouches;

- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)ignoresTouches;
- (void)setIgnoresTouches:(bool)arg1;

@end
