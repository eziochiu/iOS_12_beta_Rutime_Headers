/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {
    NSString * _GUID;
    NSString * _derivativeUTI;
    NSNumber * _height;
    bool  _isDeletable;
    bool  _isMine;
    bool  _isPhotoIris;
    bool  _isVideo;
    NSDictionary * _metaData;
    NSString * _personID;
    unsigned short  _playbackVariation;
    NSDate * _timestamp;
    NSNumber * _width;
}

@property (nonatomic, readonly, retain) NSString *GUID;
@property (nonatomic, readonly, retain) NSString *derivativeUTI;
@property (nonatomic, readonly, retain) NSNumber *height;
@property (nonatomic, readonly) bool isDeletable;
@property (nonatomic, readonly) bool isMine;
@property (nonatomic, readonly) bool isPhotoIris;
@property (nonatomic, readonly) bool isVideo;
@property (nonatomic, readonly, retain) NSDictionary *metaData;
@property (nonatomic, readonly, retain) NSString *personID;
@property (nonatomic, readonly) unsigned short playbackVariation;
@property (nonatomic, readonly, retain) NSDate *timestamp;
@property (nonatomic, readonly, retain) NSNumber *width;

+ (bool)supportsSecureCoding;

- (id)GUID;
- (void)dealloc;
- (id)derivativeUTI;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)height;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDeletable;
- (bool)isMine;
- (bool)isPhotoIris;
- (bool)isVideo;
- (id)metaData;
- (id)personID;
- (unsigned short)playbackVariation;
- (id)timestamp;
- (id)width;

@end
