/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXWebContentMessageSecurityOrigin : NSObject <SXWebContentMessageSecurityOrigin> {
    NSString * _host;
    NSString * _protocol;
    NSURLRequest * _request;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *host;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSURLRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)host;
- (id)initWithProtocol:(id)arg1 host:(id)arg2 request:(id)arg3;
- (id)protocol;
- (id)request;

@end
