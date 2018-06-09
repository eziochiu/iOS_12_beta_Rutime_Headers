/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAccessorySettingMusicAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)configureSection:(id)arg1 forEntity:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(id /* block */)arg4;
- (id)initWithMediaProfileContainer:(id)arg1 keyPaths:(id)arg2 updateHandler:(id /* block */)arg3;
- (id)initWithMediaProfileContainer:(id)arg1 mode:(unsigned long long)arg2;
- (bool)shouldShowSettingsEntity:(id)arg1;

@end
