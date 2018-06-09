/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFView : UIView {
    NSArray * _animatedLayerProperties;
    id /* block */  _didMoveToWindowHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _intrinsicContentSize;
}

@property (nonatomic, copy) NSArray *animatedLayerProperties;
@property (nonatomic, copy) id /* block */ didMoveToWindowHandler;
@property (nonatomic) struct CGSize { double x1; double x2; } intrinsicContentSize;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)animatedLayerProperties;
- (void)didMoveToWindow;
- (id /* block */)didMoveToWindowHandler;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setAnimatedLayerProperties:(id)arg1;
- (void)setDidMoveToWindowHandler:(id /* block */)arg1;
- (void)setIntrinsicContentSize:(struct CGSize { double x1; double x2; })arg1;

@end
