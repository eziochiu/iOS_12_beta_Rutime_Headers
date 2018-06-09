/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollisionBehavior : UIDynamicBehavior {
    NSMutableDictionary * _boundaryBodies;
    NSMutableDictionary * _boundaryPaths;
    struct { 
        unsigned int delegateBeganWithItem : 1; 
        unsigned int delegateEndedWithItem : 1; 
        unsigned int delegateBeganWithBoundary : 1; 
        unsigned int delegateEndedWithBoundary : 1; 
    }  _collisionBehaviorFlags;
    <UICollisionBehaviorDelegate> * _collisionDelegate;
    unsigned long long  _collisionMode;
    unsigned int  _groupBID;
    unsigned int  _groupVID;
    PKExtendedPhysicsBody * _implicitBoundsBody;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _implicitBoundsInsets;
    bool  _usesImplicitBounds;
}

@property (nonatomic, readonly, copy) NSArray *boundaryIdentifiers;
@property (nonatomic) <UICollisionBehaviorDelegate> *collisionDelegate;
@property (nonatomic) unsigned long long collisionMode;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic) bool translatesReferenceBoundsIntoBoundary;

+ (bool)_isPrimitiveBehavior;

- (void).cxx_destruct;
- (void)_addCollisionItem:(id)arg1;
- (void)_applySettings;
- (void)_associate;
- (void)_didBeginContact:(id)arg1;
- (void)_didEndContact:(id)arg1;
- (void)_dissociate;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)_registerBodyForIdentifier:(id)arg1 path:(id)arg2;
- (void)_registerBoundaryForIdentifier:(id)arg1 path:(id)arg2;
- (void)_removeExplicitBoundaryBodies;
- (void)_removeExplicitBoundaryPaths;
- (void)_removeImplicitBoundaries;
- (void)_setCollisions:(bool)arg1 forBody:(id)arg2 isEdge:(bool)arg3;
- (void)_setTranslatesReferenceItemBounds:(bool)arg1 intoBoundaryWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (void)_setupExplicitBoundaries;
- (void)_setupImplicitBoundaries;
- (void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2;
- (void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(struct CGPoint { double x1; double x2; })arg2 toPoint:(struct CGPoint { double x1; double x2; })arg3;
- (void)addItem:(id)arg1;
- (id)boundaryIdentifiers;
- (id)boundaryWithIdentifier:(id)arg1;
- (id)collisionDelegate;
- (unsigned long long)collisionMode;
- (id)description;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)items;
- (void)removeAllBoundaries;
- (void)removeBoundaryWithIdentifier:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)setCollisionDelegate:(id)arg1;
- (void)setCollisionMode:(unsigned long long)arg1;
- (void)setTranslatesReferenceBoundsIntoBoundary:(bool)arg1;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)translatesReferenceBoundsIntoBoundary;

@end
