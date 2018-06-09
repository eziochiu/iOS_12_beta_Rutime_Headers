/* made by EzioChiu.
 */

@protocol SVVideoAdProviding <SVVideoProviding, SVVideoSkipThreshold>

@required

- (bool)hasAction;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (unsigned long long)skipThreshold;
- (void)skipped;

@end
