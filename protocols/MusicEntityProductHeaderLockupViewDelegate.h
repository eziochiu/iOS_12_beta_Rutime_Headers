/* made by EzioChiu.
 */

@protocol MusicEntityProductHeaderLockupViewDelegate <NSObject>

@optional

- (void)productHeaderLockupView:(MusicEntityProductHeaderLockupView *)arg1 didSelectCameraButton:(UIButton *)arg2;
- (void)productHeaderLockupViewDidSelectAddSongsButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectDownloadProgressButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectEditButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectLikeDislikeButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectRefreshButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidSelectShareButton:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewDidUpdateEditableText:(MusicEntityProductHeaderLockupView *)arg1;
- (void)productHeaderLockupViewTintColorDidChange:(MusicEntityProductHeaderLockupView *)arg1;

@end
