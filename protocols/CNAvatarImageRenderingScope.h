/* made by EzioChiu.
 */

@protocol CNAvatarImageRenderingScope <NSObject>

@required

- (unsigned long long)avatarViewStyle;
- (struct CGSize { double x1; double x2; })pointSize;
- (bool)rightToLeft;
- (double)scale;

@end
