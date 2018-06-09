/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplateModularSmallProgressRingImage : CLKComplicationTemplate {
    CLKImageProvider * _imageProvider;
    CLKProgressProvider * _progressProvider;
    long long  _ringStyle;
}

@property (nonatomic, copy) CLKImageProvider *imageProvider;
@property (nonatomic, copy) CLKProgressProvider *progressProvider;
@property (nonatomic) long long ringStyle;

+ (struct CGSize { double x1; double x2; })imageSize;

- (void).cxx_destruct;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)arg1;
- (id)imageProvider;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (id)progressProvider;
- (long long)ringStyle;
- (void)setImageProvider:(id)arg1;
- (void)setProgressProvider:(id)arg1;
- (void)setRingStyle:(long long)arg1;

@end