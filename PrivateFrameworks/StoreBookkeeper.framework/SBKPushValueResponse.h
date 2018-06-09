/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPushValueResponse : SBKResponse {
    NSString * _conflictItemKey;
    NSData * _conflictItemValuePayload;
    NSString * _conflictItemVersionAnchor;
    NSString * _domainVersion;
}

@property (readonly) NSString *conflictItemKey;
@property (readonly) NSData *conflictItemValuePayload;
@property (readonly) NSString *conflictItemVersionAnchor;
@property (readonly) NSString *domainVersion;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (id)conflictItemKey;
- (id)conflictItemValuePayload;
- (id)conflictItemVersionAnchor;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (id)domainVersion;

@end
