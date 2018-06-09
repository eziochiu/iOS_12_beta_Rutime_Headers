/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIIndexBarVisualStyle_Base : NSObject <UIIndexBarVisualStyle> {
    UIIndexBarView * _indexBarView;
}

@property (nonatomic, readonly) bool canBecomeFocused;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expanded;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIIndexBarView *indexBarView;
@property (nonatomic, readonly) double minLineHeight;
@property (nonatomic, readonly) bool overlay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)displayEntryFromEntry:(id)arg1;
- (id)indexBarView;
- (id)initWithView:(id)arg1;
- (double)minLineHeight;
- (bool)overlay;
- (void)setIndexBarView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
