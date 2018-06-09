/* made by EzioChiu.
 */

@protocol INImageStoring <INImageServing>

@required

- (bool)canStoreImage:(INImage *)arg1;
- (void)purgeImageWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retrieveImageWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INImage *, NSError *, void*
- (void)storeImage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: INImage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
