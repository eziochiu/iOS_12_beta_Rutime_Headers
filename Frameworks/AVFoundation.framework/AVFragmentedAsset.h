/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {
    AVFragmentedAssetInternal * _fragmentedAsset;
}

@property (getter=isAssociatedWithFragmentMinder, nonatomic, readonly) bool associatedWithFragmentMinder;
@property (nonatomic, readonly) NSArray *tracks;

+ (id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2;

- (Class)_classForAssetTracks;
- (bool)_mindsFragments;
- (void)_setIsAssociatedWithFragmentMinder:(bool)arg1;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (bool)isAssociatedWithFragmentMinder;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

@end
