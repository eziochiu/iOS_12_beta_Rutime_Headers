/* made by EzioChiu.
 */

@protocol SFRemoteHotspotSessionDelegate <NSObject>

@required

- (void)session:(SFRemoteHotspotSession *)arg1 updatedFoundDevices:(NSArray *)arg2;

@end
