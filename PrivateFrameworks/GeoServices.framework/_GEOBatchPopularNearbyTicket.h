/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchPopularNearbyTicket : GEOAbstractRequestResponseTicket <GEOMapServiceBatchNearbyTicket> {
    NSArray * _categories;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 traits:(id)arg2 categories:(id)arg3;
- (id)resultSectionHeaderForCategory:(id)arg1;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;

@end
