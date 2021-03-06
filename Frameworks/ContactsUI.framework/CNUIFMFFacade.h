/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIFMFFacade : NSObject {
    FMFSession * _fmfSession;
}

@property (nonatomic, readonly) FMFSession *fmfSession;

- (void).cxx_destruct;
- (void)fetchFriendHandlesWithCompletionHandler:(id /* block */)arg1;
- (id)fmfSession;
- (id)init;
- (id)initWithFMFSession:(id)arg1;

@end
