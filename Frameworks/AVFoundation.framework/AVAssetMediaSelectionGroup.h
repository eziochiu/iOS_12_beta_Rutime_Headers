/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset * _asset;
    AVMediaSelectionOption * _defaultOption;
    NSDictionary * _dictionary;
    NSArray * _groupMediaCharacteristics;
    bool  _isStreamingGroup;
    NSArray * _options;
}

- (id)_groupMediaCharacteristics;
- (bool)_isStreamingGroup;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(bool)arg4;
- (id)asset;
- (void)dealloc;
- (id)defaultOption;
- (id)dictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)options;

@end
