/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeSearchResult : NSObject {
    id  _identifier;
    bool  _isExactMatch;
    NSString * _matchingKeyword;
    unsigned long long  _priority;
    NSNumber * _score;
}

@property (nonatomic, readonly) id identifier;
@property (nonatomic) bool isExactMatch;
@property (nonatomic, readonly) NSString *matchingKeyword;
@property (nonatomic, readonly) unsigned long long priority;
@property (nonatomic, copy) NSNumber *score;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 matchingKeyword:(id)arg2 priority:(unsigned long long)arg3 score:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatch;
- (id)matchingKeyword;
- (unsigned long long)priority;
- (id)score;
- (void)setIsExactMatch:(bool)arg1;
- (void)setScore:(id)arg1;

@end
