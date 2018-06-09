/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIIDSIDQueryControllerWrapper : NSObject <CNUIIDSIDQueryControllerWrapper> {
    IDSIDQueryController * _controller;
}

@property (nonatomic, readonly) IDSIDQueryController *controller;

- (void).cxx_destruct;
- (id)controller;
- (id)initWithController:(id)arg1;
- (bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(id /* block */)arg5;

@end