/* made by EzioChiu.
 */

@protocol HFAccessorySettingItemProtocol <HFHomeKitItemProtocol>

@required

- (HFAccessorySettingsEntity *)entity;
- (<HFMediaProfileContainer> *)mediaProfileContainer;
- (NSString *)settingKeyPath;

@end
