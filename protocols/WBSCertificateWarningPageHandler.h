/* made by EzioChiu.
 */

@protocol WBSCertificateWarningPageHandler <NSObject>

@required

- (void)goBackButtonClicked;
- (void)openClockSettings;
- (void)showCertificateInformation;
- (void)visitInsecureWebsite;
- (void)visitInsecureWebsiteWithTemporaryBypass;

@end
