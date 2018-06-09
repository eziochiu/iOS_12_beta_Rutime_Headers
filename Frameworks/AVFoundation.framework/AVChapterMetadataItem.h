/* made by EzioChiu
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVChapterMetadataItem : AVMetadataItem {
    AVChapterMetadataItemInternal * _privChapter;
}

- (void)_addFigAssetNotifications;
- (long long)_chapterGroupIndex;
- (long long)_chapterIndex;
- (void)_ensureValueLoadedSync;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg9;
- (void)_removeFigAssetNotifications;
- (void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2;
- (void)_takeValueFrom:(id)arg1;
- (bool)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (long long)_valueStatus;
- (void)cancelLoading;
- (id)commonKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataType;
- (void)dealloc;
- (id)description;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)extendedLanguageTag;
- (id)extraAttributes;
- (void)finalize;
- (id)init;
- (id)key;
- (id)keySpace;
- (id)languageCode;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)locale;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)startDate;
- (long long)statusOfValueForKey:(id)arg1 error:(id*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)value;

@end
