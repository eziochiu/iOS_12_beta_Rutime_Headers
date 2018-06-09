/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCMMSuggestionsDataSourceContext : NSObject {
    long long  _fetchLimit;
    unsigned long long  _matchingStrategy;
    PHSuggestionMessageContext * _messageContext;
    unsigned char  _type;
}

@property (nonatomic) long long fetchLimit;
@property (nonatomic) unsigned long long matchingStrategy;
@property (nonatomic, retain) PHSuggestionMessageContext *messageContext;
@property (nonatomic, readonly) unsigned char type;

- (void).cxx_destruct;
- (id)description;
- (long long)fetchLimit;
- (id)initWithType:(unsigned char)arg1;
- (unsigned long long)matchingStrategy;
- (id)messageContext;
- (void)setFetchLimit:(long long)arg1;
- (void)setMatchingStrategy:(unsigned long long)arg1;
- (void)setMessageContext:(id)arg1;
- (bool)supportsMatching;
- (unsigned char)type;

@end
