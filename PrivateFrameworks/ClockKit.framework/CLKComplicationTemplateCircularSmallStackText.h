/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateCircularSmallStackText : CLKComplicationTemplate {
    CLKTextProvider * _line1TextProvider;
    CLKTextProvider * _line2TextProvider;
}

@property (nonatomic, copy) CLKTextProvider *line1TextProvider;
@property (nonatomic, copy) CLKTextProvider *line2TextProvider;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)line1TextProvider;
- (id)line2TextProvider;
- (void)setLine1TextProvider:(id)arg1;
- (void)setLine2TextProvider:(id)arg1;

@end
