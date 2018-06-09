/* made by EzioChiu.
 */

@protocol NSProgressRegistrar

@required

- (oneway void)addPublisher:(void *)arg1 forID:(void *)arg2 acknowledgementAppBundleIDs:(void *)arg3 category:(void *)arg4 fileURL:(void *)arg5 initialValues:(void *)arg6 completionHandler:(void *)arg7; // needs 7 arg types, found 12: <NSProgressPublisher> *, NSString *, NSSet *, NSString *, NSURL *, NSProgressValues *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (oneway void)addSubscriber:(void *)arg1 forID:(void *)arg2 appBundleID:(void *)arg3 category:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: <NSProgressSubscriber> *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)addSubscriber:(void *)arg1 forID:(void *)arg2 appBundleID:(void *)arg3 fileURL:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 9: <NSProgressSubscriber> *, NSString *, NSString *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)observePublisherForID:(NSString *)arg1 values:(NSArray *)arg2 forKeys:(NSArray *)arg3;
- (oneway void)observePublisherUserInfoForID:(NSString *)arg1 value:(id)arg2 forKey:(NSString *)arg3;
- (oneway void)removePublisherForID:(NSString *)arg1;
- (oneway void)removeSubscriberForID:(NSString *)arg1;

@end