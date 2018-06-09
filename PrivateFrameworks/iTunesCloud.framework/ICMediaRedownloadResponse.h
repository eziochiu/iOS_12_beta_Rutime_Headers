/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMediaRedownloadResponse : NSObject {
    NSDate * _requestDate;
    NSDictionary * _responseDictionary;
    ICURLBag * _urlBag;
}

@property (nonatomic, readonly) bool authorized;
@property (nonatomic, readonly, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly) unsigned int downloadQueueItemCount;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *jingleAction;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly) bool shouldCancelPurchaseBatch;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly, copy) NSData *subscriptionKeyBagData;

- (void).cxx_destruct;
- (bool)authorized;
- (id)dialog;
- (unsigned int)downloadQueueItemCount;
- (id)initWithResponseDictionary:(id)arg1 requestDate:(id)arg2 urlBag:(id)arg3;
- (id)items;
- (id)jingleAction;
- (id)responseDictionary;
- (bool)shouldCancelPurchaseBatch;
- (long long)status;
- (id)subscriptionKeyBagData;

@end
