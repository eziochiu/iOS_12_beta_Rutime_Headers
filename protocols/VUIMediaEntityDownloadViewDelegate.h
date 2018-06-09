/* made by EzioChiu.
 */

@protocol VUIMediaEntityDownloadViewDelegate <NSObject>

@optional

- (void)downloadViewDidRequestCancelDownload:(VUIMediaEntityDownloadView *)arg1;
- (void)downloadViewDidRequestRemoveDownload:(VUIMediaEntityDownloadView *)arg1;
- (void)downloadViewDidRequestStartDownload:(VUIMediaEntityDownloadView *)arg1;

@end
