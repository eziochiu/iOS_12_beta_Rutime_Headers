/* made by EzioChiu
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVControlItem : NSObject {
    id /* block */  _action;
    AVButton * _button;
    bool  _enabled;
    UIImage * _image;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, copy) id /* block */ action;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateButton;
- (id /* block */)action;
- (id)image;
- (id)initWithTitle:(id)arg1 type:(long long)arg2;
- (bool)isEnabled;
- (void)setAccessibilityAttributedHint:(id)arg1;
- (void)setAccessibilityAttributedLabel:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAction:(id /* block */)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (long long)type;
- (id)view;

@end
