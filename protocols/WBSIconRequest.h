/* made by EzioChiu.
 */

@protocol WBSIconRequest <NSObject>

@required

- (struct CGSize { double x1; double x2; })sizeForDrawing;
- (NSString *)uniqueIdentifier;

@end
