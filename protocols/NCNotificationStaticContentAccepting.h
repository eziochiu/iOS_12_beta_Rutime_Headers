/* made by EzioChiu.
 */

@protocol NCNotificationStaticContentAccepting <PLTitled>

@required

- (NSArray *)interfaceActions;
- (NSString *)primarySubtitleText;
- (NSString *)primaryText;
- (NSString *)secondaryText;
- (void)setInterfaceActions:(NSArray *)arg1;
- (void)setPrimarySubtitleText:(NSString *)arg1;
- (void)setPrimaryText:(NSString *)arg1;
- (void)setSecondaryText:(NSString *)arg1;

@optional

- (UIView *)accessoryView;
- (unsigned long long)messageNumberOfLines;
- (void)setAccessoryView:(UIView *)arg1;
- (void)setMessageNumberOfLines:(unsigned long long)arg1;
- (void)setSummaryText:(NSString *)arg1;
- (void)setThumbnail:(UIImage *)arg1;
- (NSString *)summaryText;
- (UIImage *)thumbnail;

@end
