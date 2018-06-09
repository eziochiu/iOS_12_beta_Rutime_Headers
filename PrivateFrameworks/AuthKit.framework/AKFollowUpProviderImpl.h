/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKFollowUpProviderImpl : NSObject <AKFollowUpProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedFollowUpController;

- (bool)addFollowUpItems:(id)arg1 error:(id*)arg2;
- (bool)clearNotificationsForItem:(id)arg1 error:(id*)arg2;
- (id)pendingAuthKitFollowUpItems:(id*)arg1;
- (bool)removeAllAuthKitFollowUpItems:(id*)arg1;
- (bool)removeFollowUpItems:(id)arg1 error:(id*)arg2;
- (bool)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;

@end
