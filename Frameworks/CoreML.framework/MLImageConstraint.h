/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying> {
    unsigned long long  _pixelType;
    long long  _pixelsHigh;
    long long  _pixelsWide;
    MLImageSizeConstraint * _sizeConstraint;
}

@property (readonly) unsigned long long imageHeight;
@property (readonly) unsigned long long imageWidth;
@property (readonly) unsigned int osType;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (readonly) unsigned long long pixelType;
@property (nonatomic, readonly) long long pixelsHigh;
@property (nonatomic, readonly) long long pixelsWide;
@property (nonatomic, readonly) MLImageSizeConstraint *sizeConstraint;

+ (id)_stringForOSType:(unsigned int)arg1;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3;
+ (id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
+ (unsigned long long)imagePixelTypeFromOSType:(unsigned int)arg1;
+ (bool)osType:(unsigned int)arg1 isAcceptedForPixelType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_stringForAllowedOSTypes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)imageHeight;
- (unsigned long long)imageWidth;
- (id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (unsigned int)osType;
- (unsigned int)pixelFormatType;
- (unsigned long long)pixelType;
- (long long)pixelsHigh;
- (long long)pixelsWide;
- (id)sizeConstraint;

@end
