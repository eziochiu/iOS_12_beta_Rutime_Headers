/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentNode : NSObject {
    long long  _attribute;
    NSString * _componentIdentifier;
    NSMutableSet * _mutableDependencies;
}

@property (nonatomic, readonly) long long attribute;
@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, readonly) NSSet *dependencies;
@property (nonatomic, retain) NSMutableSet *mutableDependencies;

- (void).cxx_destruct;
- (void)addComponentDependency:(id)arg1;
- (long long)attribute;
- (id)componentIdentifier;
- (id)dependencies;
- (id)description;
- (bool)hasDependencyToComponentIdentifier:(id)arg1 attribute:(long long)arg2;
- (unsigned long long)hash;
- (id)initWithComponentIdentifier:(id)arg1 andAttribute:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableDependencies;
- (void)setMutableDependencies:(id)arg1;

@end
