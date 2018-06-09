/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoEditAggregateSession : NSObject {
    bool  __autoCropAdjusted;
    bool  __autoCropReset;
    bool  __hasCropSuggestion;
    bool  _pluginSaved;
    bool  _pluginStarted;
    bool  _toggledOriginal;
}

@property (setter=_setAutoCropAdjusted:, nonatomic) bool _autoCropAdjusted;
@property (nonatomic, readonly) NSArray *_autoCropKeys;
@property (setter=_setAutoCropReset:, nonatomic) bool _autoCropReset;
@property (setter=_setHasCropSuggestion:, nonatomic) bool _hasCropSuggestion;
@property (nonatomic) bool pluginSaved;
@property (nonatomic) bool pluginStarted;
@property (nonatomic) bool toggledOriginal;

+ (struct __CFString { }*)_keyForSessionEnd:(long long)arg1;

- (bool)_autoCropAdjusted;
- (id)_autoCropKeys;
- (bool)_autoCropReset;
- (bool)_hasCropSuggestion;
- (void)_recordKeys:(id)arg1;
- (id)_sessionKeysWithEnd:(long long)arg1;
- (void)_setAutoCropAdjusted:(bool)arg1;
- (void)_setAutoCropReset:(bool)arg1;
- (void)_setHasCropSuggestion:(bool)arg1;
- (void)finishSessionWithEnd:(long long)arg1;
- (void)finishSessionWithEnd:(long long)arg1 newEditModel:(id)arg2 oldEditModel:(id)arg3;
- (void)notifyDidAdjustCrop;
- (void)notifyDidApplyAutoCrop;
- (void)notifyDidResetCrop;
- (bool)pluginSaved;
- (bool)pluginStarted;
- (void)setPluginSaved:(bool)arg1;
- (void)setPluginStarted:(bool)arg1;
- (void)setToggledOriginal:(bool)arg1;
- (bool)toggledOriginal;

@end
