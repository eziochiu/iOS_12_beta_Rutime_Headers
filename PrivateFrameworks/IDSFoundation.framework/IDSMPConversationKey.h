/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSMPConversationKey : NSObject {
    void * _backingStore;
}

@property (nonatomic) void*backingStore;

- (void*)backingStore;
- (void*)conversationKey;
- (void)dealloc;
- (id)initWithConversationKey:(void*)arg1;
- (void)setBackingStore:(void*)arg1;

@end
