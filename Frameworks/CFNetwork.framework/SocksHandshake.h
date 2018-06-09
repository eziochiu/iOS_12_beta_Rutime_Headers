/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface SocksHandshake : NSObject {
    NSDictionary * _credentials;
    bool  _finished;
    NSString * _host;
    unsigned short  _port;
}

@property (retain) NSDictionary *credentials;
@property bool finished;
@property (retain) NSString *host;
@property unsigned short port;

+ (id)socksHadshakeWithVersion:(int)arg1;

- (void).cxx_destruct;
- (id)credentials;
- (id)finish:(int)arg1;
- (bool)finished;
- (id)host;
- (bool)parse:(const char *)arg1 len:(long long)arg2 completion:(id /* block */)arg3;
- (unsigned short)port;
- (void)setCredentials:(id)arg1;
- (void)setFinished:(bool)arg1;
- (void)setHost:(id)arg1;
- (void)setPort:(unsigned short)arg1;

@end
