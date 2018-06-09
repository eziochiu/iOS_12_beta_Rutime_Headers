/* made by EzioChiu
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARObjectDetectionResultData : NSObject <ARResultData, NSCopying, NSSecureCoding> {
    NSArray * _detectedObjects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *detectedObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchorsForCameraWithTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 referenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)detectedObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDetectedObjects:(id)arg1;

@end
