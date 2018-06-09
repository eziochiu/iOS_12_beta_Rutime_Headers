/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

@interface STStopSharingScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider {
    PSSpecifier * _stopSharingScreenTimeSpecifier;
}

@property (nonatomic, retain) PSSpecifier *stopSharingScreenTimeSpecifier;

- (void).cxx_destruct;
- (void)confirmStopSharingScreenTime:(id)arg1;
- (void)disableScreenTime:(id)arg1;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setCoordinator:(id)arg1;
- (void)setStopSharingScreenTimeSpecifier:(id)arg1;
- (id)stopSharingScreenTimeSpecifier;

@end
