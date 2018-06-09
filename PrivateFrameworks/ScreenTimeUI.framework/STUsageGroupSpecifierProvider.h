/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider {
    STUsageDetailsViewModel * _viewModel;
}

@property (retain) STUsageDetailsViewModel *viewModel;

+ (id)providerWithViewModel:(id)arg1;

- (void).cxx_destruct;
- (void)invalidate;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
