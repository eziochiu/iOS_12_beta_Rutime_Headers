/* made by EzioChiu.
 */

@protocol NMROriginCommandHandler <NSObject>

@required

- (NMROrigin *)origin;
- (void)sendMediaRemoteCommand:(unsigned int)arg1 options:(NSDictionary *)arg2 launchApp:(bool)arg3;

@end
