/* made by EzioChiu.
 */

@protocol SVVideoVisiblePercentageManager <NSObject>

@required

- (<SVVisiblePercentageProviding> *)visiblePercentageProviderForVideo:(id <SVVideo>)arg1;
- (<SVVisiblePercentageReporting> *)visiblePercentageReporterForVideo:(id <SVVideo>)arg1;

@end
