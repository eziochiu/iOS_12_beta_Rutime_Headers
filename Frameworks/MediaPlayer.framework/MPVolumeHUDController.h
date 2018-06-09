/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeHUDController : NSObject {
    NSMutableSet * _categories;
    NSMutableSet * _displays;
    bool  _needsUpdate;
}

@property (nonatomic, readonly) id mainContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addCategory:(id)arg1;
- (void)_updateVisibility;
- (void)addVolumeDisplay:(id)arg1;
- (id)init;
- (id)mainContext;
- (void)registerView:(id)arg1 inContext:(id)arg2;
- (void)removeVolumeDisplay:(id)arg1;
- (void)setNeedsUpdate;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;

@end
