/* made by EzioChiu.
 */

@protocol PUImageRequesterObserver <NSObject>

@required

- (void)imageRequester:(PUImageRequester *)arg1 didChange:(PUImageRequesterChange *)arg2;

@end
