/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSStoreURLBagLoadOperation : VSAsyncOperation {
    VSStoreURLBag * _bag;
    NSString * _bagKey;
    NSError * _error;
    id  _value;
}

@property (nonatomic, retain) VSStoreURLBag *bag;
@property (nonatomic, copy) NSString *bagKey;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) id value;

- (void).cxx_destruct;
- (id)bag;
- (id)bagKey;
- (id)error;
- (void)executionDidBegin;
- (void)setBag:(id)arg1;
- (void)setBagKey:(id)arg1;
- (void)setError:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
