/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {
    CKContactsSearchManager * _contactsSearchManager;
}

@property (nonatomic, retain) CKContactsSearchManager *contactsSearchManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)contactsSearchManager;
- (void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2;
- (id)conversationCacheForCcontactsSearchManager:(id)arg1;
- (void)dealloc;
- (void)setContactsSearchManager:(id)arg1;
- (void)updateShortcutItems;

@end
