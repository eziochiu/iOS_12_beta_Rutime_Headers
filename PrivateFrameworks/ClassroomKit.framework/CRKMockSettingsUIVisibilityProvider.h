/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKMockSettingsUIVisibilityProvider : NSObject <CRKSettingsUIVisibilityProvider> {
    bool  _settingsUIVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool settingsUIVisible;
@property (readonly) Class superclass;

- (void)connectToDaemon;
- (void)setSettingsUIVisible:(bool)arg1;
- (bool)settingsUIVisible;

@end
