/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVComposition : AVAsset <NSMutableCopying, NSSecureCoding> {
    AVCompositionInternal * _priv;
}

@property (nonatomic, readonly, copy) NSDictionary *URLAssetInitializationOptions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) NSArray *tracks;

+ (bool)expectsPropertyRevisedNotifications;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)URLAssetInitializationOptions;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (bool)_clientProvidesNaturalSize;
- (int)_createEmptyMutableCompositionIfNeeded;
- (struct OpaqueFigAsset { }*)_figAsset;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (id)_initWithComposition:(id)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_mediaSelectionGroupDictionaries;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
