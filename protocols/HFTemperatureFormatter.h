/* made by EzioChiu.
 */

@protocol HFTemperatureFormatter <NSObject, NSCopying>

@required

- (NSString *)fallbackTemperatureString;
- (bool)inputIsCelsius;
- (unsigned long long)maximumFractionDigits;
- (void)setFallbackTemperatureString:(NSString *)arg1;
- (void)setInputIsCelsius:(bool)arg1;
- (void)setMaximumFractionDigits:(unsigned long long)arg1;

@optional

- (unsigned long long)minimumFractionDigits;
- (void)setMinimumFractionDigits:(unsigned long long)arg1;

@end
