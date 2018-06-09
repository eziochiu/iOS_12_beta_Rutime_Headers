/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImageFormat : NSObject {
    const struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned int x5; int x6; int x7; double x8[4]; double x9[4]; unsigned int x10; } * _bakedFormatInfo;
    double  _dimension;
    int  _formatID;
    long long  _formatMode;
    bool  _isAlwaysFullScreen;
    bool  _isCropped;
    NSString * _name;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _thumbnailKind;
    long long  _version;
}

@property (nonatomic, readonly) const struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned int x5; int x6; int x7; double x8[4]; double x9[4]; unsigned int x10; }*bakedFormatInfo;
@property (nonatomic, readonly) bool bakedFormatIsDynamicallySized;
@property (nonatomic, readonly) double dimension;
@property (nonatomic, readonly) bool dimensionsReferToShortSide;
@property (nonatomic) int formatID;
@property (nonatomic, readonly) long long formatMode;
@property (nonatomic, readonly) bool isAlwaysFullScreen;
@property (nonatomic, readonly) bool isCropped;
@property (nonatomic, readonly) bool isSquare;
@property (nonatomic, readonly) bool isTable;
@property (nonatomic, readonly) bool isThumbnail;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool refersToLatestVersion;
@property (nonatomic, readonly) bool refersToOriginalVersion;
@property (nonatomic, readonly) bool refersToPenultimateVersion;
@property (nonatomic, readonly) bool refersToUnadjustedVersion;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic) long long thumbnailKind;
@property (nonatomic, readonly) long long version;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)_syncFormats;
+ (id)formatWithID:(int)arg1;

- (bool)_canDegradeToFormat:(id)arg1;
- (bool)_isAcceptableForViewSize:(struct CGSize { double x1; double x2; })arg1 contentMode:(long long)arg2 sourceAspectRatio:(double)arg3 desiredImageSize:(struct CGSize { double x1; double x2; })arg4 demoteFactor:(double)arg5;
- (struct CGSize { double x1; double x2; })_shortSideFormatScaledSizeForSourceSize:(struct CGSize { double x1; double x2; })arg1 capLength:(bool)arg2;
- (const struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; unsigned int x5; int x6; int x7; double x8[4]; double x9[4]; unsigned int x10; }*)bakedFormatInfo;
- (bool)bakedFormatIsDynamicallySized;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)description;
- (double)dimension;
- (bool)dimensionsReferToShortSide;
- (int)formatID;
- (long long)formatMode;
- (unsigned long long)fullSizeDesiredLongSide;
- (unsigned long long)fullSizeMaxLongSide;
- (unsigned long long)fullSizeMinShortSide;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFormatID:(int)arg1;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isCropped:(bool)arg3;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isCropped:(bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(bool)arg5;
- (id)initWithName:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 isCropped:(bool)arg3 version:(long long)arg4 isAlwaysFullScreen:(bool)arg5 formatMode:(long long)arg6 thumbnailKind:(long long)arg7;
- (bool)isAlwaysFullScreen;
- (bool)isCropped;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFormat:(id)arg1;
- (bool)isSquare;
- (bool)isTable;
- (bool)isThumbnail;
- (id)name;
- (bool)refersToLatestVersion;
- (bool)refersToOriginalVersion;
- (bool)refersToPenultimateVersion;
- (bool)refersToUnadjustedVersion;
- (struct CGSize { double x1; double x2; })scaledSizeForSourceSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })scaledSizeForSourceSize:(struct CGSize { double x1; double x2; })arg1 capLength:(bool)arg2;
- (void)setFormatID:(int)arg1;
- (void)setThumbnailKind:(long long)arg1;
- (id)shortDescription;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeOfThumbnailWithAspectRatio:(double)arg1;
- (long long)thumbnailKind;
- (id)thumbnailSpecification;
- (long long)version;

// Image: /System/Library/Frameworks/Photos.framework/Photos

- (long long)contentMode;
- (struct CGSize { double x1; double x2; })sizeWithFallBackSize:(struct CGSize { double x1; double x2; })arg1;

@end
