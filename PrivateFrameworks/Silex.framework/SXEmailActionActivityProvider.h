/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider> {
    <SXContactsPresenter> * _contactsPresenter;
    <SXMailPresenter> * _mailPresenter;
}

@property (nonatomic, readonly) <SXContactsPresenter> *contactsPresenter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXMailPresenter> *mailPresenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)arg1;
- (void)addToContacts:(id)arg1;
- (void)composeMailTo:(id)arg1 subject:(id)arg2;
- (id)contactsPresenter;
- (id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2;
- (id)mailPresenter;

@end
