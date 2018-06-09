/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMPersistenceConfiguration : NSObject {
    NSString * _configurationType;
    NSDictionary * _mirroringOptions;
    NSDictionary * _storeOptions;
    NSString * _storeType;
    NSURL * _storeURL;
}

@property (nonatomic, readonly, copy) NSString *configurationType;
@property (nonatomic, readonly, copy) NSDictionary *mirroringOptions;
@property (nonatomic, readonly, copy) NSDictionary *storeOptions;
@property (nonatomic, readonly, copy) NSString *storeType;
@property (nonatomic, readonly) NSURL *storeURL;

+ (id)storeURLForConfigurationType:(id)arg1;

- (void).cxx_destruct;
- (id)configurationType;
- (id)initWithStoreType:(id)arg1 configurationType:(id)arg2 storeOptions:(id)arg3 mirroringOptions:(id)arg4 storeURL:(id)arg5;
- (id)mirroringOptions;
- (id)storeOptions;
- (id)storeType;
- (id)storeURL;

@end
