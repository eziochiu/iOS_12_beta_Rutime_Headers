/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputSelectionOption : AVMediaSelectionOption {
    bool  _displaysNonForcedSubtitles;
    bool  _enabled;
    NSString * _extendedLanguageTag;
    AVAssetWriterInput * _input;
    NSString * _languageCode;
    NSString * _mediaType;
    NSArray * _metadata;
    NSDictionary * _outputSettings;
    struct opaqueCMFormatDescription { } * _sourceFormatHint;
    NSDictionary * _trackReferences;
}

@property (nonatomic, readonly) bool displaysNonForcedSubtitles;
@property (nonatomic, readonly) NSString *extendedLanguageTag;
@property (nonatomic, readonly) AVAssetWriterInput *input;
@property (nonatomic, readonly) NSString *languageCode;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) NSArray *metadata;
@property (nonatomic, readonly) NSDictionary *outputSettings;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*sourceFormatHint;
@property (nonatomic, readonly) NSDictionary *trackReferences;

+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1;
+ (id)assetWriterInputSelectionOptionWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;

- (id)_ancillaryDescription;
- (bool)_hasEqualValueForKey:(id)arg1 asObject:(id)arg2;
- (bool)_isAuxiliaryContent;
- (bool)_isDesignatedDefault;
- (id)_taggedCharacteristics;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (bool)displaysNonForcedSubtitles;
- (id)extendedLanguageTag;
- (void)finalize;
- (unsigned long long)hash;
- (id)initWithAssetWriterInput:(id)arg1;
- (id)initWithAssetWriterInput:(id)arg1 displaysNonForcedSubtitles:(bool)arg2;
- (id)input;
- (bool)isEqual:(id)arg1;
- (bool)isPlayable;
- (id)languageCode;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (id)outputSettings;
- (id)propertyList;
- (struct opaqueCMFormatDescription { }*)sourceFormatHint;
- (id)trackReferences;

@end
