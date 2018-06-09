/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSEncodedPeopleFetcher : NSObject <CNEncodedFetchCursor> {
    void * _addressBook;
    id /* block */  _completionHandler;
    CNContactFetchRequest * _contactFetchRequest;
    <CNEncodedFetchCursor> * _cursor;
    CNContactsEnvironment * _environment;
    <CNContactsLogger> * _logger;
    CNManagedConfiguration * _managedConfiguration;
}

@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) CNContactFetchRequest *contactFetchRequest;
@property (nonatomic, retain) <CNEncodedFetchCursor> *cursor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNContactsLogger> *logger;
@property (nonatomic, retain) CNManagedConfiguration *managedConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void*)addressBook;
- (id /* block */)completionHandler;
- (id)contactFetchRequest;
- (id)cursor;
- (id)cursorWithError:(id*)arg1;
- (void)dealloc;
- (id)environment;
- (bool)fetchEncodedPeopleWithError:(id*)arg1 cancelationToken:(id)arg2 batchHandler:(id /* block */)arg3;
- (void)fetchNextBatchWithReply:(id /* block */)arg1;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 managedConfiguration:(id)arg3 completionHandler:(id /* block */)arg4 environment:(id)arg5;
- (id)logger;
- (id)managedConfiguration;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCursor:(id)arg1;
- (void)setManagedConfiguration:(id)arg1;

@end
