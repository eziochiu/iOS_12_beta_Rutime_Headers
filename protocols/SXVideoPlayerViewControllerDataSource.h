/* made by EzioChiu.
 */

@protocol SXVideoPlayerViewControllerDataSource <NSObject>

@required

- (<SXVideoAdProviding> *)videoAdForVideoPlayerViewController:(SXVideoPlayerViewController *)arg1;
- (<SXVideoProviding> *)videoForVideoPlayerViewController:(SXVideoPlayerViewController *)arg1;

@end
