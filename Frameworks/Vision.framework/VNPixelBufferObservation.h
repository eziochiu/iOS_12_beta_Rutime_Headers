/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPixelBufferObservation : VNObservation {
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequestRevision:(unsigned long long)arg1 CVPixelBuffer:(struct __CVBuffer { }*)arg2;
- (bool)isEqual:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;

@end
