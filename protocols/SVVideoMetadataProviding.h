/* made by EzioChiu.
 */

@protocol SVVideoMetadataProviding <NSObject>

@required

- (double)duration;
- (double)framerate;
- (bool)muted;
- (double)time;
- (double)timePlayed;
- (double)volume;

@end
