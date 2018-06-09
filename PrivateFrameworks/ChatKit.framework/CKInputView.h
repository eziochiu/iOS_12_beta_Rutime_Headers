/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInputView : UIInputView {
    struct CGSize { 
        double width; 
        double height; 
    }  _lastContentSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } lastContentSize;

+ (struct CGSize { double x1; double x2; })defaultContentSize;
+ (struct CGSize { double x1; double x2; })defaultContentSizeLargerThanKeyboard:(bool*)arg1;

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })lastContentSize;
- (void)setLastContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
