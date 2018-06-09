/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVArtworkService : NSObject {
    NSXPCConnection * _serverConnection;
    NSOperationQueue * _serviceThrottlingOperationQueue;
}

@property (nonatomic, retain) NSXPCConnection *serverConnection;
@property (nonatomic, retain) NSOperationQueue *serviceThrottlingOperationQueue;

+ (id)sharedService;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)sendRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)serverConnection;
- (id)serviceThrottlingOperationQueue;
- (void)setServerConnection:(id)arg1;
- (void)setServiceThrottlingOperationQueue:(id)arg1;

@end
