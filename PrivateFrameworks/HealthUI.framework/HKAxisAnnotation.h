/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisAnnotation : NSObject {
    HKAxisLabel * _axisLabel;
    UIColor * _textColor;
}

@property (nonatomic, readonly) HKAxisLabel *axisLabel;
@property (nonatomic, readonly) UIColor *textColor;

- (void).cxx_destruct;
- (id)axisLabel;
- (id)initWithAnnotation:(id)arg1 color:(id)arg2 position:(id)arg3;
- (id)textColor;

@end
