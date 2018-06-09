/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

@interface REDependencyGraphNode : NSObject {
    NSMutableSet * _dependencies;
    id  _item;
}

@property (nonatomic, retain) NSMutableSet *dependencies;
@property (nonatomic, readonly) id item;

- (void).cxx_destruct;
- (id)dependencies;
- (unsigned long long)hash;
- (id)initWithItem:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (void)setDependencies:(id)arg1;

@end
