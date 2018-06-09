/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAbstractTicket : NSObject {
    unsigned long long  _cachePolicy;
    bool  _cancelled;
    NSDictionary * _responseUserInfo;
    GEOMapServiceTraits * _traits;
}

@property (nonatomic) unsigned long long cachePolicy;
@property (getter=isCancelled, readonly) bool cancelled;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (unsigned long long)cachePolicy;
- (void)cancel;
- (id)description;
- (id)init;
- (id)initWithTraits:(id)arg1;
- (bool)isCancelled;
- (id)responseUserInfo;
- (void)setCachePolicy:(unsigned long long)arg1;
- (id)traits;

@end
