/* made by EzioChiu.
 */

@protocol QLItemThumbnailGeneratorProtocolInternal <NSObject>

@required

- (void)generateThumbnailWithSize:(void *)arg1 completionBlock:(void *)arg2; // needs 2 arg types, found 8: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, bool, void*
- (UIImage *)genericIconWithSize:(struct CGSize { double x1; double x2; })arg1;

@end
