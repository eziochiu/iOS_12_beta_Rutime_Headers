/* made by EzioChiu.
 */

@protocol CNContactQuickActionViewContainer <NSObject>

@required

- (UIView<CNContactQuickActionPresentation> *)viewForActionType:(NSString *)arg1;

@end
