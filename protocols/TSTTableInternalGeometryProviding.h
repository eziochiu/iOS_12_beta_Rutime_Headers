/* made by EzioChiu.
 */

@protocol TSTTableInternalGeometryProviding <NSObject>

@required

- (unsigned short)numberOfColumns;
- (unsigned short)numberOfFooterRows;
- (unsigned short)numberOfHeaderColumns;
- (unsigned short)numberOfHeaderRows;
- (unsigned short)numberOfRows;

@end
