/* made by EzioChiu.
 */

@protocol BSBlockSentinelSignalContext <NSObject>

@required

- (id)context;
- (bool)isComplete;
- (bool)isFailed;

@end
