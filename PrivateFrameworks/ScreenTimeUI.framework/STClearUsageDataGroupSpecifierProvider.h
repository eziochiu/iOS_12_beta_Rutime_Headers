/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STClearUsageDataGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _clearUsageDataSpecifier;
}

@property (nonatomic, retain) PSSpecifier *clearUsageDataSpecifier;

- (void).cxx_destruct;
- (void)clearUsageData:(id)arg1;
- (id)clearUsageDataSpecifier;
- (void)confirmClearUsageData:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setClearUsageDataSpecifier:(id)arg1;
- (void)setCoordinator:(id)arg1;

@end
