/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface RERecentActionRelevanceProvider : RERelevanceProvider {
    REIdentifier * _actionIdentifier;
}

@property (nonatomic, readonly) REIdentifier *actionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)_hash;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
