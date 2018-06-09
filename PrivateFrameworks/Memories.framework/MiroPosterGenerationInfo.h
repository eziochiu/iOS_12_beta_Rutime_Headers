/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroPosterGenerationInfo : NSObject <NSCopying> {
    bool  _analysisDataWasAvailable;
    bool  _sourceImageWasCloudThumb;
}

@property bool analysisDataWasAvailable;
@property bool sourceImageWasCloudThumb;

- (bool)analysisDataWasAvailable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isActualPoster;
- (void)setAnalysisDataWasAvailable:(bool)arg1;
- (void)setSourceImageWasCloudThumb:(bool)arg1;
- (bool)sourceImageWasCloudThumb;
- (id)storageKeyHint;

@end
