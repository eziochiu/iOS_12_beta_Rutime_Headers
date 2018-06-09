/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState> {
    UIInputViewSetPlacement * _end;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    bool  _hidden;
    <UIInputViewAnimationHost> * _host;
    UIInputViewSetPlacement * _start;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
}

@property (nonatomic, readonly, retain) UIView *animatingView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inputViewsHidden;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startFrame;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)animatingView;
- (void)complete;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3;
- (bool)inputViewsHidden;
- (void)setInputViewsHidden:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrame;

@end
