/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBadgeView : UIView {
    UIImageView * _background;
    UIColor * _backgroundColor;
    UILabel * _label;
    NSMutableDictionary * _mergedTextAttributes;
    NSString * _text;
    NSDictionary * _textAttributes;
}

@property (nonatomic, copy) UIColor *backgroundColor;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSDictionary *textAttributes;

- (void).cxx_destruct;
- (void)_applyTextToLabel;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(bool)arg3;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_setupLabelIfNecessary;
- (void)_updateBackground;
- (id)backgroundColor;
- (id)initWithText:(id)arg1;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAttributes:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)text;
- (id)textAttributes;

@end
