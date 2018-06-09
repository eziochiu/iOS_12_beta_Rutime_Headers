/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOServerProxy : NSObject {
    GEOServer * _server;
    Class  _serverClass;
}

@property (nonatomic, readonly) GEOServer *server;
@property (nonatomic, readonly) Class serverClass;

+ (id)proxyForClass:(Class)arg1;
+ (id)proxyForServer:(id)arg1 daemon:(id)arg2;

- (void).cxx_destruct;
- (void)_setServer:(id)arg1 daemon:(id)arg2;
- (id)description;
- (bool)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServerProxy:(id)arg1;
- (id)server;
- (Class)serverClass;
- (void)startServerWithDaemon:(id)arg1;

@end
