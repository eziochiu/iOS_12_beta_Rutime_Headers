/* made by EzioChiu.
 */

@protocol SVVideoSharingPolicy <NSObject>

@required

- (bool)isSharingEnabled;
- (bool)isVideoShareable:(id <SVVideo>)arg1;

@end
