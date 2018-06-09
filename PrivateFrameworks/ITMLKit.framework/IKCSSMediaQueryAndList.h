/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {
    bool  _negated;
    NSMutableArray * _queryList;
    NSString * _type;
}

@property bool negated;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)addQuery:(id)arg1;
- (unsigned long long)count;
- (id)description;
- (bool)evaluate;
- (id)expressionAsString;
- (id)expressionList;
- (id)init;
- (bool)negated;
- (void)setNegated:(bool)arg1;
- (void)setType:(id)arg1;
- (id)subQueryAtIndex:(unsigned long long)arg1;
- (id)type;

@end
