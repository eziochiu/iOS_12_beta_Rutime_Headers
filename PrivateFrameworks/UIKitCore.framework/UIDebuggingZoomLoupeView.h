/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDebuggingZoomLoupeView : UIView {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentlyInspectedPoint;
    <UIDebuggingZoomDelegate> * _delegate;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } currentlyInspectedPoint;
@property (nonatomic) <UIDebuggingZoomDelegate> *delegate;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })currentlyInspectedPoint;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentlyInspectedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;

@end
