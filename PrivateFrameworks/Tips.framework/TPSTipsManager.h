/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

@interface TPSTipsManager : NSObject {
    NSMutableDictionary * _collectionImageDownloadHandlerMap;
    NSMutableDictionary * _collectionImageDownloadTasksMap;
    NSObject<OS_os_transaction> * _collectionImageFetchTransaction;
    NSBundle * _frameworkBundle;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, retain) NSMutableDictionary *collectionImageDownloadHandlerMap;
@property (nonatomic, retain) NSMutableDictionary *collectionImageDownloadTasksMap;
@property (nonatomic, retain) NSObject<OS_os_transaction> *collectionImageFetchTransaction;

+ (id)defaultManager;

- (void).cxx_destruct;
- (void)_destroyXPCConnection;
- (void)activateCollectionIdentifier:(id)arg1 context:(id)arg2;
- (id)cacheCollectionImageFileURLForCollectionIdentifier:(id)arg1;
- (id)cachePathForCollectionIdentifier:(id)arg1;
- (id)collectionImageDownloadHandlerMap;
- (id)collectionImageDownloadTasksMap;
- (id)collectionImageFetchTransaction;
- (void)collectionImageForCollectionIdentifier:(id)arg1 path:(id)arg2 fetchIfNeeded:(bool)arg3 completionHandler:(id /* block */)arg4;
- (id)collectionImageNameWithCollectionIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)localizedStringForKey:(id)arg1 localizedStringsFileName:(id)arg2;
- (id)modelWithSeparator:(id)arg1;
- (void)setCollectionImageDownloadHandlerMap:(id)arg1;
- (void)setCollectionImageDownloadTasksMap:(id)arg1;
- (void)setCollectionImageFetchTransaction:(id)arg1;
- (id)welcomeInformation;
- (id)xpcConnection;

@end
