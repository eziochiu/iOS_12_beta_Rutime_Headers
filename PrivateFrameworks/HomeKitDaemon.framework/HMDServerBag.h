/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDServerBag : HMFObject <NSURLSessionDelegate> {
    NSDictionary * _dictionaryRepresentation;
    unsigned long long  _environment;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _refreshing;
    NSURL * _url;
    NSURLSession * _urlSession;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) double accessoryReportTimeout;
@property (nonatomic, readonly, copy) NSURL *accessoryReportURL;
@property (nonatomic, readonly, copy) NSURL *activationCertificateHostnameURL;
@property (nonatomic, readonly, copy) NSURL *activationHostnameURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) unsigned long long environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) bool refreshing;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURLSession *urlSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)activationCertificateHostnameURLOverride;
+ (id)activationHostnameURLOverride;
+ (id)defaultServerBag;
+ (void)initialize;
+ (id)serverBagURLForEnvironment:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleServerBagResponseData:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_loadDefaultBag;
- (void)_synchronizeWithCompletion:(id /* block */)arg1;
- (double)accessoryReportTimeout;
- (id)accessoryReportURL;
- (id)activationCertificateHostnameURL;
- (id)activationHostnameURL;
- (id)debugDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)environment;
- (id)init;
- (id)initWithEnvironment:(unsigned long long)arg1;
- (id)propertyQueue;
- (bool)refreshing;
- (void)setDictionaryRepresentation:(id)arg1;
- (void)setRefreshing:(bool)arg1;
- (id)url;
- (id)urlSession;
- (id)workQueue;

@end
