/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKRequestIdentifier : NSObject <NSCopying> {
    NSArray * _arguments;
    unsigned long long  _savedHash;
    SEL  _selector;
}

+ (id)requestIdentifierForInvocation:(id)arg1;

- (id)_argumentsForInvocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithInvocation:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
