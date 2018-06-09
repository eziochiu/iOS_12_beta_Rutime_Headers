/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContactMatchInfo : NSObject <NSSecureCoding> {
    CNPromise * _excerpt;
    bool  _matchedNameProperty;
    NSDictionary * _matchedProperties;
    NSNumber * _relevanceScore;
}

@property (nonatomic, retain) CNPromise *excerpt;
@property (nonatomic) bool matchedNameProperty;
@property (nonatomic, copy) NSDictionary *matchedProperties;
@property (nonatomic, copy) NSNumber *relevanceScore;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)excerpt;
- (id)initWithCoder:(id)arg1;
- (bool)matchedNameProperty;
- (id)matchedProperties;
- (id)relevanceScore;
- (void)setExcerpt:(id)arg1;
- (void)setMatchedNameProperty:(bool)arg1;
- (void)setMatchedProperties:(id)arg1;
- (void)setRelevanceScore:(id)arg1;

@end
