/* made by EzioChiu.
 */

@protocol GEOMapServiceSearchFieldPlaceholderTicket <NSObject>

@required

- (void)cancel;
- (NSDictionary *)responseUserInfo;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end
