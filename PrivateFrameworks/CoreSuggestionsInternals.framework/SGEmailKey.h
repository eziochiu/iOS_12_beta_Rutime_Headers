/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGEmailKey : SGMessageKey <SGEntityKey>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *messageId;
@property (readonly) Class superclass;

+ (bool)isSupportedEntityType:(long long)arg1;

- (id)description;
- (id)initWithMailMessageKey:(id)arg1;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEmailKey:(id)arg1;
- (id)messageId;
- (id)toMailMessageKey;

@end
