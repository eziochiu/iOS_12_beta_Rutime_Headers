/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFLibrarySearchableIndexItem : NSObject {
    NSData * _bodyData;
    bool  _hasCompleteBodyData;
    NSString * _identifier;
    long long  _indexingType;
    MFMailMessage * _message;
}

@property (nonatomic, retain) NSData *bodyData;
@property (nonatomic, readonly) unsigned long long bodySizeInBytes;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic) bool hasCompleteBodyData;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic) long long indexingType;
@property (nonatomic, readonly, retain) MFMailMessage *message;
@property (nonatomic, readonly, retain) CSSearchableItem *searchableItem;

+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;
+ (id)transactionAttributeKey;

- (bool)_isMessagePartOfExistingThreadWithHeaders:(id)arg1;
- (bool)_shouldAutoDownloadAttachment:(id)arg1;
- (void)_updateAllAttributesInAttributeSet:(id)arg1 clientState:(id)arg2;
- (void)_updateFlagsAttributesInAttributeSet:(id)arg1;
- (id)bodyData;
- (unsigned long long)bodySizeInBytes;
- (long long)compare:(id)arg1;
- (void)dealloc;
- (id)domainIdentifier;
- (id)fetchIndexableAttachments;
- (bool)hasCompleteBodyData;
- (id)identifier;
- (long long)indexingType;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;
- (id)message;
- (id)searchableItem;
- (id)searchableItemWithClientState:(id)arg1;
- (void)setBodyData:(id)arg1;
- (void)setHasCompleteBodyData:(bool)arg1;
- (void)setIndexingType:(long long)arg1;
- (bool)shouldExcludeFromIndex;

@end
