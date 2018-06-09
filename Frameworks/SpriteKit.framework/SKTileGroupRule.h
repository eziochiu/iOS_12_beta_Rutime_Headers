/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKTileGroupRule : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _adjacency;
    NSString * _name;
    SKTileGroup * _parentGroup;
    NSMutableArray * _tileDefinitionIDs;
    NSMutableArray * _tileDefinitions;
}

@property (nonatomic) unsigned long long adjacency;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) SKTileGroup *parentGroup;
@property (nonatomic, readonly) NSArray *tileDefinitionIDs;
@property (nonatomic, copy) NSArray *tileDefinitions;

+ (bool)supportsSecureCoding;
+ (id)tileGroupRuleWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)adjacency;
- (void)calcTileDefinitionIDsWithTileSet:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdjacency:(unsigned long long)arg1 tileDefinitions:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (id)name;
- (id)parentGroup;
- (void)setAdjacency:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setParentGroup:(id)arg1;
- (void)setTileDefinitionIDs:(id)arg1;
- (void)setTileDefinitionParentPointers;
- (void)setTileDefinitions:(id)arg1;
- (void)setTileDefinitionsFromIDsWithTileSet:(id)arg1;
- (id)tileDefinitionIDs;
- (id)tileDefinitions;

@end
