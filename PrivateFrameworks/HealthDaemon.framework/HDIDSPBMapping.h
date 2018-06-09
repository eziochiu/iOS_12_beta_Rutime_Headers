/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSPBMapping : NSObject {
    Class  _requestClass;
    Class  _responseClass;
}

@property (nonatomic, retain) Class requestClass;
@property (nonatomic, retain) Class responseClass;

- (void).cxx_destruct;
- (Class)requestClass;
- (Class)responseClass;
- (void)setRequestClass:(Class)arg1;
- (void)setResponseClass:(Class)arg1;

@end
