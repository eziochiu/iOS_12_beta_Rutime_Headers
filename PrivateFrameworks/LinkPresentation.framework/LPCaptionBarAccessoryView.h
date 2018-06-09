/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCaptionBarAccessoryView : LPComponentView {
    UIView * _accessoryView;
    bool  _shouldFlipHorizontally;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _type;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)_createImageViewWithImage:(id)arg1;
- (void)componentViewDidMoveToWindow;
- (id)init;
- (id)initWithType:(long long)arg1 side:(long long)arg2;
- (void)layoutComponentView;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
