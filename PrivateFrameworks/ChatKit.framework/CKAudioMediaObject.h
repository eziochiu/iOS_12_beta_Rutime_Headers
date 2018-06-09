/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAudioMediaObject : CKAVMediaObject

@property (nonatomic, retain) NSArray *powerLevels;

+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
+ (void)_cachePowerLevels:(id)arg1 forKey:(id)arg2;
+ (id)_cachedPowerLevelsForKey:(id)arg1;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)generateThumbnailForWidth:(double)arg1 color:(id)arg2 powerLevels:(id)arg3 fileURL:(id)arg4;

- (bool)canExport;
- (Class)coloredBalloonViewClass;
- (id)composeWaveformForWidth:(double)arg1 orientation:(BOOL)arg2;
- (void)export:(id)arg1;
- (id)generatePlaceholderThumbnailForWidth:(double)arg1;
- (id)generatePreviewFromThumbnail:(id)arg1 width:(double)arg2 orientation:(BOOL)arg3;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (bool)isLikeAudioMessage;
- (int)mediaType;
- (id)powerLevels;
- (id)previewFilenameExtension;
- (id)previewItemTitle;
- (void)savePreview:(id)arg1 toURL:(id)arg2 forOrientation:(BOOL)arg3;
- (id)savedPreviewFromURL:(id)arg1 forOrientation:(BOOL)arg2;
- (void)setPowerLevels:(id)arg1;
- (bool)shouldBeQuickLooked;
- (id)waveformForWidth:(double)arg1 orientation:(BOOL)arg2;

@end
