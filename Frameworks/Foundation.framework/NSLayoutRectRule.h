/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutRectRule : NSObject <NSLayoutRule> {
    NSLayoutRect * _firstLayoutRect;
    long long  _relation;
    NSLayoutRect * _secondLayoutRect;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutRect *firstLayoutRect;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property long long relation;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly, copy) NSLayoutRect *secondLayoutRect;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstLayoutRect;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2;
- (id)initWithFirstLayoutRect:(id)arg1 secondLayoutRect:(id)arg2 relation:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)makeChildRules;
- (long long)relation;
- (id)ruleDescription;
- (id)secondLayoutRect;
- (void)setRelation:(long long)arg1;

@end
