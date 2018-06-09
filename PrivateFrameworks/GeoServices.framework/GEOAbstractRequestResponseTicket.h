/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {
    GEOPDPlaceRequest * _request;
    GEOPDPlaceResponse * _response;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithRequest:(id)arg1 traits:(id)arg2;
- (void)performSubmitWithHandler:(id /* block */)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(id /* block */)arg4;
- (void)performSubmitWithHandler:(id /* block */)arg1 timeout:(double)arg2 networkActivity:(id /* block */)arg3;

@end
