/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLToolbarButton : NSObject <NSSecureCoding> {
    NSString * _accessibilityIdentifier;
    SEL  _action;
    UIAlertController * _alertController;
    QLToolbarButtonItemRepresentation * _currentItemRepresentation;
    bool  _enabled;
    bool  _forceToNavBar;
    NSString * _identifier;
    UIImage * _image;
    NSArray * _options;
    unsigned long long  _placement;
    bool  _roundedSelectedIndicator;
    bool  _selected;
    long long  _systemItem;
    id  _target;
    NSString * _title;
    QLToolbarUnderlyingButton * _underlyingButton;
}

@property (copy) NSString *accessibilityIdentifier;
@property bool enabled;
@property bool forceToNavBar;
@property (readonly) NSString *identifier;
@property (copy) UIImage *image;
@property (copy) NSArray *options;
@property unsigned long long placement;
@property bool roundedSelectedIndicator;
@property bool selected;
@property long long systemItem;
@property (copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)barButtonWithTarget:(id)arg1 action:(SEL)arg2 maxSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)enabled;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceToNavBar;
- (void)handleLongPress:(id)arg1;
- (id)identifier;
- (id)image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)invalidateCurrentState;
- (bool)isEqual:(id)arg1;
- (id)options;
- (unsigned long long)placement;
- (bool)roundedSelectedIndicator;
- (bool)selected;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setForceToNavBar:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setRoundedSelectedIndicator:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSystemItem:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)systemItem;
- (id)title;

@end
