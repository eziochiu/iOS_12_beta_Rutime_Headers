/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKDatabaseUserAuthenticationMiddleware : NSObject <FCCKDatabaseOperationMiddleware> {
    bool  _privateDataSyncingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPrivateDataSyncingEnabled, nonatomic) bool privateDataSyncingEnabled;
@property (readonly) Class superclass;

- (long long)database:(id)arg1 willEnqueueOperation:(id)arg2;
- (id)init;
- (id)initWithPrivateDataSyncingEnabled:(bool)arg1;
- (bool)isPrivateDataSyncingEnabled;
- (void)setPrivateDataSyncingEnabled:(bool)arg1;

@end
