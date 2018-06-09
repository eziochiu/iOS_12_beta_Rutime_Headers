/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIMenuController : NSObject <UICalloutBarDelegate> {
    long long  _arrowDirection;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetRect;
    UIView * _targetView;
}

@property (nonatomic) long long arrowDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } menuFrame;
@property (nonatomic, copy) NSArray *menuItems;
@property (getter=isMenuVisible, nonatomic) bool menuVisible;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)sharedMenuController;

- (void).cxx_destruct;
- (bool)_menuHidden;
- (void)_setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(bool)arg3;
- (bool)_updateAnimated:(bool)arg1 checkVisible:(bool)arg2;
- (void)_windowWillRotate:(id)arg1;
- (long long)arrowDirection;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;
- (void)dealloc;
- (id)init;
- (bool)isMenuVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })menuFrame;
- (id)menuItems;
- (void)setArrowDirection:(long long)arg1;
- (void)setMenuItems:(id)arg1;
- (void)setMenuVisible:(bool)arg1;
- (void)setMenuVisible:(bool)arg1 animated:(bool)arg2;
- (void)setTargetRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inView:(id)arg2;
- (void)update;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)ic_addMenuItemsIfNecessary:(id)arg1;

@end
