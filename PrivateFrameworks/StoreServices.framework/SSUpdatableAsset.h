/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatableAsset : NSObject {
    NSURL * _cacheURL;
    NSString * _md5;
    NSString * _name;
    NSURL * _serverURL;
    NSString * _version;
}

@property (setter=_setCacheURL:, nonatomic, retain) NSURL *cacheURL;
@property (setter=_setMD5:, nonatomic, copy) NSString *md5;
@property (setter=_setName:, nonatomic, copy) NSString *name;
@property (setter=_setServerURL:, nonatomic, retain) NSURL *serverURL;
@property (setter=_setVersion:, nonatomic, copy) NSString *version;

- (void).cxx_destruct;
- (void)_setCacheURL:(id)arg1;
- (void)_setMD5:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setServerURL:(id)arg1;
- (void)_setVersion:(id)arg1;
- (id)cacheURL;
- (id)md5;
- (id)name;
- (id)serverURL;
- (id)version;

@end
