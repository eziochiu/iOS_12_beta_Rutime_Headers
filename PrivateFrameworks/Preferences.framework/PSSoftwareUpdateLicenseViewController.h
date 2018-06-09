/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSoftwareUpdateLicenseViewController : PSViewController {
    NSString * _licenseTextInfo;
    UITextView * _licenseTextView;
}

@property (nonatomic, retain) NSString *licenseTextInfo;
@property (nonatomic, retain) UITextView *licenseTextView;

- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (id)initWithLicense:(id)arg1;
- (id)licenseTextInfo;
- (id)licenseTextView;
- (void)setLicenseText:(id)arg1;
- (void)setLicenseTextInfo:(id)arg1;
- (void)setLicenseTextView:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
