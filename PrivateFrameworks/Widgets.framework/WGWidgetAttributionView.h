/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetAttributionView : UITextView {
    UIColor * _legibilityTextColor;
    NSMutableAttributedString * _widgetAttributedString;
}

@property (nonatomic, retain) UIColor *legibilityTextColor;

+ (id)attributedStringForIdentifier:(id)arg1;
+ (id)widgetAttributionIDsInOrder;

- (void).cxx_destruct;
- (id)_attributionBackgroundColor;
- (id)_attributionFont;
- (void)_configureAttributedString;
- (id)initWithWidgetAttributedString:(id)arg1;
- (void)layoutSubviews;
- (id)legibilityTextColor;
- (void)setLegibilityTextColor:(id)arg1;

@end
