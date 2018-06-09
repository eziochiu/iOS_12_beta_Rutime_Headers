/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLegendEntry : NSObject {
    UIColor * _dotColor;
    UIImage * _icon;
    UIColor * _innerDotColor;
    UIColor * _labelColor;
    NSString * _title;
}

@property (nonatomic, retain) UIColor *dotColor;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) UIColor *innerDotColor;
@property (nonatomic, retain) UIColor *labelColor;
@property (nonatomic, copy) NSString *title;

+ (id)legendEntryWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3;
+ (id)legendEntryWithTitle:(id)arg1 icon:(id)arg2;
+ (id)legendEntryWithTitle:(id)arg1 labelColor:(id)arg2;

- (void).cxx_destruct;
- (id)dotColor;
- (id)icon;
- (id)initWithTitle:(id)arg1 dotColor:(id)arg2 innerDotColor:(id)arg3 labelColor:(id)arg4 icon:(id)arg5;
- (id)innerDotColor;
- (bool)isEqual:(id)arg1;
- (id)labelColor;
- (void)setDotColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInnerDotColor:(id)arg1;
- (void)setLabelColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
