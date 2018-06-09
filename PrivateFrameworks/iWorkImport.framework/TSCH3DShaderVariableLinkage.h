/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DShaderVariableLinkage : NSObject {
    struct TSCH3DShaderVariableScopes { 
        struct array<TSCH3DShaderVariableScopeType, 2> { 
            struct TSCH3DShaderVariableScopeType { 
                unsigned long long mValue; 
            } __elems_[2]; 
        } mScopes; 
    }  mDeclaredScope;
    NSMutableSet * mDependees;
    bool  mIsUsed;
    struct TSCH3DShaderType { 
        unsigned long long mValue; 
    }  mLinked;
    struct TSCH3DShaderVariableScopes { 
        struct array<TSCH3DShaderVariableScopeType, 2> { 
            struct TSCH3DShaderVariableScopeType { 
                unsigned long long mValue; 
            } __elems_[2]; 
        } mScopes; 
    }  mScope;
    TSCH3DShaderVariable * mVariable;
}

@property (nonatomic, readonly) bool canHaveFragment;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCH3DShaderVariableScopes={array<TSCH3DShaderVariableScopeType' */ struct  declaredScope; /* unknown property attribute:  2>=[2{TSCH3DShaderVariableScopeType=Q}]}} */
@property (nonatomic, readonly) NSMutableSet *dependees;
@property (nonatomic, readonly) bool hasAttribute;
@property (nonatomic, readonly) bool hasFragment;
@property (nonatomic, readonly) unsigned long long hasGlobal;
@property (nonatomic, readonly) bool hasVertex;
@property (nonatomic, readonly) bool isAttribute;
@property (nonatomic, readonly) bool isFragment;
@property (nonatomic, readonly) bool isFragmentLinkable;
@property (nonatomic, readonly) bool isLinked;
@property (nonatomic, readonly) bool isSpecial;
@property (nonatomic, readonly) bool isUniform;
@property (nonatomic) bool isUsed;
@property (nonatomic, readonly) bool isVertex;
@property (nonatomic, readonly) bool isVertexLinkable;
@property (nonatomic, readonly) bool isVertexVarying;
@property (nonatomic, readonly) struct TSCH3DShaderType { unsigned long long x1; } linked;
@property (nonatomic, readonly) bool notLinked;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{TSCH3DShaderVariableScopes={array<TSCH3DShaderVariableScopeType' */ struct  scope; /* unknown property attribute:  2>=[2{TSCH3DShaderVariableScopeType=Q}]}} */
@property (nonatomic, readonly) bool scopeHasFragment;
@property (nonatomic, readonly) bool scopedInAll;
@property (nonatomic, readonly) struct TSCH3DShaderType { unsigned long long x1; } shaderType;
@property (nonatomic, readonly) TSCH3DShaderVariable *variable;

+ (id)linkageWithVariable:(id)arg1;

- (id).cxx_construct;
- (void)addBodyScope:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)addDeclaredShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (void)addLinkage:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)addShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (bool)canHaveFragment;
- (void)dealloc;
- (struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2> { struct TSCH3DShaderVariableScopeType { unsigned long long x_1_2_1; } x_1_1_1[2]; } x1; })declaredScope;
- (id)dependees;
- (id)description;
- (id)globalNameForShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (bool)hasAttribute;
- (bool)hasBody:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (bool)hasFragment;
- (unsigned long long)hasGlobal;
- (bool)hasLinkage:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (bool)hasShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (bool)hasVarying;
- (bool)hasVertex;
- (id)initWithVariable:(id)arg1;
- (bool)isAttribute;
- (bool)isFragment;
- (bool)isFragmentLinkable;
- (bool)isGlobalScope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg1;
- (bool)isLinked;
- (bool)isSpecial;
- (bool)isUniform;
- (bool)isUsed;
- (bool)isVarying:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (bool)isVertex;
- (bool)isVertexLinkable;
- (bool)isVertexVarying;
- (struct TSCH3DShaderType { unsigned long long x1; })linked;
- (id)nameForShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (bool)notLinked;
- (void)removeLinkage:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)removeShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (id)resolveGlobalNameForShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2 defaultTo:(id)arg3;
- (struct TSCH3DShaderVariableScopes { struct array<TSCH3DShaderVariableScopeType, 2> { struct TSCH3DShaderVariableScopeType { unsigned long long x_1_2_1; } x_1_1_1[2]; } x1; })scope;
- (bool)scopeHasFragment;
- (bool)scopedInAll;
- (void)setIsUsed:(bool)arg1;
- (void)setLinkage:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (void)setShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (struct TSCH3DShaderType { unsigned long long x1; })shaderType;
- (void)unlink;
- (bool)updateLinkage:(struct TSCH3DShaderType { unsigned long long x1; })arg1;
- (bool)updateShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (id)variable;
- (id)variableDeclarationInShader:(struct TSCH3DShaderType { unsigned long long x1; })arg1 scope:(struct TSCH3DShaderVariableScopeType { unsigned long long x1; })arg2;
- (id)variableQualifiersWithStorageQualifier:(id)arg1;

@end
