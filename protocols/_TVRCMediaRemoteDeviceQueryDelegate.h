/* made by EzioChiu.
 */

@protocol _TVRCMediaRemoteDeviceQueryDelegate <NSObject>

@optional

- (void)mediaRemoteDeviceQuery:(_TVRCMediaRemoteDeviceQuery *)arg1 addedTelevision:(_TVRCMRTelevisionWrapper *)arg2;
- (void)mediaRemoteDeviceQuery:(_TVRCMediaRemoteDeviceQuery *)arg1 removedTelevision:(_TVRCMRTelevisionWrapper *)arg2;

@end
