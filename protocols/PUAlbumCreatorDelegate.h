/* made by EzioChiu.
 */

@protocol PUAlbumCreatorDelegate <NSObject>

@required

- (bool)canPresentPicker;
- (id /* block */)completionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, bool, NSString *, void*, id, SEL
- (UIViewController *)hostViewContoller;

@end
