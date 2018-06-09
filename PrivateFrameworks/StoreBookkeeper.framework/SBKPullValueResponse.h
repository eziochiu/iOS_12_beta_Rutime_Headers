/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKPullValueResponse : SBKResponse {
    NSString * _domainVersion;
    NSString * _itemKey;
    NSData * _itemValuePayload;
    NSString * _itemVersion;
}

@property (readonly) NSString *domainVersion;
@property (readonly) NSString *itemKey;
@property (readonly) NSData *itemValuePayload;
@property (readonly) NSString *itemVersion;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (id)domainVersion;
- (id)itemKey;
- (id)itemValuePayload;
- (id)itemVersion;

@end
