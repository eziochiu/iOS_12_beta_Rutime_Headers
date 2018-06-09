/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateUtilitarianLargeFlat : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
    CLKTextProvider * _textProvider;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic, copy) CLKTextProvider *textProvider;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)imageProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setTextProvider:(id)arg1;
- (id)textProvider;

@end
