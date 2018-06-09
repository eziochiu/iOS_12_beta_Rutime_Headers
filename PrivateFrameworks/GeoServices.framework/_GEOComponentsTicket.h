/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOComponentsTicket : GEOAbstractMapServiceTicket {
    NSDictionary * _components;
    NSString * _contentProvider;
    GEOMapItemIdentifier * _identifier;
    int  _resultProviderID;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithComponents:(id)arg1 identifier:(id)arg2 resultProviderID:(int)arg3 contentProvider:(id)arg4 traits:(id)arg5;
- (void)submitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(id /* block */)arg4;

@end
