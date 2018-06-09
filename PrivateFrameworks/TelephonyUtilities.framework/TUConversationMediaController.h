/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUConversationMediaController : NSObject <TUConversationMediaControllerDataSourceDelegate> {
    <TUConversationManagerDataSource> * _dataSource;
    <TUConversationMediaControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <TUConversationManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUConversationMediaControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (id)initWithConversationDataSource:(id)arg1;
- (void)mediaPrioritiesChangeForConversation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateConversationWithUUID:(id)arg1 participantPresentationContexts:(id)arg2;

@end
