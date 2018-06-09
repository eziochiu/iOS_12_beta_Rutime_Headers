/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUGeometrySpaceMap : NSObject <NSCopying, NUSpaceMapping> {
    NSMutableDictionary * _spaces;
}

@property (retain) NSMutableDictionary *spaces;

+ (bool)_canReduceSpaces:(id)arg1 withSpaces:(id)arg2;
+ (id)_reduceSpaces:(id)arg1 withSpaces:(id)arg2;

- (void).cxx_destruct;
- (void)addTagNode:(id)arg1;
- (void)applyTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithSpaceMap:(id)arg1;
- (void)mergeWithSpaceMap:(id)arg1;
- (void)setSpace:(id)arg1 forKey:(id)arg2;
- (void)setSpaces:(id)arg1;
- (void)setSpaces:(id)arg1 forKey:(id)arg2;
- (void)setSpacesFromMap:(id)arg1 andPruneAgainstTagNode:(id)arg2 withPath:(id)arg3;
- (id)spaceForKey:(id)arg1;
- (id)spaces;
- (id)spacesForKey:(id)arg1;
- (id)taggedSpacesForKey:(id)arg1;
- (id)transformWithSourceSpace:(id)arg1 destinationSpace:(id)arg2 error:(out id*)arg3;

@end
