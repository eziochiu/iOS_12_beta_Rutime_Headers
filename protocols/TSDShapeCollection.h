/* made by EzioChiu.
 */

@protocol TSDShapeCollection <NSObject>

@required

- (NSString *)name;
- (unsigned long long)numberOfShapes;
- (<TSDShapeCollectionShape> *)shapeAtIndex:(unsigned long long)arg1;

@end
