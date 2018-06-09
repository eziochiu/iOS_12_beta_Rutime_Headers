/* made by EzioChiu.
 */

@protocol NMBUIOnboardingDataSource <NSObject>

@required

- (NSString *)configurationConfirmSubtitle;
- (NSString *)configurationConfirmTitle;
- (NSString *)configurationFooterDescription;
- (NSString *)configurationHeaderDescription;
- (UIImage *)configurationPlaceholderArtworkImage;
- (NSString *)configurationTitle;
- (NSString *)instructionConfirmTitle;
- (NSString *)instructionDescription;
- (UIImage *)instructionIconImage;
- (NSString *)instructionTitle;
- (long long)numberOfConfigurationOptions;
- (PSSpecifier *)optionSpecifierForRow:(long long)arg1;
- (void)persistConfigurations;
- (NSString *)welcomeCancelTitle;
- (NSString *)welcomeConfirmTitle;
- (NSString *)welcomeDescription;
- (UIImage *)welcomeIconImage;
- (NSString *)welcomeTitle;

@end
