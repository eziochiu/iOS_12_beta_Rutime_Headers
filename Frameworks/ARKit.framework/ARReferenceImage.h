/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARReferenceImage : NSObject <NSCopying, NSSecureCoding> {
    struct __CVBuffer { } * _alphaMask;
    double  _estimatedQuality;
    NSUUID * _identifier;
    NSString * _name;
    struct CGSize { 
        double width; 
        double height; 
    }  _physicalSize;
    struct __CVBuffer { } * _pixelBuffer;
    ARReferenceImageManager * _referenceImageManager;
}

@property (nonatomic, readonly) struct __CVBuffer { }*alphaMask;
@property double estimatedQuality;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSize;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (retain) ARReferenceImageManager *referenceImageManager;

+ (id)referenceImageManager;
+ (id)referenceImagesInGroupNamed:(id)arg1 bundle:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalog:(id)arg2;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogName:(id)arg2 bundle:(id)arg3;
+ (id)referenceImagesInGroupNamed:(id)arg1 catalogURL:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)alphaMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)estimateQualityWithCompletionHandler:(id /* block */)arg1;
- (double)estimatedQuality;
- (unsigned long long)hash;
- (id)identifier;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (id)initWithCIImage:(id)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3 alphaInfo:(unsigned int*)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 orientation:(unsigned int)arg2 physicalWidth:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)name;
- (struct CGSize { double x1; double x2; })physicalSize;
- (struct __CVBuffer { }*)pixelBuffer;
- (id)referenceImageManager;
- (void)setEstimatedQuality:(double)arg1;
- (void)setName:(id)arg1;
- (void)setReferenceImageManager:(id)arg1;

@end
