/* made by EzioChiu.
 */

@protocol HMDAccessorySettingUpdateDelegate <NSObject>

@required

- (void)settingUpdate:(HMDAccessorySettingUpdateBase *)arg1 didCompleteWithError:(NSError *)arg2;

@end
