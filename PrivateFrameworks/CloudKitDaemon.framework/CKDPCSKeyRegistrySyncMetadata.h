/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSKeyRegistrySyncMetadata : NSObject {
    NSError * _error;
    NSObject<OS_dispatch_group> * _group;
    NSNumber * _success;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, retain) NSNumber *success;

- (void).cxx_destruct;
- (id)error;
- (id)group;
- (void)setError:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setSuccess:(id)arg1;
- (id)success;

@end
