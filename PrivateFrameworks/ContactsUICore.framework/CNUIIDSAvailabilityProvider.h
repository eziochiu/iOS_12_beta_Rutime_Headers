/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIIDSAvailabilityProvider : NSObject <CNUIIDSAvailabilityProvider> {
    CNCache * _faceTimeRequests;
    CNCache * _iMessageRequests;
    <CNUIIDSIDQueryControllerWrapper> * _queryControllerWrapper;
    NSArray * _requestFutures;
    <CNScheduler> * _resourceLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNCache *faceTimeRequests;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNCache *iMessageRequests;
@property (nonatomic, retain) <CNUIIDSIDQueryControllerWrapper> *queryControllerWrapper;
@property (nonatomic, retain) NSArray *requestFutures;
@property (nonatomic, retain) <CNScheduler> *resourceLock;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore

- (void).cxx_destruct;
- (id)faceTimeRequests;
- (id)iMessageRequests;
- (id)init;
- (id)initWithQueryControllerWrapper:(id)arg1;
- (id)queryControllerWrapper;
- (id)requestFutures;
- (id)resourceLock;
- (void)setFaceTimeRequests:(id)arg1;
- (void)setIMessageRequests:(id)arg1;
- (void)setQueryControllerWrapper:(id)arg1;
- (void)setRequestFutures:(id)arg1;
- (void)setResourceLock:(id)arg1;
- (void)startRequestForCacheMisses:(id)arg1 service:(long long)arg2 scheduler:(id)arg3;
- (id)validateHandles:(id)arg1 forService:(long long)arg2 schedulerProvider:(id)arg3;
- (id)validateHandlesForFaceTime:(id)arg1 schedulerProvider:(id)arg2;
- (id)validateHandlesForIMessage:(id)arg1 schedulerProvider:(id)arg2;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)validateHandlesForFaceTime:(id)arg1 availabilityProvider:(id)arg2 schedulerProvider:(id)arg3 handler:(id /* block */)arg4;
+ (id)validateHandlesForIMessage:(id)arg1 availabilityProvider:(id)arg2 schedulerProvider:(id)arg3 handler:(id /* block */)arg4;

@end
