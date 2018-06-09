/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLayoutAnchorRule : NSObject <NSLayoutRule> {
    double  _constant;
    NSLayoutAnchor * _firstAnchor;
    NSString * _identifier;
    double  _multiplier;
    float  _priority;
    long long  _relation;
    NSLayoutAnchor * _secondAnchor;
}

@property (readonly) double constant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSLayoutAnchor *firstAnchor;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly) double multiplier;
@property (readonly) float priority;
@property (readonly) long long relation;
@property (readonly, copy) NSString *ruleDescription;
@property (readonly, copy) NSLayoutAnchor *secondAnchor;
@property (readonly) Class superclass;

- (double)constant;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)firstAnchor;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithFirstAnchor:(id)arg1 secondAnchor:(id)arg2 relation:(long long)arg3 multiplier:(double)arg4 constant:(double)arg5 priority:(float)arg6 identifier:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)makeChildRules;
- (id)makeLayoutConstraint;
- (double)multiplier;
- (float)priority;
- (long long)relation;
- (id)ruleDescription;
- (id)secondAnchor;

@end
