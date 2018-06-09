/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPAsset : NSObject <NSCopying, NSMutableCopying> {
    PLPTPAssetHandle * _assetHandle;
    bool  _burstFavorite;
    bool  _burstFirstPicked;
    bool  _burstPicked;
    NSString * _burstUUID;
    NSString * _captureDateString;
    long long  _conversionGroup;
    NSString * _createdFilename;
    bool  _deleted;
    long long  _desiredOrientation;
    NSString * _durationString;
    NSData * _event;
    bool  _exifAvailable;
    NSString * _filename;
    NSString * _fullDirectoryPath;
    NSString * _groupUUID;
    bool  _highFrameRateVideo;
    struct CGSize { 
        double width; 
        double height; 
    }  _imagePixSize;
    NSString * _locationString;
    NSString * _modificationDateString;
    NSNumber * _objectCompressedSize;
    NSString * _originalFilename;
    NSString * _originatingAssetID;
    NSString * _relatedUUID;
    NSNumber * _thumbCompressedSize;
    NSNumber * _thumbOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbPixSize;
    bool  _timeLapseVideo;
}

@property (nonatomic, readonly, copy) PLPTPAssetHandle *assetHandle;
@property (getter=isBurstFavorite, nonatomic, readonly) bool burstFavorite;
@property (getter=isBurstFirstPicked, nonatomic, readonly) bool burstFirstPicked;
@property (getter=isBurstPicked, nonatomic, readonly) bool burstPicked;
@property (nonatomic, readonly, copy) NSString *burstUUID;
@property (nonatomic, readonly, copy) NSString *cacheKey;
@property (nonatomic, readonly, copy) NSString *captureDateString;
@property (nonatomic, readonly) long long conversionGroup;
@property (nonatomic, readonly, copy) NSString *createdFilename;
@property (getter=isDeleted, nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) long long desiredOrientation;
@property (nonatomic, readonly, copy) NSString *durationString;
@property (nonatomic, readonly, copy) NSData *event;
@property (getter=isExifAvailable, nonatomic, readonly) bool exifAvailable;
@property (nonatomic, readonly, copy) NSString *filename;
@property (nonatomic, readonly, copy) NSString *fullDirectoryPath;
@property (nonatomic, readonly, copy) NSString *groupUUID;
@property (getter=isHighFrameRateVideo, nonatomic, readonly) bool highFrameRateVideo;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imagePixSize;
@property (nonatomic, readonly, copy) NSString *locationString;
@property (nonatomic, readonly, copy) NSString *modificationDateString;
@property (nonatomic, readonly, copy) NSNumber *objectCompressedSize;
@property (nonatomic, readonly, copy) NSString *originalFilename;
@property (nonatomic, readonly, copy) NSString *originatingAssetID;
@property (nonatomic, readonly, copy) NSString *relatedUUID;
@property (nonatomic, readonly, copy) NSNumber *thumbCompressedSize;
@property (nonatomic, readonly, copy) NSNumber *thumbOffset;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } thumbPixSize;
@property (getter=isTimeLapseVideo, nonatomic, readonly) bool timeLapseVideo;

- (void).cxx_destruct;
- (id)_pl_prettyDescriptionWithIndent:(long long)arg1;
- (id)assetHandle;
- (id)burstUUID;
- (id)cacheKey;
- (id)captureDateString;
- (long long)conversionGroup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdFilename;
- (id)description;
- (long long)desiredOrientation;
- (id)durationString;
- (id)event;
- (id)filename;
- (id)fullDirectoryPath;
- (id)groupUUID;
- (struct CGSize { double x1; double x2; })imagePixSize;
- (id)initWithPTPAsset:(id)arg1;
- (bool)isBurstFavorite;
- (bool)isBurstFirstPicked;
- (bool)isBurstPicked;
- (bool)isDeleted;
- (bool)isExifAvailable;
- (bool)isHighFrameRateVideo;
- (bool)isTimeLapseVideo;
- (id)locationString;
- (id)modificationDateString;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectCompressedSize;
- (id)originalFilename;
- (id)originatingAssetID;
- (id)relatedUUID;
- (id)thumbCompressedSize;
- (id)thumbOffset;
- (struct CGSize { double x1; double x2; })thumbPixSize;

@end
