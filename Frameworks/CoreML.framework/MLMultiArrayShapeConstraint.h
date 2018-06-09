/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLMultiArrayShapeConstraint : NSObject {
    NSOrderedSet * _shapeSet;
    NSArray * _sizeRangeForDimension;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *enumeratedShapes;
@property (nonatomic, readonly) NSOrderedSet *shapeSet;
@property (nonatomic, readonly) NSArray *sizeRangeForDimension;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)enumeratedShapes;
- (id)findAvailableShape:(id)arg1;
- (id)initUnspecified;
- (id)initWithEnumeratedShapes:(id)arg1;
- (id)initWithSizeRangeForDimension:(id)arg1;
- (bool)isAllowedShape:(id)arg1 error:(id*)arg2;
- (id)shapeSet;
- (id)sizeRangeForDimension;
- (long long)type;

@end
