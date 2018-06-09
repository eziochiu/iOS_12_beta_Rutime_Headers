/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountSaveOperation : VSAsyncOperation {
    NSOperation * _currentOperation;
    VSOptional * _result;
    VSPersistentStorage * _storage;
    NSArray * _unsavedAccounts;
    VSAccountChannels * _unsavedChannels;
}

@property (nonatomic, retain) NSOperation *currentOperation;
@property (nonatomic, retain) VSOptional *result;
@property (nonatomic, retain) VSPersistentStorage *storage;
@property (nonatomic, copy) NSArray *unsavedAccounts;
@property (nonatomic, retain) VSAccountChannels *unsavedChannels;

- (void).cxx_destruct;
- (void)_startAccountChannelsSaveOperation;
- (void)_startCredentialSaveOperation;
- (void)cancel;
- (id)currentOperation;
- (void)executionDidBegin;
- (id)init;
- (id)initWithUnsavedAccounts:(id)arg1 channels:(id)arg2 storage:(id)arg3;
- (id)result;
- (void)setCurrentOperation:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStorage:(id)arg1;
- (void)setUnsavedAccounts:(id)arg1;
- (void)setUnsavedChannels:(id)arg1;
- (id)storage;
- (id)unsavedAccounts;
- (id)unsavedChannels;

@end
