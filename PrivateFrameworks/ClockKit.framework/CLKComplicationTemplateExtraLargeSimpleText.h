/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateExtraLargeSimpleText : CLKComplicationTemplate {
    long long  _maxDynamicFontSize;
    CLKTextProvider * _textProvider;
}

@property (nonatomic) long long maxDynamicFontSize;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)init;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (long long)maxDynamicFontSize;
- (void)setMaxDynamicFontSize:(long long)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
