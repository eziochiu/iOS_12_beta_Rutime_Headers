/* made by EzioChiu.
 */

@protocol FMDAudioAccessory <NSObject>

@required

- (NSString *)audioRoutingIdentifier;
- (NSURL *)audioURL;
- (bool)playingSound;

@end
