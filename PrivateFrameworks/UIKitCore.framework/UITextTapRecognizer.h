/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextTapRecognizer : UITapGestureRecognizer {
    NSArray * _touchesForTap;
}

@property (nonatomic, retain) NSArray *touchesForTap;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)setTouchesForTap:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)touchesForTap;

@end
