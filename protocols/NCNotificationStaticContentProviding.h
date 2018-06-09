/* made by EzioChiu.
 */

@protocol NCNotificationStaticContentProviding <NSObject>

@required

- (id /* block */)cancelAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)clearAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (id /* block */)closeAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (unsigned long long)coalesceCount;
- (NSArray *)currentActions;
- (NSDate *)date;
- (id /* block */)defaultAction:(void *)arg1; // needs 1 arg types, found 5: id /* block */, bool, void*, id, SEL
- (<NCNotificationStaticContentProvidingDelegate> *)delegate;
- (NSArray *)icons;
- (NSArray *)interfaceActions;
- (bool)isDateAllDay;
- (unsigned long long)messageNumberOfLines;
- (NSArray *)overriddenActions;
- (NSString *)primarySubtitleText;
- (NSString *)primaryText;
- (NSString *)secondaryText;
- (void)setDelegate:(id <NCNotificationStaticContentProvidingDelegate>)arg1;
- (void)setOverriddenActions:(NSArray *)arg1;
- (bool)showsTextInputOnAppearance;
- (NSString *)summaryText;
- (UIImage *)thumbnail;
- (NSTimeZone *)timeZone;
- (NSString *)title;

@end
