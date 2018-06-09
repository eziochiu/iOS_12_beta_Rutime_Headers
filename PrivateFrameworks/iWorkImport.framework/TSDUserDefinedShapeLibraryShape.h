/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDUserDefinedShapeLibraryShape : NSObject <TSDShapeCollectionShape> {
    TSUBezierPath * _bezierPath;
    NSString * _bezierPathString;
    NSString * _identifier;
    NSString * _name;
    unsigned long long  _position;
}

@property (nonatomic, readonly) NSString *accessibilityName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *keywords;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) TSUBezierPath *p_bezierPath;
@property (nonatomic, readonly) NSString *p_bezierPathString;
@property (nonatomic, readonly) NSString *p_identifier;
@property (nonatomic) unsigned long long p_position;
@property (nonatomic, readonly) int shapeType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accessibilityName;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1 bezierPathString:(id)arg2 name:(id)arg3 position:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)keywords;
- (id)name;
- (id)p_bezierPath;
- (id)p_bezierPathString;
- (id)p_identifier;
- (unsigned long long)p_position;
- (id)pathSourceWithSize:(struct CGSize { double x1; double x2; })arg1;
- (unsigned long long)positionInCategoryWithID:(id)arg1;
- (void)setP_position:(unsigned long long)arg1;
- (int)shapeType;

@end
