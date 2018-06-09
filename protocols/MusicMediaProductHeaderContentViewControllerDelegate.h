/* made by EzioChiu.
 */

@protocol MusicMediaProductHeaderContentViewControllerDelegate <NSObject>

@optional

- (void)mediaProductHeaderContentViewController:(MusicMediaProductHeaderContentViewController *)arg1 didSelectArtistNameButton:(UIButton *)arg2;
- (void)mediaProductHeaderContentViewController:(MusicMediaProductHeaderContentViewController *)arg1 didSelectCameraButton:(UIButton *)arg2;
- (void)mediaProductHeaderContentViewController:(MusicMediaProductHeaderContentViewController *)arg1 didSelectShareButton:(UIButton *)arg2;
- (void)mediaProductHeaderContentViewControllerDidTapEdit:(MusicMediaProductHeaderContentViewController *)arg1;
- (void)mediaProductHeaderContentViewControllerDidUpdateEditableText:(MusicMediaProductHeaderContentViewController *)arg1;

@end
