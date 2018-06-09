/* made by EzioChiu.
 */

@protocol SXVideoAdProviding <SXVideoProviding>

@required

- (bool)hasAction;
- (void)presentAction;
- (void)presentPrivacyStatement;
- (unsigned long long)skipThreshold;
- (void)skipped;

@end