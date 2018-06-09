/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncResponse : SBKResponse {
    SBKSyncResponseData * _syncResponseData;
}

@property (readonly) SBKSyncResponseData *syncResponseData;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (id)syncResponseData;

@end
