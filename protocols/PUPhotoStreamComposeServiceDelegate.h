/* made by EzioChiu.
 */

@protocol PUPhotoStreamComposeServiceDelegate <NSObject>

@required

- (void)photoStreamComposeService:(PUPhotoStreamComposeServiceViewController *)arg1 didPostComment:(NSString *)arg2;
- (void)photoStreamComposeServiceDidCancel:(PUPhotoStreamComposeServiceViewController *)arg1;

@end
