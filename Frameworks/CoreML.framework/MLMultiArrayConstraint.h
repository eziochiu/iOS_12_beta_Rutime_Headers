/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying> {
    long long  _dataType;
    NSArray * _shape;
    MLMultiArrayShapeConstraint * _shapeConstraint;
}

@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) MLMultiArrayShapeConstraint *shapeConstraint;

+ (id)constraintWithShape:(id)arg1 dataType:(long long)arg2;
+ (id)constraintWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)description;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3;
- (bool)isAllowedDataType:(long long)arg1 error:(id*)arg2;
- (bool)isAllowedShape:(id)arg1 error:(id*)arg2;
- (bool)isAllowedValue:(id)arg1 error:(id*)arg2;
- (bool)isAllowedValue:(id)arg1 neuralNetworkInput:(bool)arg2 error:(id*)arg3;
- (id)shape;
- (id)shapeConstraint;

@end
