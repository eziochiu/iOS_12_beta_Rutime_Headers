/* made by EzioChiu.
 */

@protocol CNCapabilities <NSObject>

@required

- (bool)areTelephonyCallsSupported;
- (bool)isFaceTimeAudioSupported;
- (bool)isFaceTimeVideoSupported;
- (bool)isPaySupported;
- (bool)isiMessageSupported;

@end
