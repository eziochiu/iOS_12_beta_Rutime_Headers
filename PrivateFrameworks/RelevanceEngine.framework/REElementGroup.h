/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REElementGroup : NSObject <NSCopying, REIndentedDescription> {
    unsigned long long  _behavior;
    NSString * _groupIdentifier;
    long long  _maxElementCount;
}

@property (nonatomic) unsigned long long behavior;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long maxElementCount;
@property (readonly) Class superclass;

+ (id)adjoiningElementGroupWithIdentifier:(id)arg1;
+ (id)topElementGroupWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)behavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithGroupIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maxElementCount;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setMaxElementCount:(long long)arg1;

@end
