/* made by EzioChiu.
 */

@protocol CPMapButtonDelegate <CPControlDelegate>

@required

- (bool)mapButton:(CPMapButton *)arg1 setFocusedImage:(UIImage *)arg2;
- (bool)mapButton:(CPMapButton *)arg1 setHidden:(bool)arg2;
- (bool)mapButton:(CPMapButton *)arg1 setImage:(UIImage *)arg2;

@end
