/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEORemoteRequestCounterTicket : NSObject <GEORequestCounterTicket> {
    NSString * _appId;
    GEORequestCounterRemoteProxy * _remoteProxy;
    long long  _requestId;
    unsigned char  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)requestCounterTicketForType:(unsigned char)arg1 appId:(id)arg2 requestId:(long long)arg3 remoteProxy:(id)arg4;

- (void).cxx_destruct;
- (void)requestCompletedWithResult:(unsigned char)arg1 mode:(unsigned char)arg2 xmitBytes:(long long)arg3 recvBytes:(long long)arg4;

@end
