/* made by EzioChiu.
 */

@protocol _UICollectionSizeProviding <NSObject>

@required

- (long long)count;
- (bool)indexIsValid:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeForIndex:(long long)arg1;

@end
