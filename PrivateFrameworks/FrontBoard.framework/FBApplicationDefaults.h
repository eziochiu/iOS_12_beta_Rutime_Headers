/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationDefaults : NSObject {
    long long  _backgroundStyle;
    bool  _canChangeBackgroundStyle;
    long long  _interfaceOrientation;
    NSString * _launchImageFile;
    bool  _statusBarHidden;
    bool  _statusBarHiddenWhenVerticallyCompact;
    long long  _statusBarStyle;
}

@property (nonatomic) long long backgroundStyle;
@property (nonatomic) bool canChangeBackgroundStyle;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, copy) NSString *launchImageFile;
@property (nonatomic) bool statusBarHidden;
@property (nonatomic) bool statusBarHiddenWhenVerticallyCompact;
@property (nonatomic) long long statusBarStyle;

- (void).cxx_destruct;
- (long long)backgroundStyle;
- (bool)canChangeBackgroundStyle;
- (id)init;
- (long long)interfaceOrientation;
- (id)launchImageFile;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setCanChangeBackgroundStyle:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setLaunchImageFile:(id)arg1;
- (void)setStatusBarHidden:(bool)arg1;
- (void)setStatusBarHiddenWhenVerticallyCompact:(bool)arg1;
- (void)setStatusBarStyle:(long long)arg1;
- (bool)statusBarHidden;
- (bool)statusBarHiddenWhenVerticallyCompact;
- (long long)statusBarStyle;

@end
