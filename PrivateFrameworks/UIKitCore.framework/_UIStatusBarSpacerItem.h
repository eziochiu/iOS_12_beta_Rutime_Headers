/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarSpacerItem : _UIStatusBarItem {
    NSArray * _constraints;
    UILayoutGuide * _layoutGuide;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILayoutGuide *layoutGuide;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;
- (bool)canEnableDisplayItem:(id)arg1 fromData:(id)arg2;
- (id)constraints;
- (void)displayItem:(id)arg1 didMoveToContainerView:(id)arg2;
- (id)initWithIdentifier:(id)arg1 statusBar:(id)arg2;
- (id)layoutGuide;
- (void)setConstraints:(id)arg1;
- (void)setLayoutGuide:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setupDisplayItem:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
