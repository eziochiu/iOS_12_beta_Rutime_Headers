/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNReferenceNode : SCNNode {
    NSURL * _catalogURL;
    bool  _loaded;
    long long  _loadingPolicy;
    NSMutableDictionary * _overrides;
    NSURL * _referenceURL;
    NSURL * _sourceDocumentURL;
}

@property (getter=isLoaded, readonly) bool loaded;
@property (nonatomic) long long loadingPolicy;
@property (nonatomic, copy) NSURL *referenceURL;

+ (id)referenceNodeWithURL:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_applyOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)_applyOverrides;
- (void)_applyUnsharing:(id)arg1 alreadyShared:(id)arg2;
- (id)_catalog;
- (void)_diffNode:(id)arg1 with:(id)arg2 path:(id)arg3;
- (void)_diffObject:(id)arg1 with:(id)arg2 path:(id)arg3;
- (bool)_isAReference;
- (bool)_isNameUnique:(id)arg1;
- (id)_loadReferencedSceneWithURL:(id)arg1 catalog:(id)arg2;
- (void)_loadWithCatalog:(id)arg1;
- (void)_loadWithURL:(id)arg1;
- (void)_loadWithURL:(id)arg1 catalog:(id)arg2;
- (id)_resolveURL;
- (void)addOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)collectOverrides;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (bool)isLoaded;
- (void)load;
- (long long)loadingPolicy;
- (id)overrides;
- (id)referenceURL;
- (void)removeAllOverrides;
- (void)removeForKeyPath:(id)arg1;
- (void)setLoadingPolicy:(long long)arg1;
- (void)setOverride:(id)arg1 forKeyPath:(id)arg2;
- (void)setOverrides:(id)arg1;
- (void)setReferenceURL:(id)arg1;
- (void)unload;

@end
