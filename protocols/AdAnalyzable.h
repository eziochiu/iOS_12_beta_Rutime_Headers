/* made by EzioChiu.
 */

@protocol AdAnalyzable

@required

- (NSString *)currentAdIdentifier;

@optional

- (void)registerVideoPlayerForAdAnalytics:(AVPlayer *)arg1;
- (void)unregisterVideoPlayerForAdAnalytics:(AVPlayer *)arg1;

@end
