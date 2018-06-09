/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOURLComponentsWithHeaders : NSObject {
    NSURLComponents * _URLComponents;
    NSMutableDictionary * _headerFields;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSURLComponents *URLComponents;
@property (nonatomic, readonly) GEOURLWithHeaders *URLWithHeaders;
@property (nonatomic, readonly) NSMutableDictionary *headerFields;

- (void).cxx_destruct;
- (id)URL;
- (id)URLComponents;
- (id)URLWithHeaders;
- (id)headerFields;
- (id)init;
- (id)initWithString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLComponents:(id)arg1;
- (void)updateQueryItemsWithBlock:(id /* block */)arg1;

@end
