/* made by EzioChiu.
 */

@protocol INImageLoading <INImageServing>

@required

- (bool)canLoadImageDataForImage:(INImage *)arg1;
- (void)loadImageDataFromImage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: INImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INImage *, NSError *, void*

@end
