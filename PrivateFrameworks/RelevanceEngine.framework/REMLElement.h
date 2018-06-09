/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REMLElement : NSObject <NSCopying, REIndentedDescription> {
    REFeatureMap * _featureMap;
    NSString * _identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) REFeatureMap *featureMap;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(unsigned long long)arg1;
- (id)featureMap;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 featureMap:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
