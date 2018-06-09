/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

@interface DCSettings : NSObject {
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly) bool enableViewService;
@property (nonatomic, readonly) bool finishAfterFirstScan;
@property (retain) NSUserDefaults *userDefaults;

+ (id)sharedSettings;

- (void).cxx_destruct;
- (bool)enableViewService;
- (id)enableViewServiceBoxed;
- (bool)finishAfterFirstScan;
- (id)finishAfterFirstScanBoxed;
- (id)init;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
